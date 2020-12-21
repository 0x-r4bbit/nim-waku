/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
static N_INLINE(NI, subInt)(NI a, NI b);
TNimType NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_;

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

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q, prefixMatch_pK9a9aTI3V8r6eOzZI8EfYlw)(NimStringDesc* p, NimStringDesc* s) {
	tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q result;
	NI i;
	NI L;
{	result = (tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q)0;
	{
		if (!((s ? s->Sup.len : 0) < (p ? p->Sup.len : 0))) goto LA3_;
		result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI) 0);
	L = (s ? s->Sup.len : 0);
	{
		while (1) {
			NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_8;
			if (!(i < L)) goto LA6;
			{
				NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_2;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA9_;
				TM_P9b9adRChs9cbzL6i5n3jD9b9ag_2 = addInt(i, ((NI) 1));
				i = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_2);
			}
			LA9_: ;
			{
				NIM_BOOL T13_;
				NIM_CHAR T15_;
				NIM_CHAR T16_;
				NI ii;
				NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_3;
				NI jj;
				T13_ = (NIM_BOOL)0;
				T13_ = (i < L);
				if (!(T13_)) goto LA14_;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
				T15_ = (NIM_CHAR)0;
				T15_ = nsuToLowerAsciiChar(s->data[i]);
				if ((NU)(((NI) 0)) >= (NU)(p ? p->Sup.len : 0)) raiseIndexError2(((NI) 0),(p ? p->Sup.len : 0)-1);
				T16_ = (NIM_CHAR)0;
				T16_ = nsuToLowerAsciiChar(p->data[((NI) 0)]);
				T13_ = ((NU8)(T15_) == (NU8)(T16_));
				LA14_: ;
				if (!T13_) goto LA17_;
				TM_P9b9adRChs9cbzL6i5n3jD9b9ag_3 = addInt(i, ((NI) 1));
				ii = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_3);
				jj = ((NI) 1);
				{
					while (1) {
						NIM_BOOL T21_;
						NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_6;
						NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_7;
						T21_ = (NIM_BOOL)0;
						T21_ = (ii < L);
						if (!(T21_)) goto LA22_;
						T21_ = (jj < (p ? p->Sup.len : 0));
						LA22_: ;
						if (!T21_) goto LA20;
						{
							NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4;
							if ((NU)(jj) >= (NU)(p ? p->Sup.len : 0)) raiseIndexError2(jj,(p ? p->Sup.len : 0)-1);
							if (!((NU8)(p->data[jj]) == (NU8)(95))) goto LA25_;
							TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4 = addInt(jj, ((NI) 1));
							jj = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_4);
						}
						LA25_: ;
						{
							NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_5;
							if ((NU)(ii) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(ii,(s ? s->Sup.len : 0)-1);
							if (!((NU8)(s->data[ii]) == (NU8)(95))) goto LA29_;
							TM_P9b9adRChs9cbzL6i5n3jD9b9ag_5 = addInt(ii, ((NI) 1));
							ii = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_5);
						}
						LA29_: ;
						{
							NIM_CHAR T33_;
							NIM_CHAR T34_;
							if ((NU)(ii) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(ii,(s ? s->Sup.len : 0)-1);
							T33_ = (NIM_CHAR)0;
							T33_ = nsuToLowerAsciiChar(s->data[ii]);
							if ((NU)(jj) >= (NU)(p ? p->Sup.len : 0)) raiseIndexError2(jj,(p ? p->Sup.len : 0)-1);
							T34_ = (NIM_CHAR)0;
							T34_ = nsuToLowerAsciiChar(p->data[jj]);
							if (!!(((NU8)(T33_) == (NU8)(T34_)))) goto LA35_;
							goto LA19;
						}
						LA35_: ;
						TM_P9b9adRChs9cbzL6i5n3jD9b9ag_6 = addInt(ii, ((NI) 1));
						ii = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_6);
						TM_P9b9adRChs9cbzL6i5n3jD9b9ag_7 = addInt(jj, ((NI) 1));
						jj = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_7);
					} LA20: ;
				} LA19: ;
				{
					if (!((p ? p->Sup.len : 0) <= jj)) goto LA39_;
					{
						if (!(i == ((NI) 0))) goto LA43_;
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 3);
						goto BeforeRet_;
					}
					goto LA41_;
					LA43_: ;
					{
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 2);
						goto BeforeRet_;
					}
					LA41_: ;
				}
				LA39_: ;
			}
			LA17_: ;
			TM_P9b9adRChs9cbzL6i5n3jD9b9ag_8 = addInt(i, ((NI) 1));
			i = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_8);
		} LA6: ;
	}
	{
		NIM_CHAR T48_;
		NIM_CHAR T49_;
		NI j;
		if ((NU)(((NI) 0)) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(((NI) 0),(s ? s->Sup.len : 0)-1);
		T48_ = (NIM_CHAR)0;
		T48_ = nsuToLowerAsciiChar(s->data[((NI) 0)]);
		if ((NU)(((NI) 0)) >= (NU)(p ? p->Sup.len : 0)) raiseIndexError2(((NI) 0),(p ? p->Sup.len : 0)-1);
		T49_ = (NIM_CHAR)0;
		T49_ = nsuToLowerAsciiChar(p->data[((NI) 0)]);
		if (!((NU8)(T48_) == (NU8)(T49_))) goto LA50_;
		i = ((NI) 1);
		j = ((NI) 1);
		{
			while (1) {
				NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_14;
				if (!(i < (s ? s->Sup.len : 0))) goto LA53;
				{
					NIM_BOOL T56_;
					NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_9;
					T56_ = (NIM_BOOL)0;
					TM_P9b9adRChs9cbzL6i5n3jD9b9ag_9 = subInt((s ? s->Sup.len : 0), ((NI) 1));
					T56_ = (i < (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_9));
					if (!(T56_)) goto LA57_;
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
					T56_ = ((NU8)(s->data[i]) == (NU8)(95));
					LA57_: ;
					if (!T56_) goto LA58_;
					{
						NIM_BOOL T62_;
						NIM_CHAR T64_;
						NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_10;
						NIM_CHAR T65_;
						NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_11;
						T62_ = (NIM_BOOL)0;
						T62_ = (j < (p ? p->Sup.len : 0));
						if (!(T62_)) goto LA63_;
						if ((NU)(j) >= (NU)(p ? p->Sup.len : 0)) raiseIndexError2(j,(p ? p->Sup.len : 0)-1);
						T64_ = (NIM_CHAR)0;
						T64_ = nsuToLowerAsciiChar(p->data[j]);
						TM_P9b9adRChs9cbzL6i5n3jD9b9ag_10 = addInt(i, ((NI) 1));
						if ((NU)((NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_10)) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2((NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_10),(s ? s->Sup.len : 0)-1);
						T65_ = (NIM_CHAR)0;
						T65_ = nsuToLowerAsciiChar(s->data[(NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_10)]);
						T62_ = ((NU8)(T64_) == (NU8)(T65_));
						LA63_: ;
						if (!T62_) goto LA66_;
						TM_P9b9adRChs9cbzL6i5n3jD9b9ag_11 = addInt(j, ((NI) 1));
						j = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_11);
					}
					goto LA60_;
					LA66_: ;
					{
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
						goto BeforeRet_;
					}
					LA60_: ;
				}
				LA58_: ;
				{
					NIM_BOOL T71_;
					NIM_BOOL T72_;
					NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_12;
					T71_ = (NIM_BOOL)0;
					T72_ = (NIM_BOOL)0;
					T72_ = (i < (s ? s->Sup.len : 0));
					if (!(T72_)) goto LA73_;
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
					T72_ = (((NU8)(s->data[i])) >= ((NU8)(65)) && ((NU8)(s->data[i])) <= ((NU8)(90)));
					LA73_: ;
					T71_ = T72_;
					if (!(T71_)) goto LA74_;
					TM_P9b9adRChs9cbzL6i5n3jD9b9ag_12 = subInt(i, ((NI) 1));
					if ((NU)((NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_12)) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2((NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_12),(s ? s->Sup.len : 0)-1);
					T71_ = !((((NU8)(s->data[(NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_12)])) >= ((NU8)(65)) && ((NU8)(s->data[(NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_12)])) <= ((NU8)(90))));
					LA74_: ;
					if (!T71_) goto LA75_;
					{
						NIM_BOOL T79_;
						NIM_CHAR T81_;
						NIM_CHAR T82_;
						NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_13;
						T79_ = (NIM_BOOL)0;
						T79_ = (j < (p ? p->Sup.len : 0));
						if (!(T79_)) goto LA80_;
						if ((NU)(j) >= (NU)(p ? p->Sup.len : 0)) raiseIndexError2(j,(p ? p->Sup.len : 0)-1);
						T81_ = (NIM_CHAR)0;
						T81_ = nsuToLowerAsciiChar(p->data[j]);
						if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)) raiseIndexError2(i,(s ? s->Sup.len : 0)-1);
						T82_ = (NIM_CHAR)0;
						T82_ = nsuToLowerAsciiChar(s->data[i]);
						T79_ = ((NU8)(T81_) == (NU8)(T82_));
						LA80_: ;
						if (!T79_) goto LA83_;
						TM_P9b9adRChs9cbzL6i5n3jD9b9ag_13 = addInt(j, ((NI) 1));
						j = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_13);
					}
					goto LA77_;
					LA83_: ;
					{
						result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
						goto BeforeRet_;
					}
					LA77_: ;
				}
				LA75_: ;
				TM_P9b9adRChs9cbzL6i5n3jD9b9ag_14 = addInt(i, ((NI) 1));
				i = (NI)(TM_P9b9adRChs9cbzL6i5n3jD9b9ag_14);
			} LA53: ;
		}
		{
			if (!((p ? p->Sup.len : 0) <= j)) goto LA88_;
			result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 1);
			goto BeforeRet_;
		}
		goto LA86_;
		LA88_: ;
		{
			result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
			goto BeforeRet_;
		}
		LA86_: ;
	}
	LA50_: ;
	result = ((tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q) 0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_prefixmatchesDatInit000)(void) {
static TNimNode* TM_P9b9adRChs9cbzL6i5n3jD9b9ag_15_4[4];
NI TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17;
static char* NIM_CONST TM_P9b9adRChs9cbzL6i5n3jD9b9ag_16[4] = {
"None", 
"Abbrev", 
"Substr", 
"Prefix"};
static TNimNode TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[5];
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.size = sizeof(tyEnum_PrefixMatch_Dkww2nY9cxJVLF9cfoQS5U6Q);
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.kind = 14;
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.base = 0;
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.flags = 3;
for (TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17 = 0; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17 < 4; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17++) {
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17+0].kind = 1;
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17+0].offset = TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17;
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17+0].name = TM_P9b9adRChs9cbzL6i5n3jD9b9ag_16[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17];
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_15_4[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17] = &TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[TM_P9b9adRChs9cbzL6i5n3jD9b9ag_17+0];
}
TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4].len = 4; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4].kind = 2; TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4].sons = &TM_P9b9adRChs9cbzL6i5n3jD9b9ag_15_4[0];
NTI_Dkww2nY9cxJVLF9cfoQS5U6Q_.node = &TM_P9b9adRChs9cbzL6i5n3jD9b9ag_0[4];
}

