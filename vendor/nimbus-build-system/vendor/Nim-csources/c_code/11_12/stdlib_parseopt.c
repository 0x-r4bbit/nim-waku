/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg;
typedef struct RootObj RootObj;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
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
struct RootObj {
TNimType* m_type;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg {
  RootObj Sup;
NI pos;
NIM_BOOL inShortState;
NIM_BOOL allowWhitespaceAfterColon;
tySet_tyChar_nmiMWKVIe46vacnhAFrQvw shortNoVal;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* longNoVal;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cmds;
NI idx;
tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA kind;
NimStringDesc* key;
NimStringDesc* val;
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
typedef NU8 tyArray_S8ib5N31oJbAkqOZTlNg5Q[8192];
struct tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, nosparseCmdLine)(NimStringDesc* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, newSeq_9cL6dIz2UWtIh3FeS5x4hxA)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, paramCount_5cCEQwTkCbJelL53mLWVJA)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, paramStr_Sg8dYp3Gyg5Tw1TS4P20Kw)(NI i);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, handleShortOption_HN8Wbc53Y0IJm9cAl4dQjzA)(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg* p, NimStringDesc* cmd);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NI, cardSet)(tyArray_S8ib5N31oJbAkqOZTlNg5Q s, NI len);
N_NIMCALL(NI, countBits32)(NI32 n);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_9bUFQ4OV1temcDF0GZp317g)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NI, parseWord_JAw9bP8tjPXKSullchoBwUA)(NimStringDesc* s, NI i, NimStringDesc** w, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw delim);
static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwparseopt)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQparseopt)(NimStringDesc** a, NI aLen_0, NimStringDesc* item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, quoteShellCommand_9aiV2TTf3ltrADregNsYYGg)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, X5BX5D__3CAP6r1b9aJgGD9c0w2eaiVQ)(NimStringDesc** s, NI sLen_0, tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA x);
static N_INLINE(tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA, dotdot__eU55RNB9cNR2VhrR9bsjoASgparseopt)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_l9cyoK9aLLTUH7LBRIbLqETg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI_nmiMWKVIe46vacnhAFrQvw_;
TNimType NTI_HDqWPvEAxZK51ZcfaeQEdg_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
TNimType NTI_XkdXq9atxjiuhkFFh0XYrSA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_GYgvYKeHVTEls0AcywABHQ_6 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(void, initOptParser_zlMuAUilEJnwswiobmqZEg)(NimStringDesc* cmdline, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw shortNoVal, tySequence_sM4lkSb7zS6F7OVMvW9cffQ* longNoVal, NIM_BOOL allowWhitespaceAfterColon, tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg* Result) {
	genericReset((void*)Result, (&NTI_l9cyoK9aLLTUH7LBRIbLqETg_));
	(*Result).Sup.m_type = (&NTI_l9cyoK9aLLTUH7LBRIbLqETg_);
	(*Result).pos = ((NI) 0);
	(*Result).idx = ((NI) 0);
	(*Result).inShortState = NIM_FALSE;
	nimCopyMem((void*)(*Result).shortNoVal, (NIM_CONST void*)shortNoVal, 32);
	genericSeqAssign((&(*Result).longNoVal), longNoVal, (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_));
	(*Result).allowWhitespaceAfterColon = allowWhitespaceAfterColon;
	{
		if (!!(((cmdline ? cmdline->Sup.len : 0) == 0))) goto LA3_;
		unsureAsgnRef((void**) (&(*Result).cmds), nosparseCmdLine(cmdline));
	}
	goto LA1_;
	LA3_: ;
	{
		NI T6_;
		T6_ = (NI)0;
		T6_ = paramCount_5cCEQwTkCbJelL53mLWVJA();
		unsureAsgnRef((void**) (&(*Result).cmds), newSeq_9cL6dIz2UWtIh3FeS5x4hxA(((NI) (T6_))));
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = paramCount_5cCEQwTkCbJelL53mLWVJA();
			res = ((NI) 1);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA9;
					i = res;
					asgnRef((void**) (&(*Result).cmds->data[(NI)(i - ((NI) 1))]), paramStr_Sg8dYp3Gyg5Tw1TS4P20Kw(i));
					res += ((NI) 1);
				} LA9: ;
			}
		}
	}
	LA1_: ;
	(*Result).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 0);
	unsureAsgnRef((void**) (&(*Result).key), ((NimStringDesc*) NIM_NIL));
	unsureAsgnRef((void**) (&(*Result).val), ((NimStringDesc*) NIM_NIL));
}

static N_INLINE(NI, cardSet)(tyArray_S8ib5N31oJbAkqOZTlNg5Q s, NI len) {
	NI result;
	result = (NI)0;
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < len)) goto LA3;
				i = i_2;
				{
					NI T10_;
					{
						NIM_BOOL T7_;
						T7_ = (NIM_BOOL)0;
						T7_ = likely((s[(i)- 0] == ((NI) 0)));
						if (!T7_) goto LA8_;
						goto LA4;
					}
					LA8_: ;
					T10_ = (NI)0;
					T10_ = countBits32(((NI32) (s[(i)- 0])));
					result += T10_;
				} LA4: ;
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, handleShortOption_HN8Wbc53Y0IJm9cAl4dQjzA)(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg* p, NimStringDesc* cmd) {
	NI i;
	i = (*p).pos;
	(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 3);
	unsureAsgnRef((void**) (&(*p).key), addChar((*p).key, cmd->data[i]));
	i += ((NI) 1);
	(*p).inShortState = NIM_TRUE;
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (i < (cmd ? cmd->Sup.len : 0));
			if (!(T3_)) goto LA4_;
			T3_ = (((NU8)(cmd->data[i])) == ((NU8)(9)) || ((NU8)(cmd->data[i])) == ((NU8)(32)));
			LA4_: ;
			if (!T3_) goto LA2;
			i += ((NI) 1);
			(*p).inShortState = NIM_FALSE;
		} LA2: ;
	}
	{
		NIM_BOOL T7_;
		NIM_BOOL T8_;
		NIM_BOOL T11_;
		T7_ = (NIM_BOOL)0;
		T8_ = (NIM_BOOL)0;
		T8_ = (i < (cmd ? cmd->Sup.len : 0));
		if (!(T8_)) goto LA9_;
		T8_ = (((NU8)(cmd->data[i])) == ((NU8)(58)) || ((NU8)(cmd->data[i])) == ((NU8)(61)));
		LA9_: ;
		T7_ = T8_;
		if (T7_) goto LA10_;
		T11_ = (NIM_BOOL)0;
		T11_ = (((NI) 0) < cardSet((*p).shortNoVal, 32));
		if (!(T11_)) goto LA12_;
		T11_ = !((((*p).shortNoVal[(NU)(((NU8)((*p).key->data[((NI) 0)])))>>3] &(1U<<((NU)(((NU8)((*p).key->data[((NI) 0)])))&7U)))!=0));
		LA12_: ;
		T7_ = T11_;
		LA10_: ;
		if (!T7_) goto LA13_;
		{
			NIM_BOOL T17_;
			T17_ = (NIM_BOOL)0;
			T17_ = (i < (cmd ? cmd->Sup.len : 0));
			if (!(T17_)) goto LA18_;
			T17_ = (((NU8)(cmd->data[i])) == ((NU8)(58)) || ((NU8)(cmd->data[i])) == ((NU8)(61)));
			LA18_: ;
			if (!T17_) goto LA19_;
			i += ((NI) 1);
		}
		LA19_: ;
		(*p).inShortState = NIM_FALSE;
		{
			while (1) {
				NIM_BOOL T23_;
				T23_ = (NIM_BOOL)0;
				T23_ = (i < (cmd ? cmd->Sup.len : 0));
				if (!(T23_)) goto LA24_;
				T23_ = (((NU8)(cmd->data[i])) == ((NU8)(9)) || ((NU8)(cmd->data[i])) == ((NU8)(32)));
				LA24_: ;
				if (!T23_) goto LA22;
				i += ((NI) 1);
			} LA22: ;
		}
		unsureAsgnRef((void**) (&(*p).val), substr_9bUFQ4OV1temcDF0GZp317g(cmd, i));
		(*p).pos = ((NI) 0);
		(*p).idx += ((NI) 1);
	}
	goto LA5_;
	LA13_: ;
	{
		(*p).pos = i;
	}
	LA5_: ;
	{
		if (!((cmd ? cmd->Sup.len : 0) <= i)) goto LA28_;
		(*p).inShortState = NIM_FALSE;
		(*p).pos = ((NI) 0);
		(*p).idx += ((NI) 1);
	}
	LA28_: ;
}

N_LIB_PRIVATE N_NIMCALL(NI, parseWord_JAw9bP8tjPXKSullchoBwUA)(NimStringDesc* s, NI i, NimStringDesc** w, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw delim) {
	NI result;
	result = (NI)0;
	result = i;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (result < (s ? s->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		T3_ = ((NU8)(s->data[result]) == (NU8)(34));
		LA4_: ;
		if (!T3_) goto LA5_;
		result += ((NI) 1);
		{
			while (1) {
				if (!(result < (s ? s->Sup.len : 0))) goto LA8;
				{
					if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA11_;
					result += ((NI) 1);
					goto LA7;
				}
				LA11_: ;
				unsureAsgnRef((void**) (&(*w)), addChar((*w), s->data[result]));
				result += ((NI) 1);
			} LA8: ;
		} LA7: ;
	}
	goto LA1_;
	LA5_: ;
	{
		{
			while (1) {
				NIM_BOOL T16_;
				T16_ = (NIM_BOOL)0;
				T16_ = (result < (s ? s->Sup.len : 0));
				if (!(T16_)) goto LA17_;
				T16_ = !(((delim[(NU)(((NU8)(s->data[result])))>>3] &(1U<<((NU)(((NU8)(s->data[result])))&7U)))!=0));
				LA17_: ;
				if (!T16_) goto LA15;
				unsureAsgnRef((void**) (&(*w)), addChar((*w), s->data[result]));
				result += ((NI) 1);
			} LA15: ;
		}
	}
	LA1_: ;
	return result;
}

static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, find_9basNl9bVqn7SOf9bgUeI8TEQparseopt)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NI result;
{	result = (NI)0;
	{
		NimStringDesc* i;
		NI i_2;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3;
				i = a[i_2];
				{
					if (!eqStrings(i, item)) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, contains_jPdUhZfr9a8sH2V3ZBDljzwparseopt)(NimStringDesc** a, NI aLen_0, NimStringDesc* item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find_9basNl9bVqn7SOf9bgUeI8TEQparseopt(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, nponext)(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg* p) {
	NI i;
{	{
		NI T3_;
		T3_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
		if (!(T3_ <= (*p).idx)) goto LA4_;
		(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 0);
		goto BeforeRet_;
	}
	LA4_: ;
	i = (*p).pos;
	{
		while (1) {
			NIM_BOOL T8_;
			T8_ = (NIM_BOOL)0;
			T8_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
			if (!(T8_)) goto LA9_;
			T8_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(32)));
			LA9_: ;
			if (!T8_) goto LA7;
			i += ((NI) 1);
		} LA7: ;
	}
	(*p).pos = i;
	unsureAsgnRef((void**) (&(*p).key), setLengthStr((*p).key, ((NI) 0)));
	unsureAsgnRef((void**) (&(*p).val), setLengthStr((*p).val, ((NI) 0)));
	{
		if (!(*p).inShortState) goto LA12_;
		(*p).inShortState = NIM_FALSE;
		{
			if (!(((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0) <= i)) goto LA16_;
			(*p).idx += ((NI) 1);
			(*p).pos = ((NI) 0);
			{
				NI T20_;
				T20_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
				if (!(T20_ <= (*p).idx)) goto LA21_;
				(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 0);
				goto BeforeRet_;
			}
			LA21_: ;
		}
		goto LA14_;
		LA16_: ;
		{
			handleShortOption_HN8Wbc53Y0IJm9cAl4dQjzA(p, (*p).cmds->data[(*p).idx]);
			goto BeforeRet_;
		}
		LA14_: ;
	}
	LA12_: ;
	{
		NIM_BOOL T26_;
		T26_ = (NIM_BOOL)0;
		T26_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
		if (!(T26_)) goto LA27_;
		T26_ = ((NU8)((*p).cmds->data[(*p).idx]->data[i]) == (NU8)(45));
		LA27_: ;
		if (!T26_) goto LA28_;
		i += ((NI) 1);
		{
			NIM_BOOL T32_;
			T32_ = (NIM_BOOL)0;
			T32_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
			if (!(T32_)) goto LA33_;
			T32_ = ((NU8)((*p).cmds->data[(*p).idx]->data[i]) == (NU8)(45));
			LA33_: ;
			if (!T32_) goto LA34_;
			(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 2);
			i += ((NI) 1);
			i = parseWord_JAw9bP8tjPXKSullchoBwUA((*p).cmds->data[(*p).idx], i, (&(*p).key), TM_GYgvYKeHVTEls0AcywABHQ_6);
			{
				while (1) {
					NIM_BOOL T38_;
					T38_ = (NIM_BOOL)0;
					T38_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
					if (!(T38_)) goto LA39_;
					T38_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(32)));
					LA39_: ;
					if (!T38_) goto LA37;
					i += ((NI) 1);
				} LA37: ;
			}
			{
				NIM_BOOL T42_;
				T42_ = (NIM_BOOL)0;
				T42_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
				if (!(T42_)) goto LA43_;
				T42_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(61)));
				LA43_: ;
				if (!T42_) goto LA44_;
				i += ((NI) 1);
				{
					while (1) {
						NIM_BOOL T48_;
						T48_ = (NIM_BOOL)0;
						T48_ = (i < ((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0));
						if (!(T48_)) goto LA49_;
						T48_ = (((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmds->data[(*p).idx]->data[i])) == ((NU8)(32)));
						LA49_: ;
						if (!T48_) goto LA47;
						i += ((NI) 1);
					} LA47: ;
				}
				{
					NIM_BOOL T52_;
					NIM_BOOL T53_;
					NI T55_;
					T52_ = (NIM_BOOL)0;
					T53_ = (NIM_BOOL)0;
					T53_ = (((*p).cmds->data[(*p).idx] ? (*p).cmds->data[(*p).idx]->Sup.len : 0) <= i);
					if (!(T53_)) goto LA54_;
					T55_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
					T53_ = ((*p).idx < T55_);
					LA54_: ;
					T52_ = T53_;
					if (!(T52_)) goto LA56_;
					T52_ = (*p).allowWhitespaceAfterColon;
					LA56_: ;
					if (!T52_) goto LA57_;
					(*p).idx += ((NI) 1);
					i = ((NI) 0);
				}
				LA57_: ;
				unsureAsgnRef((void**) (&(*p).val), substr_9bUFQ4OV1temcDF0GZp317g((*p).cmds->data[(*p).idx], i));
			}
			goto LA40_;
			LA44_: ;
			{
				NIM_BOOL T60_;
				NIM_BOOL T61_;
				NI T62_;
				NIM_BOOL T64_;
				NI T66_;
				T60_ = (NIM_BOOL)0;
				T61_ = (NIM_BOOL)0;
				T62_ = ((*p).longNoVal ? (*p).longNoVal->Sup.len : 0);
				T61_ = (((NI) 0) < T62_);
				if (!(T61_)) goto LA63_;
				T64_ = (NIM_BOOL)0;
				T64_ = contains_jPdUhZfr9a8sH2V3ZBDljzwparseopt((*p).longNoVal->data, ((*p).longNoVal ? (*p).longNoVal->Sup.len : 0), (*p).key);
				T61_ = !(T64_);
				LA63_: ;
				T60_ = T61_;
				if (!(T60_)) goto LA65_;
				T66_ = ((*p).cmds ? (*p).cmds->Sup.len : 0);
				T60_ = ((NI)((*p).idx + ((NI) 1)) < T66_);
				LA65_: ;
				if (!T60_) goto LA67_;
				unsureAsgnRef((void**) (&(*p).val), copyString((*p).cmds->data[(NI)((*p).idx + ((NI) 1))]));
				(*p).idx += ((NI) 1);
			}
			goto LA40_;
			LA67_: ;
			{
				unsureAsgnRef((void**) (&(*p).val), ((NimStringDesc*) NIM_NIL));
			}
			LA40_: ;
			(*p).idx += ((NI) 1);
			(*p).pos = ((NI) 0);
		}
		goto LA30_;
		LA34_: ;
		{
			(*p).pos = i;
			handleShortOption_HN8Wbc53Y0IJm9cAl4dQjzA(p, (*p).cmds->data[(*p).idx]);
		}
		LA30_: ;
	}
	goto LA24_;
	LA28_: ;
	{
		(*p).kind = ((tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA) 1);
		unsureAsgnRef((void**) (&(*p).key), copyString((*p).cmds->data[(*p).idx]));
		(*p).idx += ((NI) 1);
		(*p).pos = ((NI) 0);
	}
	LA24_: ;
	}BeforeRet_: ;
}

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
	(void)(T1_);
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

static N_INLINE(tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA, dotdot__eU55RNB9cNR2VhrR9bsjoASgparseopt)(NI a, NI b) {
	tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, npocmdLineRest)(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg* p) {
	NimStringDesc* result;
	tyObject_HSlice_EE5dzjqoOrHT6HJhIPXAvA T1_;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* T2_;
	result = (NimStringDesc*)0;
	T1_ = dotdot__eU55RNB9cNR2VhrR9bsjoASgparseopt((*p).idx, ((NI) 1));
	T2_ = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	T2_ = X5BX5D__3CAP6r1b9aJgGD9c0w2eaiVQ((*p).cmds->data, ((*p).cmds ? (*p).cmds->Sup.len : 0), T1_);
	result = quoteShellCommand_9aiV2TTf3ltrADregNsYYGg(T2_->data, (T2_ ? T2_->Sup.len : 0));
	return result;
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
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parseoptDatInit000)(void) {
static TNimNode* TM_GYgvYKeHVTEls0AcywABHQ_2[10];
static TNimNode* TM_GYgvYKeHVTEls0AcywABHQ_3[4];
NI TM_GYgvYKeHVTEls0AcywABHQ_5;
static char* NIM_CONST TM_GYgvYKeHVTEls0AcywABHQ_4[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TM_GYgvYKeHVTEls0AcywABHQ_0[17];
NTI_l9cyoK9aLLTUH7LBRIbLqETg_.size = sizeof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg);
NTI_l9cyoK9aLLTUH7LBRIbLqETg_.kind = 17;
NTI_l9cyoK9aLLTUH7LBRIbLqETg_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
TM_GYgvYKeHVTEls0AcywABHQ_2[0] = &TM_GYgvYKeHVTEls0AcywABHQ_0[1];
TM_GYgvYKeHVTEls0AcywABHQ_0[1].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[1].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, pos);
TM_GYgvYKeHVTEls0AcywABHQ_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_GYgvYKeHVTEls0AcywABHQ_0[1].name = "pos";
TM_GYgvYKeHVTEls0AcywABHQ_2[1] = &TM_GYgvYKeHVTEls0AcywABHQ_0[2];
TM_GYgvYKeHVTEls0AcywABHQ_0[2].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[2].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, inShortState);
TM_GYgvYKeHVTEls0AcywABHQ_0[2].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_GYgvYKeHVTEls0AcywABHQ_0[2].name = "inShortState";
TM_GYgvYKeHVTEls0AcywABHQ_2[2] = &TM_GYgvYKeHVTEls0AcywABHQ_0[3];
TM_GYgvYKeHVTEls0AcywABHQ_0[3].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[3].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, allowWhitespaceAfterColon);
TM_GYgvYKeHVTEls0AcywABHQ_0[3].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_GYgvYKeHVTEls0AcywABHQ_0[3].name = "allowWhitespaceAfterColon";
TM_GYgvYKeHVTEls0AcywABHQ_2[3] = &TM_GYgvYKeHVTEls0AcywABHQ_0[4];
NTI_HDqWPvEAxZK51ZcfaeQEdg_.size = sizeof(tySet_tyChar_nmiMWKVIe46vacnhAFrQvw);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.kind = 19;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.base = (&NTI_nmiMWKVIe46vacnhAFrQvw_);
NTI_HDqWPvEAxZK51ZcfaeQEdg_.flags = 3;
TM_GYgvYKeHVTEls0AcywABHQ_0[5].len = 0; TM_GYgvYKeHVTEls0AcywABHQ_0[5].kind = 0;
NTI_HDqWPvEAxZK51ZcfaeQEdg_.node = &TM_GYgvYKeHVTEls0AcywABHQ_0[5];
TM_GYgvYKeHVTEls0AcywABHQ_0[4].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[4].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, shortNoVal);
TM_GYgvYKeHVTEls0AcywABHQ_0[4].typ = (&NTI_HDqWPvEAxZK51ZcfaeQEdg_);
TM_GYgvYKeHVTEls0AcywABHQ_0[4].name = "shortNoVal";
TM_GYgvYKeHVTEls0AcywABHQ_2[4] = &TM_GYgvYKeHVTEls0AcywABHQ_0[6];
TM_GYgvYKeHVTEls0AcywABHQ_0[6].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[6].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, longNoVal);
TM_GYgvYKeHVTEls0AcywABHQ_0[6].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_GYgvYKeHVTEls0AcywABHQ_0[6].name = "longNoVal";
TM_GYgvYKeHVTEls0AcywABHQ_2[5] = &TM_GYgvYKeHVTEls0AcywABHQ_0[7];
TM_GYgvYKeHVTEls0AcywABHQ_0[7].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[7].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, cmds);
TM_GYgvYKeHVTEls0AcywABHQ_0[7].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_GYgvYKeHVTEls0AcywABHQ_0[7].name = "cmds";
TM_GYgvYKeHVTEls0AcywABHQ_2[6] = &TM_GYgvYKeHVTEls0AcywABHQ_0[8];
TM_GYgvYKeHVTEls0AcywABHQ_0[8].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[8].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, idx);
TM_GYgvYKeHVTEls0AcywABHQ_0[8].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_GYgvYKeHVTEls0AcywABHQ_0[8].name = "idx";
TM_GYgvYKeHVTEls0AcywABHQ_2[7] = &TM_GYgvYKeHVTEls0AcywABHQ_0[9];
NTI_XkdXq9atxjiuhkFFh0XYrSA_.size = sizeof(tyEnum_CmdLineKind_XkdXq9atxjiuhkFFh0XYrSA);
NTI_XkdXq9atxjiuhkFFh0XYrSA_.kind = 14;
NTI_XkdXq9atxjiuhkFFh0XYrSA_.base = 0;
NTI_XkdXq9atxjiuhkFFh0XYrSA_.flags = 3;
for (TM_GYgvYKeHVTEls0AcywABHQ_5 = 0; TM_GYgvYKeHVTEls0AcywABHQ_5 < 4; TM_GYgvYKeHVTEls0AcywABHQ_5++) {
TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+10].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+10].offset = TM_GYgvYKeHVTEls0AcywABHQ_5;
TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+10].name = TM_GYgvYKeHVTEls0AcywABHQ_4[TM_GYgvYKeHVTEls0AcywABHQ_5];
TM_GYgvYKeHVTEls0AcywABHQ_3[TM_GYgvYKeHVTEls0AcywABHQ_5] = &TM_GYgvYKeHVTEls0AcywABHQ_0[TM_GYgvYKeHVTEls0AcywABHQ_5+10];
}
TM_GYgvYKeHVTEls0AcywABHQ_0[14].len = 4; TM_GYgvYKeHVTEls0AcywABHQ_0[14].kind = 2; TM_GYgvYKeHVTEls0AcywABHQ_0[14].sons = &TM_GYgvYKeHVTEls0AcywABHQ_3[0];
NTI_XkdXq9atxjiuhkFFh0XYrSA_.node = &TM_GYgvYKeHVTEls0AcywABHQ_0[14];
TM_GYgvYKeHVTEls0AcywABHQ_0[9].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[9].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, kind);
TM_GYgvYKeHVTEls0AcywABHQ_0[9].typ = (&NTI_XkdXq9atxjiuhkFFh0XYrSA_);
TM_GYgvYKeHVTEls0AcywABHQ_0[9].name = "kind";
TM_GYgvYKeHVTEls0AcywABHQ_2[8] = &TM_GYgvYKeHVTEls0AcywABHQ_0[15];
TM_GYgvYKeHVTEls0AcywABHQ_0[15].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[15].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, key);
TM_GYgvYKeHVTEls0AcywABHQ_0[15].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_GYgvYKeHVTEls0AcywABHQ_0[15].name = "key";
TM_GYgvYKeHVTEls0AcywABHQ_2[9] = &TM_GYgvYKeHVTEls0AcywABHQ_0[16];
TM_GYgvYKeHVTEls0AcywABHQ_0[16].kind = 1;
TM_GYgvYKeHVTEls0AcywABHQ_0[16].offset = offsetof(tyObject_OptParser_l9cyoK9aLLTUH7LBRIbLqETg, val);
TM_GYgvYKeHVTEls0AcywABHQ_0[16].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_GYgvYKeHVTEls0AcywABHQ_0[16].name = "val";
TM_GYgvYKeHVTEls0AcywABHQ_0[0].len = 10; TM_GYgvYKeHVTEls0AcywABHQ_0[0].kind = 2; TM_GYgvYKeHVTEls0AcywABHQ_0[0].sons = &TM_GYgvYKeHVTEls0AcywABHQ_2[0];
NTI_l9cyoK9aLLTUH7LBRIbLqETg_.node = &TM_GYgvYKeHVTEls0AcywABHQ_0[0];
}

