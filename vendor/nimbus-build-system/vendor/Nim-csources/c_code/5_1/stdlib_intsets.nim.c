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
typedef struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence_9brg1xNurxcus33lU4IE1Dw tySequence_9brg1xNurxcus33lU4IE1Dw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
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
typedef NI tyArray_emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
tySequence_9brg1xNurxcus33lU4IE1Dw* data;
tyArray_emiAJ8okywrJw7ZHLzlXbQ a;
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
typedef NU tyArray_cC4ce9cdvDKtIpar5g9cDejA[16];
struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ {
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
tyArray_cC4ce9cdvDKtIpar5g9cDejA bits;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct tySequence_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_Vz0pPzxitckVclPPWiz0xw)(void* p, NI op);
static N_NIMCALL(void, Marker_tySequence_9brg1xNurxcus33lU4IE1Dw)(void* p, NI op);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, incl_jENnK9c9bPE73pKmo2vYjpqg)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(void, bitincl_E9cDk0lZrpCTkoPoFYHbLEAintsets)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetPut_JuDvqAxqqazeTie5vkhxBA)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key);
static N_INLINE(NI, nextTry_dHQ9c9cVhE9bOA9az1uxLeQMhgintsets)(NI h, NI maxHash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, mustRehash_Stugx27RCXvwUO9b16F14Wgintsets)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(void, intSetEnlarge_gAxAZSheQnyMikueBAoGpQ)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_LIB_PRIVATE N_NIMCALL(void, intSetRawInsert_Zr3KsTeukB1Ek9b8W3JdY8Q)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, tySequence_9brg1xNurxcus33lU4IE1Dw** data, tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* desc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetGet_sgEEbaJIQsQO4zFm2Zy3yQ)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, exclImpl_jENnK9c9bPE73pKmo2vYjpqg_3)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_LIB_PRIVATE N_NIMCALL(void, initIntSet_n8oDZMn19bEdodSnrBQB9a1Q)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_R6uRTGpl30Ofaw4Ni3vawA)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
TNimType NTI_PQrmFm4BXFkFSVOUl1ojSg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_ul49aWfv9aes8cutmeltT3gQ_;
extern TNimType NTI_hMQEc0FMry7Up7EoPki79aA_;
TNimType NTI_cC4ce9cdvDKtIpar5g9cDejA_;
TNimType NTI_Vz0pPzxitckVclPPWiz0xw_;
TNimType NTI_9brg1xNurxcus33lU4IE1Dw_;
TNimType NTI_emiAJ8okywrJw7ZHLzlXbQ_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_9, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/intse"
"ts.nim(54, 9) `length > counter` ", 96);
STRING_LITERAL(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_18, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/intse"
"ts.nim(71, 11) `data[h] != desc` ", 96);
STRING_LITERAL(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_19, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/intse"
"ts.nim(73, 9) `data[h] == nil` ", 94);
STRING_LITERAL(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_22, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/intse"
"ts.nim(95, 9) `t.data[h] == nil` ", 96);
STRING_LITERAL(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_25, "/Users/andreasrumpf-mac/projects/nim/lib/pure/collections/intse"
"ts.nim(395, 13) `dest.data[h] == nil` ", 101);
static N_NIMCALL(void, Marker_tyRef_Vz0pPzxitckVclPPWiz0xw)(void* p, NI op) {
	tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* a;
	NI T1_;
	a = (tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*)p;
	nimGCvisit((void*)(*a).next, op);
	T1_ = (NI)0;
}
static N_NIMCALL(void, Marker_tySequence_9brg1xNurxcus33lU4IE1Dw)(void* p, NI op) {
	tySequence_9brg1xNurxcus33lU4IE1Dw* a;
	NI T1_;
	a = (tySequence_9brg1xNurxcus33lU4IE1Dw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}

N_LIB_PRIVATE N_NIMCALL(void, initIntSet_n8oDZMn19bEdodSnrBQB9a1Q)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_PQrmFm4BXFkFSVOUl1ojSg_));
	(*Result).elems = ((NI) 0);
	(*Result).counter = ((NI) 0);
	(*Result).max = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
	unsureAsgnRef((void**) (&(*Result).data), NIM_NIL);
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

static N_INLINE(NI, nextTry_dHQ9c9cVhE9bOA9az1uxLeQMhgintsets)(NI h, NI maxHash) {
	NI result;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_7;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_8;
	result = (NI)0;
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_7 = mulInt(((NI) 5), h);
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_8 = addInt((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_7), ((NI) 1));
	result = (NI)((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_8) & maxHash);
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

static N_INLINE(NIM_BOOL, mustRehash_Stugx27RCXvwUO9b16F14Wgintsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_10;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_11;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_12;
	result = (NIM_BOOL)0;
	{
		if (!!((counter < length))) goto LA3_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_9));
	}
	LA3_: ;
	T5_ = (NIM_BOOL)0;
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_10 = mulInt(length, ((NI) 2));
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_11 = mulInt(counter, ((NI) 3));
	T5_ = ((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_10) < (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_11));
	if (T5_) goto LA6_;
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_12 = subInt(length, counter);
	T5_ = ((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_12) < ((NI) 4));
	LA6_: ;
	result = T5_;
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

static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI) 8)))));
	return result;
}

static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_Y66tOYFjgwJ0k4aLz4bc0Q((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) - (NU32)(((NI) 8)));
	{
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef_AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef_AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(void, intSetRawInsert_Zr3KsTeukB1Ek9b8W3JdY8Q)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, tySequence_9brg1xNurxcus33lU4IE1Dw** data, tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* desc) {
	NI h;
	h = (NI)((*desc).key & (*t).max);
	{
		while (1) {
			if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
			if (!!(((*data)->data[h] == NIM_NIL))) goto LA2;
			{
				if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
				if (!!(!(((*data)->data[h] == desc)))) goto LA5_;
				failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_18));
			}
			LA5_: ;
			h = nextTry_dHQ9c9cVhE9bOA9az1uxLeQMhgintsets(h, (*t).max);
		} LA2: ;
	}
	{
		if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
		if (!!(((*data)->data[h] == NIM_NIL))) goto LA9_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_19));
	}
	LA9_: ;
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
	asgnRef((void**) (&(*data)->data[h]), desc);
}

N_LIB_PRIVATE N_NIMCALL(void, intSetEnlarge_gAxAZSheQnyMikueBAoGpQ)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t) {
	tySequence_9brg1xNurxcus33lU4IE1Dw* n;
	NI oldMax;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_14;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_15;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_16;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_17;
	tySequence_9brg1xNurxcus33lU4IE1Dw* T8_;
	n = (tySequence_9brg1xNurxcus33lU4IE1Dw*)0;
	oldMax = (*t).max;
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_14 = addInt((*t).max, ((NI) 1));
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_15 = mulInt((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_14), ((NI) 2));
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_16 = subInt((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_15), ((NI) 1));
	(*t).max = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_16);
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_17 = addInt((*t).max, ((NI) 1));
	n = (tySequence_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw_), ((NI)chckRange((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_17), ((NI) 0), ((NI) 2147483647))));
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 0);
		{
			while (1) {
				NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_20;
				if (!(res <= oldMax)) goto LA3;
				i = res;
				{
					if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1);
					if (!!(((*t).data->data[i] == NIM_NIL))) goto LA6_;
					if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1);
					intSetRawInsert_Zr3KsTeukB1Ek9b8W3JdY8Q((&(*t)), (&n), (*t).data->data[i]);
				}
				LA6_: ;
				TM_ulJ2WYumkJwZ9b5Ewe7sCpg_20 = addInt(res, ((NI) 1));
				res = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_20);
			} LA3: ;
		}
	}
	T8_ = (tySequence_9brg1xNurxcus33lU4IE1Dw*)0;
	T8_ = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = T8_;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetPut_JuDvqAxqqazeTie5vkhxBA)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key) {
	tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* result;
	NI h;
	NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_21;
{	result = (tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
				if (!((*(*t).data->data[h]).key == key)) goto LA5_;
				if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
				result = (*t).data->data[h];
				goto BeforeRet_;
			}
			LA5_: ;
			h = nextTry_dHQ9c9cVhE9bOA9az1uxLeQMhgintsets(h, (*t).max);
		} LA2: ;
	}
	{
		NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_13;
		NIM_BOOL T9_;
		TM_ulJ2WYumkJwZ9b5Ewe7sCpg_13 = addInt((*t).max, ((NI) 1));
		T9_ = (NIM_BOOL)0;
		T9_ = mustRehash_Stugx27RCXvwUO9b16F14Wgintsets((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_13), (*t).counter);
		if (!T9_) goto LA10_;
		intSetEnlarge_gAxAZSheQnyMikueBAoGpQ(t);
	}
	LA10_: ;
	TM_ulJ2WYumkJwZ9b5Ewe7sCpg_21 = addInt((*t).counter, ((NI) 1));
	(*t).counter = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_21);
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA13;
			h = nextTry_dHQ9c9cVhE9bOA9az1uxLeQMhgintsets(h, (*t).max);
		} LA13: ;
	}
	{
		if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
		if (!!(((*t).data->data[h] == NIM_NIL))) goto LA16_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_22));
	}
	LA16_: ;
	result = (tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI_Vz0pPzxitckVclPPWiz0xw_), sizeof(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ));
	asgnRef((void**) (&(*result).next), (*t).head);
	(*result).key = key;
	unsureAsgnRef((void**) (&(*t).head), result);
	if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
	asgnRef((void**) (&(*t).data->data[h]), result);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, bitincl_E9cDk0lZrpCTkoPoFYHbLEAintsets)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
	NI u;
	t = intSetPut_JuDvqAxqqazeTie5vkhxBA(s, (NI)((NI32)(key) >> (NU32)(((NI) 9))));
	u = (NI)(key & ((NI) 511));
	if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
	if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
	(*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] = (NU)((*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] | (NU)((NU32)(((NU) 1)) << (NU32)((NI)(u & ((NI) 31)))));
}

N_LIB_PRIVATE N_NIMCALL(void, incl_jENnK9c9bPE73pKmo2vYjpqg)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
{	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (*s).elems;
			i_2 = ((NI) 0);
			{
				while (1) {
					NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_5;
					if (!(i_2 < colontmp_)) goto LA7;
					i = i_2;
					{
						if ((NU)(i) > (NU)(33)) raiseIndexError2(i, 33);
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						goto BeforeRet_;
					}
					LA10_: ;
					TM_ulJ2WYumkJwZ9b5Ewe7sCpg_5 = addInt(i_2, ((NI) 1));
					i_2 = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_5);
				} LA7: ;
			}
		}
		{
			NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_6;
			if (!((*s).elems < ((NI) 34))) goto LA14_;
			if ((NU)((*s).elems) > (NU)(33)) raiseIndexError2((*s).elems, 33);
			(*s).a[((*s).elems)- 0] = key;
			TM_ulJ2WYumkJwZ9b5Ewe7sCpg_6 = addInt((*s).elems, ((NI) 1));
			(*s).elems = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_6);
			goto BeforeRet_;
		}
		LA14_: ;
		unsureAsgnRef((void**) (&(*s).data), (tySequence_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw_), ((NI) 8)));
		(*s).max = ((NI) 7);
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (*s).elems;
			i_4 = ((NI) 0);
			{
				while (1) {
					NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_23;
					if (!(i_4 < colontmp__2)) goto LA18;
					i_3 = i_4;
					if ((NU)(i_3) > (NU)(33)) raiseIndexError2(i_3, 33);
					bitincl_E9cDk0lZrpCTkoPoFYHbLEAintsets(s, (*s).a[(i_3)- 0]);
					TM_ulJ2WYumkJwZ9b5Ewe7sCpg_23 = addInt(i_4, ((NI) 1));
					i_4 = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_23);
				} LA18: ;
			}
		}
		(*s).elems = ((NI) 35);
	}
	LA3_: ;
	bitincl_E9cDk0lZrpCTkoPoFYHbLEAintsets(s, key);
	}BeforeRet_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*, intSetGet_sgEEbaJIQsQO4zFm2Zy3yQ)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* t, NI key) {
	tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* result;
	NI h;
{	result = (tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
	h = (NI)(key & (*t).max);
	{
		while (1) {
			if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
			if (!!(((*t).data->data[h] == NIM_NIL))) goto LA2;
			{
				if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
				if (!((*(*t).data->data[h]).key == key)) goto LA5_;
				if ((NU)(h) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(h,((*t).data ? (*t).data->Sup.len : 0)-1);
				result = (*t).data->data[h];
				goto BeforeRet_;
			}
			LA5_: ;
			h = nextTry_dHQ9c9cVhE9bOA9az1uxLeQMhgintsets(h, (*t).max);
		} LA2: ;
	}
	result = NIM_NIL;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsOrIncl_VFt0uM7bgfJ5age9alOsU9cg)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (*s).elems;
			i_2 = ((NI) 0);
			{
				while (1) {
					NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_4;
					if (!(i_2 < colontmp_)) goto LA7;
					i = i_2;
					{
						if ((NU)(i) > (NU)(33)) raiseIndexError2(i, 33);
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA10_: ;
					TM_ulJ2WYumkJwZ9b5Ewe7sCpg_4 = addInt(i_2, ((NI) 1));
					i_2 = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_4);
				} LA7: ;
			}
		}
		incl_jENnK9c9bPE73pKmo2vYjpqg(s, key);
		result = NIM_FALSE;
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
		t = intSetGet_sgEEbaJIQsQO4zFm2Zy3yQ((&(*s)), (NI)((NI32)(key) >> (NU32)(((NI) 9))));
		{
			NI u;
			if (!!((t == NIM_NIL))) goto LA15_;
			u = (NI)(key & ((NI) 511));
			if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
			result = !(((NU)((*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] & (NU)((NU32)(((NU) 1)) << (NU32)((NI)(u & ((NI) 31))))) == ((NI) 0)));
			{
				if (!!(result)) goto LA19_;
				if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
				if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
				(*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] = (NU)((*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] | (NU)((NU32)(((NU) 1)) << (NU32)((NI)(u & ((NI) 31)))));
			}
			LA19_: ;
		}
		goto LA13_;
		LA15_: ;
		{
			incl_jENnK9c9bPE73pKmo2vYjpqg(s, key);
			result = NIM_FALSE;
		}
		LA13_: ;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_R6uRTGpl30Ofaw4Ni3vawA)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (*s).elems;
			i_2 = ((NI) 0);
			{
				while (1) {
					NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_24;
					if (!(i_2 < colontmp_)) goto LA7;
					i = i_2;
					{
						if ((NU)(i) > (NU)(33)) raiseIndexError2(i, 33);
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA10_: ;
					TM_ulJ2WYumkJwZ9b5Ewe7sCpg_24 = addInt(i_2, ((NI) 1));
					i_2 = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_24);
				} LA7: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
		t = intSetGet_sgEEbaJIQsQO4zFm2Zy3yQ(s, (NI)((NI32)(key) >> (NU32)(((NI) 9))));
		{
			NI u;
			if (!!((t == NIM_NIL))) goto LA15_;
			u = (NI)(key & ((NI) 511));
			if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
			result = !(((NU)((*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] & (NU)((NU32)(((NU) 1)) << (NU32)((NI)(u & ((NI) 31))))) == ((NI) 0)));
		}
		goto LA13_;
		LA15_: ;
		{
			result = NIM_FALSE;
		}
		LA13_: ;
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

N_LIB_PRIVATE N_NIMCALL(void, assign_9aeoXSYLtfdHDeDWcO9bHVbg)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* dest, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* src) {
	{
		if (!((*src).elems <= ((NI) 34))) goto LA3_;
		unsureAsgnRef((void**) (&(*dest).data), NIM_NIL);
		(*dest).max = ((NI) 0);
		(*dest).counter = (*src).counter;
		unsureAsgnRef((void**) (&(*dest).head), NIM_NIL);
		(*dest).elems = (*src).elems;
		nimCopyMem((void*)(*dest).a, (NIM_CONST void*)(*src).a, sizeof(tyArray_emiAJ8okywrJw7ZHLzlXbQ));
	}
	goto LA1_;
	LA3_: ;
	{
		NI T6_;
		tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* it;
		(*dest).counter = (*src).counter;
		(*dest).max = (*src).max;
		T6_ = ((*src).data ? (*src).data->Sup.len : 0);
		unsureAsgnRef((void**) (&(*dest).data), (tySequence_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw_), ((NI)chckRange(T6_, ((NI) 0), ((NI) 2147483647)))));
		it = (*src).head;
		{
			while (1) {
				NI h;
				tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* n;
				if (!!((it == NIM_NIL))) goto LA8;
				h = (NI)((*it).key & (*dest).max);
				{
					while (1) {
						if ((NU)(h) >= (NU)((*dest).data ? (*dest).data->Sup.len : 0)) raiseIndexError2(h,((*dest).data ? (*dest).data->Sup.len : 0)-1);
						if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA10;
						h = nextTry_dHQ9c9cVhE9bOA9az1uxLeQMhgintsets(h, (*dest).max);
					} LA10: ;
				}
				{
					if ((NU)(h) >= (NU)((*dest).data ? (*dest).data->Sup.len : 0)) raiseIndexError2(h,((*dest).data ? (*dest).data->Sup.len : 0)-1);
					if (!!(((*dest).data->data[h] == NIM_NIL))) goto LA13_;
					failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_25));
				}
				LA13_: ;
				n = (tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
				n = (tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI_Vz0pPzxitckVclPPWiz0xw_), sizeof(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ));
				asgnRef((void**) (&(*n).next), (*dest).head);
				(*n).key = (*it).key;
				nimCopyMem((void*)(*n).bits, (NIM_CONST void*)(*it).bits, sizeof(tyArray_cC4ce9cdvDKtIpar5g9cDejA));
				unsureAsgnRef((void**) (&(*dest).head), n);
				if ((NU)(h) >= (NU)((*dest).data ? (*dest).data->Sup.len : 0)) raiseIndexError2(h,((*dest).data ? (*dest).data->Sup.len : 0)-1);
				asgnRef((void**) (&(*dest).data->data[h]), n);
				it = (*it).next;
			} LA8: ;
		}
	}
	LA1_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, exclImpl_jENnK9c9bPE73pKmo2vYjpqg_3)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
{	{
		if (!((*s).elems <= ((NI) 34))) goto LA3_;
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (*s).elems;
			i_2 = ((NI) 0);
			{
				while (1) {
					NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_28;
					if (!(i_2 < colontmp_)) goto LA7;
					i = i_2;
					{
						NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_26;
						NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_27;
						if ((NU)(i) > (NU)(33)) raiseIndexError2(i, 33);
						if (!((*s).a[(i)- 0] == key)) goto LA10_;
						if ((NU)(i) > (NU)(33)) raiseIndexError2(i, 33);
						TM_ulJ2WYumkJwZ9b5Ewe7sCpg_26 = subInt((*s).elems, ((NI) 1));
						if ((NU)((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_26)) > (NU)(33)) raiseIndexError2((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_26), 33);
						(*s).a[(i)- 0] = (*s).a[((NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_26))- 0];
						TM_ulJ2WYumkJwZ9b5Ewe7sCpg_27 = subInt((*s).elems, ((NI) 1));
						(*s).elems = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_27);
						goto BeforeRet_;
					}
					LA10_: ;
					TM_ulJ2WYumkJwZ9b5Ewe7sCpg_28 = addInt(i_2, ((NI) 1));
					i_2 = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_28);
				} LA7: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* t;
		t = intSetGet_sgEEbaJIQsQO4zFm2Zy3yQ((&(*s)), (NI)((NI32)(key) >> (NU32)(((NI) 9))));
		{
			NI u;
			if (!!((t == NIM_NIL))) goto LA15_;
			u = (NI)(key & ((NI) 511));
			if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
			if ((NU)((NI)((NI32)(u) >> (NU32)(((NI) 5)))) > (NU)(15)) raiseIndexError2((NI)((NI32)(u) >> (NU32)(((NI) 5))), 15);
			(*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] = (NU)((*t).bits[((NI)((NI32)(u) >> (NU32)(((NI) 5))))- 0] & (NU)((NU32) ~((NU)((NU32)(((NU) 1)) << (NU32)((NI)(u & ((NI) 31)))))));
		}
		LA15_: ;
	}
	LA1_: ;
	}BeforeRet_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, excl_jENnK9c9bPE73pKmo2vYjpqg_2)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s, NI key) {
	exclImpl_jENnK9c9bPE73pKmo2vYjpqg_3(s, key);
}

N_LIB_PRIVATE N_NIMCALL(void, difference_jhF9cCHu5ggiDdc87e1wx3g)(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s1, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* s2, tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg* Result) {
	initIntSet_n8oDZMn19bEdodSnrBQB9a1Q(Result);
	{
		NI item;
		item = (NI)0;
		{
			if (!((*s1).elems <= ((NI) 34))) goto LA4_;
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = (*s1).elems;
				i_2 = ((NI) 0);
				{
					while (1) {
						NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_29;
						if (!(i_2 < colontmp_)) goto LA8;
						i = i_2;
						if ((NU)(i) > (NU)(33)) raiseIndexError2(i, 33);
						item = (*s1).a[(i)- 0];
						{
							NIM_BOOL T11_;
							T11_ = (NIM_BOOL)0;
							T11_ = contains_R6uRTGpl30Ofaw4Ni3vawA(s2, item);
							if (!!(T11_)) goto LA12_;
							incl_jENnK9c9bPE73pKmo2vYjpqg(Result, item);
						}
						LA12_: ;
						TM_ulJ2WYumkJwZ9b5Ewe7sCpg_29 = addInt(i_2, ((NI) 1));
						i_2 = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_29);
					} LA8: ;
				}
			}
		}
		goto LA2_;
		LA4_: ;
		{
			tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* r;
			r = (*s1).head;
			{
				while (1) {
					NI i_3;
					if (!!((r == NIM_NIL))) goto LA16;
					i_3 = ((NI) 0);
					{
						while (1) {
							NU w;
							NI j;
							NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_31;
							if (!(i_3 <= ((NI) 15))) goto LA18;
							if ((NU)(i_3) > (NU)(15)) raiseIndexError2(i_3, 15);
							w = (*r).bits[(i_3)- 0];
							j = ((NI) 0);
							{
								while (1) {
									NI TM_ulJ2WYumkJwZ9b5Ewe7sCpg_30;
									if (!!((w == ((NI) 0)))) goto LA20;
									{
										if (!!(((NU)(w & ((NI) 1)) == ((NI) 0)))) goto LA23_;
										item = (NI)((NI)((NU32)((*r).key) << (NU32)(((NI) 9))) | (NI)((NU32)((NI)((NU32)(i_3) << (NU32)(((NI) 5)))) + (NU32)(j)));
										{
											NIM_BOOL T27_;
											T27_ = (NIM_BOOL)0;
											T27_ = contains_R6uRTGpl30Ofaw4Ni3vawA(s2, item);
											if (!!(T27_)) goto LA28_;
											incl_jENnK9c9bPE73pKmo2vYjpqg(Result, item);
										}
										LA28_: ;
									}
									LA23_: ;
									TM_ulJ2WYumkJwZ9b5Ewe7sCpg_30 = addInt(j, ((NI) 1));
									j = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_30);
									w = (NU)((NU32)(w) >> (NU32)(((NI) 1)));
								} LA20: ;
							}
							TM_ulJ2WYumkJwZ9b5Ewe7sCpg_31 = addInt(i_3, ((NI) 1));
							i_3 = (NI)(TM_ulJ2WYumkJwZ9b5Ewe7sCpg_31);
						} LA18: ;
					}
					r = (*r).next;
				} LA16: ;
			}
		}
		LA2_: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[6];
static TNimNode* TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[3];
static TNimNode TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[11];
NTI_PQrmFm4BXFkFSVOUl1ojSg_.size = sizeof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg);
NTI_PQrmFm4BXFkFSVOUl1ojSg_.kind = 18;
NTI_PQrmFm4BXFkFSVOUl1ojSg_.base = 0;
NTI_PQrmFm4BXFkFSVOUl1ojSg_.flags = 2;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[0] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].offset = offsetof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg, elems);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].name = "elems";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[1] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].offset = offsetof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg, counter);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].name = "counter";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[2] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].offset = offsetof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg, max);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].name = "max";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[3] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4];
NTI_ul49aWfv9aes8cutmeltT3gQ_.size = sizeof(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ);
NTI_ul49aWfv9aes8cutmeltT3gQ_.kind = 18;
NTI_ul49aWfv9aes8cutmeltT3gQ_.base = 0;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[0] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].offset = offsetof(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ, next);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].typ = (&NTI_Vz0pPzxitckVclPPWiz0xw_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].name = "next";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[1] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7];
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].offset = offsetof(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ, key);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].name = "key";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[2] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8];
NTI_cC4ce9cdvDKtIpar5g9cDejA_.size = sizeof(tyArray_cC4ce9cdvDKtIpar5g9cDejA);
NTI_cC4ce9cdvDKtIpar5g9cDejA_.kind = 16;
NTI_cC4ce9cdvDKtIpar5g9cDejA_.base = (&NTI_hMQEc0FMry7Up7EoPki79aA_);
NTI_cC4ce9cdvDKtIpar5g9cDejA_.flags = 3;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].offset = offsetof(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ, bits);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].typ = (&NTI_cC4ce9cdvDKtIpar5g9cDejA_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].name = "bits";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].len = 3; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].kind = 2; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].sons = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_3_3[0];
NTI_ul49aWfv9aes8cutmeltT3gQ_.node = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5];
NTI_Vz0pPzxitckVclPPWiz0xw_.size = sizeof(tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ*);
NTI_Vz0pPzxitckVclPPWiz0xw_.kind = 22;
NTI_Vz0pPzxitckVclPPWiz0xw_.base = (&NTI_ul49aWfv9aes8cutmeltT3gQ_);
NTI_Vz0pPzxitckVclPPWiz0xw_.marker = Marker_tyRef_Vz0pPzxitckVclPPWiz0xw;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].offset = offsetof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg, head);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].typ = (&NTI_Vz0pPzxitckVclPPWiz0xw_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].name = "head";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[4] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[9];
NTI_9brg1xNurxcus33lU4IE1Dw_.size = sizeof(tySequence_9brg1xNurxcus33lU4IE1Dw*);
NTI_9brg1xNurxcus33lU4IE1Dw_.kind = 24;
NTI_9brg1xNurxcus33lU4IE1Dw_.base = (&NTI_Vz0pPzxitckVclPPWiz0xw_);
NTI_9brg1xNurxcus33lU4IE1Dw_.flags = 2;
NTI_9brg1xNurxcus33lU4IE1Dw_.marker = Marker_tySequence_9brg1xNurxcus33lU4IE1Dw;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].offset = offsetof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg, data);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].typ = (&NTI_9brg1xNurxcus33lU4IE1Dw_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[9].name = "data";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[5] = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[10];
NTI_emiAJ8okywrJw7ZHLzlXbQ_.size = sizeof(tyArray_emiAJ8okywrJw7ZHLzlXbQ);
NTI_emiAJ8okywrJw7ZHLzlXbQ_.kind = 16;
NTI_emiAJ8okywrJw7ZHLzlXbQ_.base = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
NTI_emiAJ8okywrJw7ZHLzlXbQ_.flags = 3;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].kind = 1;
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].offset = offsetof(tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg, a);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].typ = (&NTI_emiAJ8okywrJw7ZHLzlXbQ_);
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[10].name = "a";
TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].len = 6; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].kind = 2; TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].sons = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_2_6[0];
NTI_PQrmFm4BXFkFSVOUl1ojSg_.node = &TM_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0];
}

