// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(SW0,0,0);
    VL_IN8(SW1,0,0);
    VL_IN8(SW2,0,0);
    VL_IN8(SW3,0,0);
    VL_IN8(SW4,0,0);
    VL_IN8(SW5,0,0);
    VL_IN8(SW6,0,0);
    VL_IN8(SW7,0,0);
    VL_IN8(SW8,0,0);
    VL_IN8(SW9,0,0);
    VL_OUT8(LEDR0,0,0);
    VL_OUT8(LEDR1,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 4> top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
