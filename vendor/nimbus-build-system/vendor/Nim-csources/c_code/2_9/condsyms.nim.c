/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* tyArray_XaTKZcbaVb0ylpTdg2U9cjA[31];
typedef NimStringDesc* tyArray_7FY9bMaNgkhhh2bW3M2S9cSw[30];
N_LIB_PRIVATE N_NIMCALL(void, nstPut)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* val);
N_LIB_PRIVATE N_NIMCALL(void, del_EUHa9bsfDUl6q3GrReV9cQaw)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(void, defineSymbol_znuJizGq3isbcihOOtUY0A)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols, NimStringDesc* symbol, NimStringDesc* value);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
extern TNimType NTI_01UoAKYz1MxZiuG1X2VhNQ_;
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_2, "nimhygiene", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_3, "true", 4);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_4, "niminheritable", 14);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_5, "nimmixin", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_6, "nimeffects", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_7, "nimbabel", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_8, "nimcomputedgoto", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_9, "nimunion", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_10, "nimnewshared", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_11, "nimNewTypedesc", 14);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_12, "nimrequiresnimframe", 19);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_13, "nimparsebiggestfloatmagic", 25);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_14, "nimalias", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_15, "nimlocks", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_16, "nimnode", 7);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_17, "nimnomagic64", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_18, "nimvarargstyped", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_19, "nimtypedescfixed", 16);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_20, "nimKnowsNimvm", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_21, "nimArrIdx", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_22, "nimHasalignOf", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_23, "nimNewShiftOps", 14);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_24, "nimDistros", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_25, "nimHasCppDefine", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_26, "nimGenericInOutFlags", 20);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_27, "nimNoArrayToCstringConversion", 29);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_28, "nimNewRoof", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_29, "nimHasRunnableExamples", 22);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_30, "nimNewDot", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_31, "nimHasNilChecks", 15);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_32, "nimSymKind", 10);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_33, "nimVmEqIdent", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_34, "nimNoNil", 8);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_35, "nimNoZeroTerminator", 19);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_36, "nimNotNil", 9);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_37, "nimVmExportFixed", 16);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_38, "nimHasSymOwnerInMacro", 21);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_39, "nimNewRuntime", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_40, "nimIncrSeqV3", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_41, "nimAshr", 7);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_42, "nimNoNilSeqs", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_43, "nimNoNilSeqs2", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_44, "nimHasUserErrors", 16);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_45, "nimUncheckedArrayTyp", 20);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_46, "nimHasTypeof", 12);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_47, "nimErrorProcCanHaveBody", 23);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_48, "nimHasInstantiationOfInMacro", 28);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_49, "nimHasHotCodeReloading", 22);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_50, "nimHasNilSeqs", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_51, "nimHasSignatureHashInMacro", 26);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_52, "nimHasDefault", 13);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_53, "nimMacrosSizealignof", 20);
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_54, "nimHas", 6);
extern NIM_CONST tyArray_XaTKZcbaVb0ylpTdg2U9cjA WarningsToStr_YMpLgyi9aCfNf9a1BIs9aRGXQ;
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_56, "nimHasWarning", 13);
extern NIM_CONST tyArray_7FY9bMaNgkhhh2bW3M2S9cSw HintsToStr_Ztwykhn01OkbTo5TdXFJUw;
STRING_LITERAL(TM_UpH3CWy69aOHB2xkQBDirlg_58, "nimHasHint", 10);

N_LIB_PRIVATE N_NIMCALL(void, defineSymbol_znuJizGq3isbcihOOtUY0A)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols, NimStringDesc* symbol, NimStringDesc* value) {
	nstPut(symbols, symbol, value);
}

N_LIB_PRIVATE N_NIMCALL(void, undefSymbol_7r39cyzHGkKGsFt9bPVES2hQ)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols, NimStringDesc* symbol) {
	del_EUHa9bsfDUl6q3GrReV9cQaw(symbols, symbol);
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, initDefines_hODM2As3BZvC4AAFuVvWwQ)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols) {
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_2), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_4), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_5), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_6), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_7), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_8), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_9), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_10), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_11), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_12), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_13), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_14), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_15), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_16), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_17), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_18), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_19), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_20), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_21), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_22), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_23), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_24), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_25), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_26), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_27), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_28), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_29), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_30), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_31), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_32), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_33), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_34), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_35), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_36), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_37), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_38), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_39), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_40), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_41), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_42), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_43), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_44), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_45), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_46), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_47), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_48), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_49), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_50), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_51), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_52), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_53), ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
	{
		tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ f;
		NI res;
		f = (tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ)0;
		res = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				NI TM_UpH3CWy69aOHB2xkQBDirlg_55;
				if (!(res <= ((NI) 10))) goto LA3;
				f = ((tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ)chckRange(res, ((tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ) 0), ((tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ) 10)));
				T4_ = (NimStringDesc*)0;
				T4_ = rawNewString((reprEnum((NI)f, (&NTI_01UoAKYz1MxZiuG1X2VhNQ_)) ? reprEnum((NI)f, (&NTI_01UoAKYz1MxZiuG1X2VhNQ_))->Sup.len : 0) + 6);
appendString(T4_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_54));
appendString(T4_, reprEnum((NI)f, (&NTI_01UoAKYz1MxZiuG1X2VhNQ_)));
				defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, T4_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
				TM_UpH3CWy69aOHB2xkQBDirlg_55 = addInt(res, ((NI) 1));
				res = (NI)(TM_UpH3CWy69aOHB2xkQBDirlg_55);
			} LA3: ;
		}
	}
	{
		NimStringDesc* s;
		NI i;
		s = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			if (!(((NI) (i)) <= ((NI) 30))) goto LA8_;
			{
				while (1) {
					NimStringDesc* T12_;
					NI TM_UpH3CWy69aOHB2xkQBDirlg_57;
					s = copyString(WarningsToStr_YMpLgyi9aCfNf9a1BIs9aRGXQ[(i)- 0]);
					T12_ = (NimStringDesc*)0;
					T12_ = rawNewString((s ? s->Sup.len : 0) + 13);
appendString(T12_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_56));
appendString(T12_, s);
					defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, T12_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
					{
						if (!(((NI) 30) <= ((NI) (i)))) goto LA15_;
						goto LA10;
					}
					LA15_: ;
					TM_UpH3CWy69aOHB2xkQBDirlg_57 = addInt(i, ((NI) 1));
					if (TM_UpH3CWy69aOHB2xkQBDirlg_57 < 0 || TM_UpH3CWy69aOHB2xkQBDirlg_57 > 30) raiseOverflow();
					i = (NI)(TM_UpH3CWy69aOHB2xkQBDirlg_57);
				}
			} LA10: ;
		}
		LA8_: ;
	}
	{
		NimStringDesc* s_2;
		NI i_2;
		s_2 = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			if (!(((NI) (i_2)) <= ((NI) 29))) goto LA20_;
			{
				while (1) {
					NimStringDesc* T24_;
					NI TM_UpH3CWy69aOHB2xkQBDirlg_59;
					s_2 = copyString(HintsToStr_Ztwykhn01OkbTo5TdXFJUw[(i_2)- 0]);
					T24_ = (NimStringDesc*)0;
					T24_ = rawNewString((s_2 ? s_2->Sup.len : 0) + 10);
appendString(T24_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_58));
appendString(T24_, s_2);
					defineSymbol_znuJizGq3isbcihOOtUY0A(symbols, T24_, ((NimStringDesc*) &TM_UpH3CWy69aOHB2xkQBDirlg_3));
					{
						if (!(((NI) 29) <= ((NI) (i_2)))) goto LA27_;
						goto LA22;
					}
					LA27_: ;
					TM_UpH3CWy69aOHB2xkQBDirlg_59 = addInt(i_2, ((NI) 1));
					if (TM_UpH3CWy69aOHB2xkQBDirlg_59 < 0 || TM_UpH3CWy69aOHB2xkQBDirlg_59 > 29) raiseOverflow();
					i_2 = (NI)(TM_UpH3CWy69aOHB2xkQBDirlg_59);
				}
			} LA22: ;
		}
		LA20_: ;
	}
}
