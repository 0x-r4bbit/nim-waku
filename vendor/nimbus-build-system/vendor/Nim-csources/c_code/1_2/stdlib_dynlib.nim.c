/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <windows.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
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
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_iGg0RIKceRvsmvq8FUHOEw)(NimStringDesc* s, NI first);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, libCandidates_TEY9aqiaMWVK2l0NzZy7BwQ)(NimStringDesc* s, tySequence_sM4lkSb7zS6F7OVMvW9cffQ** dest);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void*, loadLib_8KlW4Wkexh1bMKacG75Nag)(NimStringDesc* path, NIM_BOOL global_symbols) {
	void* result;
	HINSTANCE T1_;
	result = (void*)0;
	T1_ = (HINSTANCE)0;
	T1_ = LoadLibraryA(nimToCStringConv(path));
	result = ((void*) (T1_));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void*, symAddr_ALH9bdNwXEzg7MPq4PA9csvw)(void* lib, NCSTRING name) {
	void* result;
	result = (void*)0;
	result = GetProcAddress(((HINSTANCE) (lib)), name);
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
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

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_Y66tOYFjgwJ0k4aLz4bc0Q((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef_AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}

N_LIB_PRIVATE N_NIMCALL(void, libCandidates_TEY9aqiaMWVK2l0NzZy7BwQ)(NimStringDesc* s, tySequence_sM4lkSb7zS6F7OVMvW9cffQ** dest) {
	NI le;
	NI ri;
	NI TM_Vbi6rBBOqdMySprhH3iUcg_2;
	le = nsuFindChar(s, 40, ((NI) 0), ((NI) 0));
	TM_Vbi6rBBOqdMySprhH3iUcg_2 = addInt(le, ((NI) 1));
	ri = nsuFindChar(s, 41, ((NI)chckRange((NI)(TM_Vbi6rBBOqdMySprhH3iUcg_2), ((NI) 0), ((NI) IL64(9223372036854775807)))), ((NI) 0));
	{
		NIM_BOOL T3_;
		NimStringDesc* prefix;
		NI TM_Vbi6rBBOqdMySprhH3iUcg_3;
		NimStringDesc* suffix;
		NI TM_Vbi6rBBOqdMySprhH3iUcg_4;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= le);
		if (!(T3_)) goto LA4_;
		T3_ = (le < ri);
		LA4_: ;
		if (!T3_) goto LA5_;
		TM_Vbi6rBBOqdMySprhH3iUcg_3 = subInt(le, ((NI) 1));
		prefix = substr_2yh9cer0ymNRHlOOg8P7IuA(s, ((NI) 0), (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_3));
		TM_Vbi6rBBOqdMySprhH3iUcg_4 = addInt(ri, ((NI) 1));
		suffix = substr_iGg0RIKceRvsmvq8FUHOEw(s, (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_4));
		{
			NimStringDesc* middle;
			NimStringDesc* colontmp_;
			NI TM_Vbi6rBBOqdMySprhH3iUcg_5;
			NI TM_Vbi6rBBOqdMySprhH3iUcg_6;
			NI last;
			NI splits;
			middle = (NimStringDesc*)0;
			colontmp_ = (NimStringDesc*)0;
			TM_Vbi6rBBOqdMySprhH3iUcg_5 = addInt(le, ((NI) 1));
			TM_Vbi6rBBOqdMySprhH3iUcg_6 = subInt(ri, ((NI) 1));
			colontmp_ = substr_2yh9cer0ymNRHlOOg8P7IuA(s, (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_5), (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_6));
			last = ((NI) 0);
			splits = ((NI) -1);
			{
				while (1) {
					NI first;
					NI TM_Vbi6rBBOqdMySprhH3iUcg_8;
					NimStringDesc* T18_;
					NI TM_Vbi6rBBOqdMySprhH3iUcg_9;
					NI TM_Vbi6rBBOqdMySprhH3iUcg_10;
					if (!(last <= (colontmp_ ? colontmp_->Sup.len : 0))) goto LA9;
					first = last;
					{
						while (1) {
							NIM_BOOL T12_;
							NI TM_Vbi6rBBOqdMySprhH3iUcg_7;
							T12_ = (NIM_BOOL)0;
							T12_ = (last < (colontmp_ ? colontmp_->Sup.len : 0));
							if (!(T12_)) goto LA13_;
							if ((NU)(last) >= (NU)(colontmp_ ? colontmp_->Sup.len : 0)) raiseIndexError2(last,(colontmp_ ? colontmp_->Sup.len : 0)-1);
							T12_ = !(((NU8)(colontmp_->data[last]) == (NU8)(124)));
							LA13_: ;
							if (!T12_) goto LA11;
							TM_Vbi6rBBOqdMySprhH3iUcg_7 = addInt(last, ((NI) 1));
							last = (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_7);
						} LA11: ;
					}
					{
						if (!(splits == ((NI) 0))) goto LA16_;
						last = (colontmp_ ? colontmp_->Sup.len : 0);
					}
					LA16_: ;
					TM_Vbi6rBBOqdMySprhH3iUcg_8 = subInt(last, ((NI) 1));
					middle = substr_2yh9cer0ymNRHlOOg8P7IuA(colontmp_, first, (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_8));
					T18_ = (NimStringDesc*)0;
					T18_ = rawNewString((prefix ? prefix->Sup.len : 0) + (middle ? middle->Sup.len : 0) + (suffix ? suffix->Sup.len : 0) + 0);
appendString(T18_, prefix);
appendString(T18_, middle);
appendString(T18_, suffix);
					libCandidates_TEY9aqiaMWVK2l0NzZy7BwQ(T18_, dest);
					{
						if (!(splits == ((NI) 0))) goto LA21_;
						goto LA8;
					}
					LA21_: ;
					TM_Vbi6rBBOqdMySprhH3iUcg_9 = subInt(splits, ((NI) 1));
					splits = (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_9);
					TM_Vbi6rBBOqdMySprhH3iUcg_10 = addInt(last, ((NI) 1));
					last = (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_10);
				} LA9: ;
			} LA8: ;
		}
	}
	goto LA1_;
	LA5_: ;
	{
		NI T24_;
		NimStringDesc* T25_;
		unsureAsgnRef((void**) (&(*dest)), (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3((TGenericSeq*)((*dest)), (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_)));
		T24_ = (*dest)->Sup.len++;
		T25_ = (NimStringDesc*)0;
		T25_ = (*dest)->data[T24_]; (*dest)->data[T24_] = copyStringRC1(s);
		if (T25_) nimGCunrefNoCycle(T25_);
	}
	LA1_: ;
}
