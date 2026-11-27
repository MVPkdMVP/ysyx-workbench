#include <cstdio>
#include <cstdlib>
#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top);  // 定义在 make 自动生成的 auto_bind.cpp 里

static Vtop dut;

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);

  nvboard_bind_all_pins(&dut);
  nvboard_init();

  while (true) {
    dut.eval();
    nvboard_update();
  }
  nvboard_quit();
  return 0;
}
