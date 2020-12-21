/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
struct tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og {
NIM_BOOL trueColorIsSupported;
NIM_BOOL trueColorIsEnabled;
NIM_BOOL fgSetColor;
};
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
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU16 tySet_tyEnum_Style_NXKayqTLMsAibFwNceBlpA;
typedef NU8 tyEnum_Style_NXKayqTLMsAibFwNceBlpA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_ForegroundColor_ez9ah4IgQc0AbdW68acioDg;
static N_NIMCALL(void, Marker_tyRef_flNJLrANZti6Wiy5LTlGGA)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_CN3raB9atujkEiPpxYAdlgQ_3)(void);
N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle_MctBCgDcXWCh9ae9cV5npFvQ)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, write_K9cOfFd4JHcDlmXKlD5CfyQ)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode_bfu8TiCl9avGVg9csJBAYIRQ)(NI style);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, add_IbYQ9cTcoQ89aIwM2IEYGMng)(NimStringDesc** result, NI64 x);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og* gTerm_wkpx9csKte2r1l45yvskIcA;
TNimType NTI_EcU8GhMNGo9bGDXbfqZ82og_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
TNimType NTI_flNJLrANZti6Wiy5LTlGGA_;
NI gFG_g7w4T3anr20OMlWloNx2tQ;
NI gBG_dgmeknpHWrtwqMJGQAp9atA;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_4, "\033[", 2);
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_5, "m", 1);
STRING_LITERAL(TM_CN3raB9atujkEiPpxYAdlgQ_6, "\033[0m", 4);
static N_NIMCALL(void, Marker_tyRef_flNJLrANZti6Wiy5LTlGGA)(void* p, NI op) {
	tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og* a;
	a = (tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og*)p;
}
static N_NIMCALL(void, TM_CN3raB9atujkEiPpxYAdlgQ_3)(void) {
	nimGCvisit((void*)gTerm_wkpx9csKte2r1l45yvskIcA, 0);
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty_nl1ZkCcu60SHMMytm4h9aqA)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle_MctBCgDcXWCh9ae9cV5npFvQ(f);
	T2_ = (int)0;
	T2_ = isatty(T1_);
	result = !((T2_ == ((NI32) 0)));
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode_bfu8TiCl9avGVg9csJBAYIRQ)(NI style) {
	NimStringDesc* result;
	NimStringDesc* fmtRes;
	result = (NimStringDesc*)0;
	fmtRes = rawNewString(((NI) 41));
	fmtRes = resizeString(fmtRes, 2);
appendString(fmtRes, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_4));
	add_IbYQ9cTcoQ89aIwM2IEYGMng((&fmtRes), ((NI64) (style)));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_5));
	result = copyString(fmtRes);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, setStyle_TRG8lPLJdNGmEudoRytDnQ)(FILE* f, tySet_tyEnum_Style_NXKayqTLMsAibFwNceBlpA style) {
	{
		tyEnum_Style_NXKayqTLMsAibFwNceBlpA s;
		NI i;
		s = (tyEnum_Style_NXKayqTLMsAibFwNceBlpA)0;
		i = ((NI) 1);
		{
			while (1) {
				if (!(i <= ((NI) 9))) goto LA3;
				{
					NimStringDesc* T8_;
					if (!((style &(1U<<((NU)((((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) (i))- 1))&15U)))!=0)) goto LA6_;
					s = ((tyEnum_Style_NXKayqTLMsAibFwNceBlpA) (i));
					T8_ = (NimStringDesc*)0;
					T8_ = ansiStyleCode_bfu8TiCl9avGVg9csJBAYIRQ(((NI) (s)));
					write_K9cOfFd4JHcDlmXKlD5CfyQ(f, T8_);
				}
				LA6_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, resetAttributes_BsJG9atIOU4NRCTYLw9cgeZQ)(FILE* f) {
	write_K9cOfFd4JHcDlmXKlD5CfyQ(f, ((NimStringDesc*) &TM_CN3raB9atujkEiPpxYAdlgQ_6));
}

N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor_T8k4eb19c3ayV1CUVt19aaqg)(FILE* f, tyEnum_ForegroundColor_ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	NimStringDesc* T5_;
	gFG_g7w4T3anr20OMlWloNx2tQ = fg;
	{
		if (!bright) goto LA3_;
		gFG_g7w4T3anr20OMlWloNx2tQ += ((NI) 60);
	}
	LA3_: ;
	T5_ = (NimStringDesc*)0;
	T5_ = ansiStyleCode_bfu8TiCl9avGVg9csJBAYIRQ(gFG_g7w4T3anr20OMlWloNx2tQ);
	write_K9cOfFd4JHcDlmXKlD5CfyQ(f, T5_);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2();
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalInit000)(void) {
{
nimRegisterThreadLocalMarker(TM_CN3raB9atujkEiPpxYAdlgQ_3);
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_terminalDatInit000)(void) {
static TNimNode* TM_CN3raB9atujkEiPpxYAdlgQ_2[3];
static TNimNode TM_CN3raB9atujkEiPpxYAdlgQ_0[4];
NTI_EcU8GhMNGo9bGDXbfqZ82og_.size = sizeof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og);
NTI_EcU8GhMNGo9bGDXbfqZ82og_.kind = 18;
NTI_EcU8GhMNGo9bGDXbfqZ82og_.base = 0;
NTI_EcU8GhMNGo9bGDXbfqZ82og_.flags = 3;
TM_CN3raB9atujkEiPpxYAdlgQ_2[0] = &TM_CN3raB9atujkEiPpxYAdlgQ_0[1];
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].kind = 1;
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].offset = offsetof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og, trueColorIsSupported);
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_CN3raB9atujkEiPpxYAdlgQ_0[1].name = "trueColorIsSupported";
TM_CN3raB9atujkEiPpxYAdlgQ_2[1] = &TM_CN3raB9atujkEiPpxYAdlgQ_0[2];
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].kind = 1;
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].offset = offsetof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og, trueColorIsEnabled);
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_CN3raB9atujkEiPpxYAdlgQ_0[2].name = "trueColorIsEnabled";
TM_CN3raB9atujkEiPpxYAdlgQ_2[2] = &TM_CN3raB9atujkEiPpxYAdlgQ_0[3];
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].kind = 1;
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].offset = offsetof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og, fgSetColor);
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_CN3raB9atujkEiPpxYAdlgQ_0[3].name = "fgSetColor";
TM_CN3raB9atujkEiPpxYAdlgQ_0[0].len = 3; TM_CN3raB9atujkEiPpxYAdlgQ_0[0].kind = 2; TM_CN3raB9atujkEiPpxYAdlgQ_0[0].sons = &TM_CN3raB9atujkEiPpxYAdlgQ_2[0];
NTI_EcU8GhMNGo9bGDXbfqZ82og_.node = &TM_CN3raB9atujkEiPpxYAdlgQ_0[0];
NTI_flNJLrANZti6Wiy5LTlGGA_.size = sizeof(tyObject_PTerminalcolonObjectType__EcU8GhMNGo9bGDXbfqZ82og*);
NTI_flNJLrANZti6Wiy5LTlGGA_.kind = 22;
NTI_flNJLrANZti6Wiy5LTlGGA_.base = (&NTI_EcU8GhMNGo9bGDXbfqZ82og_);
NTI_flNJLrANZti6Wiy5LTlGGA_.flags = 2;
NTI_flNJLrANZti6Wiy5LTlGGA_.marker = Marker_tyRef_flNJLrANZti6Wiy5LTlGGA;
}

