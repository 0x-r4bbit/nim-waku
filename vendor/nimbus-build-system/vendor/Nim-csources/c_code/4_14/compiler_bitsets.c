/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tySequence_pxbIse2JUQkJU0n9blV9bY5g tySequence_pxbIse2JUQkJU0n9blV9bY5g;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
struct TGenericSeq {
NI len;
NI reserved;
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
typedef NI8 tyArray_L8ulb9awGMOSlDNw5AKsFOw[256];
struct tySequence_pxbIse2JUQkJU0n9blV9bY5g {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
static N_NIMCALL(void, Marker_tySequence_pxbIse2JUQkJU0n9blV9bY5g)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TNimType NTI_chXunH2dwinSkhpA6JnsXw_;
TNimType NTI_pxbIse2JUQkJU0n9blV9bY5g_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
NIM_CONST tyArray_L8ulb9awGMOSlDNw5AKsFOw populationCount_Ly9aQbOrmv9a2vbYdHwEtF9cg = {((NI8) 1),
((NI8) 2),
((NI8) 2),
((NI8) 3),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 5),
((NI8) 6),
((NI8) 6),
((NI8) 7),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 5),
((NI8) 6),
((NI8) 6),
((NI8) 7),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 5),
((NI8) 6),
((NI8) 6),
((NI8) 7),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 5),
((NI8) 6),
((NI8) 6),
((NI8) 7),
((NI8) 5),
((NI8) 6),
((NI8) 6),
((NI8) 7),
((NI8) 6),
((NI8) 7),
((NI8) 7),
((NI8) 8),
((NI8) 0),
((NI8) 1),
((NI8) 1),
((NI8) 2),
((NI8) 1),
((NI8) 2),
((NI8) 2),
((NI8) 3),
((NI8) 1),
((NI8) 2),
((NI8) 2),
((NI8) 3),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 1),
((NI8) 2),
((NI8) 2),
((NI8) 3),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 1),
((NI8) 2),
((NI8) 2),
((NI8) 3),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 1),
((NI8) 2),
((NI8) 2),
((NI8) 3),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 2),
((NI8) 3),
((NI8) 3),
((NI8) 4),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 3),
((NI8) 4),
((NI8) 4),
((NI8) 5),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 4),
((NI8) 5),
((NI8) 5),
((NI8) 6),
((NI8) 5),
((NI8) 6),
((NI8) 6),
((NI8) 7)}
;
static N_NIMCALL(void, Marker_tySequence_pxbIse2JUQkJU0n9blV9bY5g)(void* p, NI op) {
	tySequence_pxbIse2JUQkJU0n9blV9bY5g* a;
	NI T1_;
	a = (tySequence_pxbIse2JUQkJU0n9blV9bY5g*)p;
	T1_ = (NI)0;
}

N_LIB_PRIVATE N_NIMCALL(void, bitSetInit_9bKA1DbmAErHy3uIMkQY9bUQ)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** b, NI length) {
	unsureAsgnRef((void**) (&(*b)), (tySequence_pxbIse2JUQkJU0n9blV9bY5g*) newSeq((&NTI_pxbIse2JUQkJU0n9blV9bY5g_), ((NI) (length))));
}

N_LIB_PRIVATE N_NIMCALL(void, bitSetIncl_tznoRhsCn6M9csUzVp17S1w)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, NI64 elem) {
	(*x)->data[(NI64)(elem / IL64(8))] = (NI8)((*x)->data[(NI64)(elem / IL64(8))] | ((NI8)(NU8)(NU)((NI)((NU64)(((NI) 1)) << (NU64)((NI64)(elem % IL64(8)))))));
}

N_LIB_PRIVATE N_NIMCALL(NI64, bitSetCard_9cJNw9bePsOoQhu9aYT1kuVKw)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* x) {
	NI64 result;
	result = (NI64)0;
	{
		NI8 it;
		NI i;
		NI L;
		NI T2_;
		it = (NI8)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				it = x->data[i];
				result += ((NI) (populationCount_Ly9aQbOrmv9a2vbYdHwEtF9cg[(it)- -128]));
				i += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetContains_gqMsWrr3fORAvmtdSaP4rA)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = ((x ? x->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					if (!!(((NI8)(x->data[i] & (NI8)((NU8) ~(y->data[i]))) == ((NI8) 0)))) goto LA7_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetEquals_gqMsWrr3fORAvmtdSaP4rA_2)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = ((x ? x->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					if (!!((x->data[i] == y->data[i]))) goto LA7_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA7_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, bitSetIntersect_zN8mfRIlfkwl4UeelbWZPg)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y) {
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (((*x) ? (*x)->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				(*x)->data[i] = (NI8)((*x)->data[i] & y->data[i]);
				res += ((NI) 1);
			} LA4: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetIn_Z5HI0xhB5Wx2mWRfrJc2NQ)(tySequence_pxbIse2JUQkJU0n9blV9bY5g* x, NI64 e) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = !(((NI8)(x->data[(NI64)(e / IL64(8))] & ((NI8)(NU8)(NU)((NI)((NU64)(((NI) 1)) << (NU64)((NI64)(e % IL64(8))))))) == ((NI8) 0)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, bitSetUnion_zN8mfRIlfkwl4UeelbWZPg_2)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y) {
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (((*x) ? (*x)->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				(*x)->data[i] = (NI8)((*x)->data[i] | y->data[i]);
				res += ((NI) 1);
			} LA4: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, bitSetDiff_zN8mfRIlfkwl4UeelbWZPg_3)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y) {
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (((*x) ? (*x)->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				(*x)->data[i] = (NI8)((*x)->data[i] & (NI8)((NU8) ~(y->data[i])));
				res += ((NI) 1);
			} LA4: ;
		}
	}
}

N_LIB_PRIVATE N_NIMCALL(void, bitSetSymDiff_zN8mfRIlfkwl4UeelbWZPg_4)(tySequence_pxbIse2JUQkJU0n9blV9bY5g** x, tySequence_pxbIse2JUQkJU0n9blV9bY5g* y) {
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T2_ = (((*x) ? (*x)->Sup.len : 0)-1);
		colontmp_ = T2_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				(*x)->data[i] = (NI8)((*x)->data[i] ^ y->data[i]);
				res += ((NI) 1);
			} LA4: ;
		}
	}
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
N_LIB_PRIVATE N_NIMCALL(void, compiler_bitsetsDatInit000)(void) {
NTI_pxbIse2JUQkJU0n9blV9bY5g_.size = sizeof(tySequence_pxbIse2JUQkJU0n9blV9bY5g*);
NTI_pxbIse2JUQkJU0n9blV9bY5g_.kind = 24;
NTI_pxbIse2JUQkJU0n9blV9bY5g_.base = (&NTI_chXunH2dwinSkhpA6JnsXw_);
NTI_pxbIse2JUQkJU0n9blV9bY5g_.flags = 2;
NTI_pxbIse2JUQkJU0n9blV9bY5g_.marker = Marker_tySequence_pxbIse2JUQkJU0n9blV9bY5g;
}

