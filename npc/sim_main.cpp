#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"          // (A) 波形记录类在这里

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;   // (B) 造一个"录像机"
    Vtop *top = new Vtop;
    top->trace(tfp, 99);                      // (C) 把录像机接上电路, 99=录所有层次
    tfp->open("sim.vcd");                     //     开始录, 写进 sim.vcd

    int main_time = 0;                        // 仿真时间计数器(相当于xsim里的时间轴)

    for (int i = 0; i < 20; i++) {            // (E) 改成20次, 别无限录爆磁盘
        int a = rand() & 1;
        int b = rand() & 1;

        main_time++;                          // 时间往前走一格
        top->a = a;
        top->b = b;
        top->eval();                          // 电路算一遍
        tfp->dump(main_time);                 // (D) 把"此刻所有信号值"记进文件

        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == (a ^ b));
    }

    tfp->close();                             // (F) 停止录像, 关闭文件
    delete top;
    return 0;
}
