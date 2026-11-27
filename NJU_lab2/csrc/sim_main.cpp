// ===== 实验二 功能仿真：穷举 en x 256 种输入，自检 Y/VALID/HEX =====
#include <cstdio>
#include "verilated.h"
#include "Vtop.h"

static Vtop* top;

// 期望段码表（h[6]=A ... h[0]=G，高电平点亮），与 top.v 的 bcd7seg 一致
static unsigned seg_table(int code) {
  switch (code) {
    case 0: return 0b1111110;
    case 1: return 0b0110000;
    case 2: return 0b1101101;
    case 3: return 0b1111001;
    case 4: return 0b0110011;
    case 5: return 0b1011011;
    case 6: return 0b1011111;
    case 7: return 0b1110000;
  }
  return 0b1111111;
}

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  top = new Vtop;

  int total = 0, errors = 0;
  for (unsigned en = 0; en <= 1; en++)
    for (unsigned x = 0; x < 256; x++) {
      top->SW = x;
      top->EN = en;
      top->eval();

      // 期望值：高位优先 = 最高位的 1 的位号
      unsigned exp_valid = (en && x != 0) ? 1u : 0u;
      unsigned exp_y = 0;
      if (exp_valid)
        for (int i = 7; i >= 0; i--)
          if (x & (1u << i)) { exp_y = i; break; }
      unsigned exp_hex = exp_valid ? seg_table(exp_y) : 0b0000001; // '-' 只亮G

      total++;
      if (top->VALID != exp_valid || top->Y != exp_y || top->HEX != exp_hex) {
        errors++;
        if (errors <= 8)
          printf("FAIL: en=%u x=0x%02x -> Y=%u VALID=%u HEX=0x%02x (期望 Y=%u VALID=%u HEX=0x%02x)\n",
                 en, x, top->Y, top->VALID, top->HEX, exp_y, exp_valid, exp_hex);
      }
    }
  printf("共 %d 组合，错误 %d 组\n", total, errors);
  printf(errors == 0 ? "TEST PASSED\n" : "TEST FAILED\n");

  delete top;
  return errors == 0 ? 0 : 1;
}

