/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tySequence_vhmj4KkIKPinmRXny9c2Q6Q tySequence_vhmj4KkIKPinmRXny9c2Q6Q;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
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
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg {
NI h;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key;
NI val;
};
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
};
struct {NF floatVal;
};
struct {NimStringDesc* strVal;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
};
struct {tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* ident;
};
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
};
};
NimStringDesc* comment;
};
typedef NU8 tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw[21];
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* transformedBody;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
};
};
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A {
NI counter;
tySequence_vhmj4KkIKPinmRXny9c2Q6Q* data;
};
typedef NU8 tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw;
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
struct tySequence_vhmj4KkIKPinmRXny9c2Q6Q {
  TGenericSeq Sup;
  tyObject_TNodePair_EZfI4tFqtDSTQys2UInNjg data[SEQ_DECL_SIZE];
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI, hashTree_o5qvbHKH3DRKeBZYV42HaA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(NI, emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes)(NI h, NI val);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_LIB_PRIVATE N_NIMCALL(NI, hash_6PCYkKlCNhq9cnRLnqWKkwQ)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, sonsLen_zOB1gNtXypybIzLxxB9cyWQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NI, nodeTableRawGet_2uELL659ao5jJa0oP9bgECwA)(tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A t, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, treesEquivalent_ES5PGoVkhviLiuaGxC9avVw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameTypeOrNil_3isNyHKb0U1OCnClmflXSg_2)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tySet_tyEnum_TTypeCmpFlag_72pgRXSg7774cr9aCWVPORw flags);
static N_INLINE(NI, nextTry_9bzOSawou0eb9apAqvIEoEGgastalgo)(NI h, NI maxHash);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash_B5utQwGyZRj1lQY2mjeMBw)(NI length, NI counter);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, nodeTableRawInsert_JzPSwWRci6TkN9atpNI9a9bEQ)(tySequence_vhmj4KkIKPinmRXny9c2Q6Q** data, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key, NI val);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI_vhmj4KkIKPinmRXny9c2Q6Q_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_i0pupOlr9bomnd8TcZjCBKw_2 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_3, "ident", 5);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_i0pupOlr9bomnd8TcZjCBKw_4 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_5, "sym", 3);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_i0pupOlr9bomnd8TcZjCBKw_6 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_7, "intVal", 6);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_i0pupOlr9bomnd8TcZjCBKw_8 = {
0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_9, "floatVal", 8);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_i0pupOlr9bomnd8TcZjCBKw_10 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_11, "strVal", 6);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_i0pupOlr9bomnd8TcZjCBKw_12 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_13, "sons", 4);
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_18, "/Users/andreasrumpf-mac/projects/nim/compiler/treetab.nim(99, 1"
"1) `t.data[index].key != nil` ", 93);
STRING_LITERAL(TM_i0pupOlr9bomnd8TcZjCBKw_20, "/Users/andreasrumpf-mac/projects/nim/compiler/treetab.nim(72, 9"
") `data[h].key == nil` ", 86);

static N_INLINE(NI, emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes)(NI h, NI val) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	val_2 = ((NU) (val));
	res = (NU)((NU64)(h_2) + (NU64)(val_2));
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI) 10)))));
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI) 6))));
	result = ((NI) (res));
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

N_LIB_PRIVATE N_NIMCALL(NI, hashTree_o5qvbHKH3DRKeBZYV42HaA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
{	result = (NI)0;
	{
		if (!(n == NIM_NIL)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	result = (*n).kind;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 4):
	{
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_2[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_3));
		result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, (*(*n).ident).h);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_4[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_5));
		result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, (*(*(*n).sym).name).h);
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 15):
	{
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_6[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_7));
			T11_ = ((IL64(-9223372036854775807) - IL64(1)) <= (*n).intVal);
			if (!(T11_)) goto LA12_;
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_6[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_7));
			T11_ = ((*n).intVal <= IL64(9223372036854775807));
			LA12_: ;
			if (!T11_) goto LA13_;
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_6[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_7));
			result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, ((NI) ((*n).intVal)));
		}
		LA13_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
	{
		{
			NIM_BOOL T18_;
			T18_ = (NIM_BOOL)0;
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_8[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_9));
			T18_ = (-1.0000000000000000e+06 <= (*n).floatVal);
			if (!(T18_)) goto LA19_;
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_8[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_9));
			T18_ = ((*n).floatVal <= 1.0000000000000000e+06);
			LA19_: ;
			if (!T18_) goto LA20_;
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_8[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_9));
			result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, float64ToInt32((*n).floatVal));
		}
		LA20_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		NI T23_;
		if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_10[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_11));
		T23_ = (NI)0;
		T23_ = hash_6PCYkKlCNhq9cnRLnqWKkwQ((*n).strVal);
		result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, T23_);
	}
	break;
	default:
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = sonsLen_zOB1gNtXypybIzLxxB9cyWQ(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					NI T28_;
					NI TM_i0pupOlr9bomnd8TcZjCBKw_14;
					if (!(i_2 < colontmp_)) goto LA27;
					i = i_2;
					if (((TM_i0pupOlr9bomnd8TcZjCBKw_12[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_13));
					if ((NU)(i) >= (NU)((*n).sons ? (*n).sons->Sup.len : 0)) raiseIndexError2(i,((*n).sons ? (*n).sons->Sup.len : 0)-1);
					T28_ = (NI)0;
					T28_ = hashTree_o5qvbHKH3DRKeBZYV42HaA((*n).sons->data[i]);
					result = emarkamp__Bho3MSI0G3qbEZZcjdigaQhashes(result, T28_);
					TM_i0pupOlr9bomnd8TcZjCBKw_14 = addInt(i_2, ((NI) 1));
					i_2 = (NI)(TM_i0pupOlr9bomnd8TcZjCBKw_14);
				} LA27: ;
			}
		}
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}

static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}

static N_INLINE(NIM_BOOL, equalMem_9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size) {
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
		result = equalMem_9bGgqEk7RXXl6eqM9c1HdELAsystem(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, treesEquivalent_ES5PGoVkhviLiuaGxC9avVw)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* b) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NIM_BOOL T7_;
		T6_ = (NIM_BOOL)0;
		T7_ = (NIM_BOOL)0;
		T7_ = !((a == NIM_NIL));
		if (!(T7_)) goto LA8_;
		T7_ = !((b == NIM_NIL));
		LA8_: ;
		T6_ = T7_;
		if (!(T6_)) goto LA9_;
		T6_ = ((*a).kind == (*b).kind);
		LA9_: ;
		if (!T6_) goto LA10_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 1):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_4[(NU)((*a).kind)>>3] &(1U<<((NU)((*a).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_5));
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_4[(NU)((*b).kind)>>3] &(1U<<((NU)((*b).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_5));
			result = ((*(*a).sym).Sup.id == (*(*b).sym).Sup.id);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
		{
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_2[(NU)((*a).kind)>>3] &(1U<<((NU)((*a).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_3));
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_2[(NU)((*b).kind)>>3] &(1U<<((NU)((*b).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_3));
			result = ((*(*a).ident).Sup.id == (*(*b).ident).Sup.id);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 15):
		{
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_6[(NU)((*a).kind)>>3] &(1U<<((NU)((*a).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_7));
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_6[(NU)((*b).kind)>>3] &(1U<<((NU)((*b).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_7));
			result = ((*a).intVal == (*b).intVal);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
		{
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_8[(NU)((*a).kind)>>3] &(1U<<((NU)((*a).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_9));
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_8[(NU)((*b).kind)>>3] &(1U<<((NU)((*b).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_9));
			result = ((*a).floatVal == (*b).floatVal);
		}
		break;
		case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
		{
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_10[(NU)((*a).kind)>>3] &(1U<<((NU)((*a).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_11));
			if (!(((TM_i0pupOlr9bomnd8TcZjCBKw_10[(NU)((*b).kind)>>3] &(1U<<((NU)((*b).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_11));
			result = eqStrings((*a).strVal, (*b).strVal);
		}
		break;
		default:
		{
			{
				NI T21_;
				NI T22_;
				T21_ = (NI)0;
				T21_ = sonsLen_zOB1gNtXypybIzLxxB9cyWQ(a);
				T22_ = (NI)0;
				T22_ = sonsLen_zOB1gNtXypybIzLxxB9cyWQ(b);
				if (!(T21_ == T22_)) goto LA23_;
				{
					NI i;
					NI colontmp_;
					NI i_2;
					i = (NI)0;
					colontmp_ = (NI)0;
					colontmp_ = sonsLen_zOB1gNtXypybIzLxxB9cyWQ(a);
					i_2 = ((NI) 0);
					{
						while (1) {
							NI TM_i0pupOlr9bomnd8TcZjCBKw_15;
							if (!(i_2 < colontmp_)) goto LA27;
							i = i_2;
							{
								NIM_BOOL T30_;
								if (((TM_i0pupOlr9bomnd8TcZjCBKw_12[(NU)((*a).kind)>>3] &(1U<<((NU)((*a).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_13));
								if ((NU)(i) >= (NU)((*a).sons ? (*a).sons->Sup.len : 0)) raiseIndexError2(i,((*a).sons ? (*a).sons->Sup.len : 0)-1);
								if (((TM_i0pupOlr9bomnd8TcZjCBKw_12[(NU)((*b).kind)>>3] &(1U<<((NU)((*b).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_13));
								if ((NU)(i) >= (NU)((*b).sons ? (*b).sons->Sup.len : 0)) raiseIndexError2(i,((*b).sons ? (*b).sons->Sup.len : 0)-1);
								T30_ = (NIM_BOOL)0;
								T30_ = treesEquivalent_ES5PGoVkhviLiuaGxC9avVw((*a).sons->data[i], (*b).sons->data[i]);
								if (!!(T30_)) goto LA31_;
								goto BeforeRet_;
							}
							LA31_: ;
							TM_i0pupOlr9bomnd8TcZjCBKw_15 = addInt(i_2, ((NI) 1));
							i_2 = (NI)(TM_i0pupOlr9bomnd8TcZjCBKw_15);
						} LA27: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23_: ;
		}
		break;
		}
		{
			if (!result) goto LA35_;
			result = sameTypeOrNil_3isNyHKb0U1OCnClmflXSg_2((*a).typ, (*b).typ, 0);
		}
		LA35_: ;
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, nextTry_9bzOSawou0eb9apAqvIEoEGgastalgo)(NI h, NI maxHash) {
	NI result;
	NI TM_i0pupOlr9bomnd8TcZjCBKw_16;
	NI TM_i0pupOlr9bomnd8TcZjCBKw_17;
	result = (NI)0;
	TM_i0pupOlr9bomnd8TcZjCBKw_16 = mulInt(((NI) 5), h);
	TM_i0pupOlr9bomnd8TcZjCBKw_17 = addInt((NI)(TM_i0pupOlr9bomnd8TcZjCBKw_16), ((NI) 1));
	result = (NI)((NI)(TM_i0pupOlr9bomnd8TcZjCBKw_17) & maxHash);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, nodeTableRawGet_2uELL659ao5jJa0oP9bgECwA)(tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A t, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key) {
	NI result;
	NI h;
	NI T1_;
{	result = (NI)0;
	T1_ = ((t.data ? t.data->Sup.len : 0)-1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T10_;
			if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
			if (!!((t.data->data[h].key == NIM_NIL))) goto LA3;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
				T6_ = (t.data->data[h].h == k);
				if (!(T6_)) goto LA7_;
				if ((NU)(h) >= (NU)(t.data ? t.data->Sup.len : 0)) raiseIndexError2(h,(t.data ? t.data->Sup.len : 0)-1);
				T6_ = treesEquivalent_ES5PGoVkhviLiuaGxC9avVw(t.data->data[h].key, key);
				LA7_: ;
				if (!T6_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = ((t.data ? t.data->Sup.len : 0)-1);
			h = nextTry_9bzOSawou0eb9apAqvIEoEGgastalgo(h, T10_);
		} LA3: ;
	}
	result = ((NI) -1);
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

static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
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

N_LIB_PRIVATE N_NIMCALL(void, nodeTableRawInsert_JzPSwWRci6TkN9atpNI9a9bEQ)(tySequence_vhmj4KkIKPinmRXny9c2Q6Q** data, NI k, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key, NI val) {
	NI h;
	NI T1_;
	T1_ = (((*data) ? (*data)->Sup.len : 0)-1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T4_;
			if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
			if (!!(((*data)->data[h].key == NIM_NIL))) goto LA3;
			T4_ = (((*data) ? (*data)->Sup.len : 0)-1);
			h = nextTry_9bzOSawou0eb9apAqvIEoEGgastalgo(h, T4_);
		} LA3: ;
	}
	{
		if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
		if (!!(((*data)->data[h].key == NIM_NIL))) goto LA7_;
		failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_20));
	}
	LA7_: ;
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
	(*data)->data[h].h = k;
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
	asgnRef((void**) (&(*data)->data[h].key), key);
	if ((NU)(h) >= (NU)((*data) ? (*data)->Sup.len : 0)) raiseIndexError2(h,((*data) ? (*data)->Sup.len : 0)-1);
	(*data)->data[h].val = val;
}

N_LIB_PRIVATE N_NIMCALL(NI, nodeTableTestOrSet_tWmKJP7glBWLCISQFGGk2Q)(tyObject_TNodeTable_wN7B39cKxLpMkvKNm9bduZ0A* t, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* key, NI val) {
	NI result;
	tySequence_vhmj4KkIKPinmRXny9c2Q6Q* n;
	NI k;
	NI index;
	result = (NI)0;
	n = (tySequence_vhmj4KkIKPinmRXny9c2Q6Q*)0;
	k = hashTree_o5qvbHKH3DRKeBZYV42HaA(key);
	index = nodeTableRawGet_2uELL659ao5jJa0oP9bgECwA((*t), k, key);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		{
			if ((NU)(index) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(index,((*t).data ? (*t).data->Sup.len : 0)-1);
			if (!!(!(((*t).data->data[index].key == NIM_NIL)))) goto LA7_;
			failedAssertImpl_W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM_i0pupOlr9bomnd8TcZjCBKw_18));
		}
		LA7_: ;
		if ((NU)(index) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(index,((*t).data ? (*t).data->Sup.len : 0)-1);
		result = (*t).data->data[index].val;
	}
	goto LA1_;
	LA3_: ;
	{
		NI TM_i0pupOlr9bomnd8TcZjCBKw_22;
		{
			NI T12_;
			NIM_BOOL T13_;
			NI T16_;
			NI TM_i0pupOlr9bomnd8TcZjCBKw_19;
			tySequence_vhmj4KkIKPinmRXny9c2Q6Q* T25_;
			T12_ = ((*t).data ? (*t).data->Sup.len : 0);
			T13_ = (NIM_BOOL)0;
			T13_ = mustRehash_B5utQwGyZRj1lQY2mjeMBw(T12_, (*t).counter);
			if (!T13_) goto LA14_;
			T16_ = ((*t).data ? (*t).data->Sup.len : 0);
			TM_i0pupOlr9bomnd8TcZjCBKw_19 = mulInt(T16_, ((NI) 2));
			n = (tySequence_vhmj4KkIKPinmRXny9c2Q6Q*) newSeq((&NTI_vhmj4KkIKPinmRXny9c2Q6Q_), ((NI)chckRange((NI)(TM_i0pupOlr9bomnd8TcZjCBKw_19), ((NI) 0), ((NI) IL64(9223372036854775807)))));
			{
				NI i;
				NI colontmp_;
				NI T18_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				T18_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
				colontmp_ = T18_;
				res = ((NI) 0);
				{
					while (1) {
						NI TM_i0pupOlr9bomnd8TcZjCBKw_21;
						if (!(res <= colontmp_)) goto LA20;
						i = res;
						{
							if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1);
							if (!!(((*t).data->data[i].key == NIM_NIL))) goto LA23_;
							if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1);
							if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1);
							if ((NU)(i) >= (NU)((*t).data ? (*t).data->Sup.len : 0)) raiseIndexError2(i,((*t).data ? (*t).data->Sup.len : 0)-1);
							nodeTableRawInsert_JzPSwWRci6TkN9atpNI9a9bEQ((&n), (*t).data->data[i].h, (*t).data->data[i].key, (*t).data->data[i].val);
						}
						LA23_: ;
						TM_i0pupOlr9bomnd8TcZjCBKw_21 = addInt(res, ((NI) 1));
						res = (NI)(TM_i0pupOlr9bomnd8TcZjCBKw_21);
					} LA20: ;
				}
			}
			T25_ = (tySequence_vhmj4KkIKPinmRXny9c2Q6Q*)0;
			T25_ = (*t).data;
			unsureAsgnRef((void**) (&(*t).data), n);
			n = T25_;
		}
		LA14_: ;
		nodeTableRawInsert_JzPSwWRci6TkN9atpNI9a9bEQ((&(*t).data), k, key, val);
		result = val;
		TM_i0pupOlr9bomnd8TcZjCBKw_22 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TM_i0pupOlr9bomnd8TcZjCBKw_22);
	}
	LA1_: ;
	return result;
}
