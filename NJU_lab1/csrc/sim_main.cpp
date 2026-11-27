#include <cstdio>
#include "verilated.h"
#include "Vtop.h"

static Vtop* top;

static void set_pins(unsigned Y, unsigned X0, unsigned X1, unsigned X2, unsigned X3) {
  top->SW0 = Y & 1;
  top->SW1 = (Y >> 1) & 1;
  top->SW2 = X0 & 1;
  top->SW3 = (X0 >> 1) & 1;
  top->SW4 = X1 & 1;
  top->SW5 = (X1 >> 1) & 1;
  top->SW6 = X2 & 1;
  top->SW7 = (X2 >> 1) & 1;
  top->SW8 = X3 & 1;
  top->SW9 = (X3 >> 1) & 1;
}

static unsigned get_F() { return (top->LEDR1 << 1) | top->LEDR0; }

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  top = new Vtop;

  int total = 0, errors = 0;
  for (unsigned Y = 0; Y < 4; Y++)
    for (unsigned x0 = 0; x0 < 4; x0++)
      for (unsigned x1 = 0; x1 < 4; x1++)
        for (unsigned x2 = 0; x2 < 4; x2++)
          for (unsigned x3 = 0; x3 < 4; x3++) {
            set_pins(Y, x0, x1, x2, x3);
            top->eval();
            unsigned exp[4] = {x0, x1, x2, x3};
            unsigned got = get_F();
            total++;
            if (got != exp[Y]) {
              errors++;
              if (errors <= 5)
                printf("FAIL: Y=%u X0=%u X1=%u X2=%u X3=%u -> F=%u (期望 %u)\n",
                       Y, x0, x1, x2, x3, got, exp[Y]);
            }
          }
  printf("共 %d 组合，错误 %d 组\n", total, errors);
  if (errors == 0) printf("TEST PASSED\n");
  else             printf("TEST FAILED\n");

  delete top;
  return errors == 0 ? 0 : 1;
}
