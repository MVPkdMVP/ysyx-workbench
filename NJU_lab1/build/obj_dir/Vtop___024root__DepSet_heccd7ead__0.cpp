// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ top__DOT__Y;
    top__DOT__Y = 0;
    CData/*7:0*/ top__DOT__X;
    top__DOT__X = 0;
    CData/*1:0*/ top__DOT__F;
    top__DOT__F = 0;
    CData/*1:0*/ top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out;
    top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ top__DOT__m0__DOT__i0__DOT__i0__DOT__hit;
    top__DOT__m0__DOT__i0__DOT__i0__DOT__hit = 0;
    CData/*1:0*/ __VdfgRegularize_h2dd05df0_0_1;
    __VdfgRegularize_h2dd05df0_0_1 = 0;
    CData/*3:0*/ __VdfgRegularize_h2dd05df0_0_2;
    __VdfgRegularize_h2dd05df0_0_2 = 0;
    CData/*5:0*/ __VdfgRegularize_h2dd05df0_0_3;
    __VdfgRegularize_h2dd05df0_0_3 = 0;
    // Body
    top__DOT__Y = (((IData)(vlSelfRef.SW1) << 1U) | (IData)(vlSelfRef.SW0));
    __VdfgRegularize_h2dd05df0_0_1 = (((IData)(vlSelfRef.SW3) 
                                       << 1U) | (IData)(vlSelfRef.SW2));
    vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = __VdfgRegularize_h2dd05df0_0_1;
    __VdfgRegularize_h2dd05df0_0_2 = (((IData)(vlSelfRef.SW5) 
                                       << 3U) | (((IData)(vlSelfRef.SW4) 
                                                  << 2U) 
                                                 | (IData)(__VdfgRegularize_h2dd05df0_0_1)));
    vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (3U & ((IData)(__VdfgRegularize_h2dd05df0_0_2) 
                 >> 2U));
    __VdfgRegularize_h2dd05df0_0_3 = (((IData)(vlSelfRef.SW7) 
                                       << 5U) | (((IData)(vlSelfRef.SW6) 
                                                  << 4U) 
                                                 | (IData)(__VdfgRegularize_h2dd05df0_0_2)));
    vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (3U & ((IData)(__VdfgRegularize_h2dd05df0_0_3) 
                 >> 4U));
    top__DOT__X = (((IData)(vlSelfRef.SW9) << 7U) | 
                   (((IData)(vlSelfRef.SW8) << 6U) 
                    | (IData)(__VdfgRegularize_h2dd05df0_0_3)));
    vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (3U & ((IData)(top__DOT__X) >> 6U));
    top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(top__DOT__Y) == vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                     [0U]))) & vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list
         [0U]);
    top__DOT__m0__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__Y) 
                                                == 
                                                vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                                                [0U]);
    top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out = 
        ((IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out) 
         | ((- (IData)(((IData)(top__DOT__Y) == vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                        [1U]))) & vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list
            [1U]));
    top__DOT__m0__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__hit) 
                                                | ((IData)(top__DOT__Y) 
                                                   == 
                                                   vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                                                   [1U]));
    top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out = 
        ((IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out) 
         | ((- (IData)(((IData)(top__DOT__Y) == vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                        [2U]))) & vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list
            [2U]));
    top__DOT__m0__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__hit) 
                                                | ((IData)(top__DOT__Y) 
                                                   == 
                                                   vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                                                   [2U]));
    top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out = 
        ((IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out) 
         | ((- (IData)(((IData)(top__DOT__Y) == vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                        [3U]))) & vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__data_list
            [3U]));
    top__DOT__m0__DOT__i0__DOT__i0__DOT__hit = ((IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__hit) 
                                                | ((IData)(top__DOT__Y) 
                                                   == 
                                                   vlSelfRef.top__DOT__m0__DOT__i0__DOT__i0__DOT__key_list
                                                   [3U]));
    top__DOT__F = ((IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__hit)
                    ? (IData)(top__DOT__m0__DOT__i0__DOT__i0__DOT__lut_out)
                    : 0U);
    vlSelfRef.LEDR0 = (1U & (IData)(top__DOT__F));
    vlSelfRef.LEDR1 = (1U & ((IData)(top__DOT__F) >> 1U));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.SW0 & 0xfeU)))) {
        Verilated::overWidthError("SW0");}
    if (VL_UNLIKELY(((vlSelfRef.SW1 & 0xfeU)))) {
        Verilated::overWidthError("SW1");}
    if (VL_UNLIKELY(((vlSelfRef.SW2 & 0xfeU)))) {
        Verilated::overWidthError("SW2");}
    if (VL_UNLIKELY(((vlSelfRef.SW3 & 0xfeU)))) {
        Verilated::overWidthError("SW3");}
    if (VL_UNLIKELY(((vlSelfRef.SW4 & 0xfeU)))) {
        Verilated::overWidthError("SW4");}
    if (VL_UNLIKELY(((vlSelfRef.SW5 & 0xfeU)))) {
        Verilated::overWidthError("SW5");}
    if (VL_UNLIKELY(((vlSelfRef.SW6 & 0xfeU)))) {
        Verilated::overWidthError("SW6");}
    if (VL_UNLIKELY(((vlSelfRef.SW7 & 0xfeU)))) {
        Verilated::overWidthError("SW7");}
    if (VL_UNLIKELY(((vlSelfRef.SW8 & 0xfeU)))) {
        Verilated::overWidthError("SW8");}
    if (VL_UNLIKELY(((vlSelfRef.SW9 & 0xfeU)))) {
        Verilated::overWidthError("SW9");}
}
#endif  // VL_DEBUG
