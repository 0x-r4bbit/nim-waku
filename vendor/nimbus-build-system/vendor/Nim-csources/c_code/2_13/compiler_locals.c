/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
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
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence_MvZmat48bhe9b6x9aUD58D5Q tySequence_MvZmat48bhe9b6x9aUD58D5Q;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
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
typedef struct tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TPassContext_ZmGcnZ1NlGbjfV1h4uuYdw tyObject_TPassContext_ZmGcnZ1NlGbjfV1h4uuYdw;
typedef struct tyObject_TProcCon_s5jyYR8yL1QmFqiHICzU9aQ tyObject_TProcCon_s5jyYR8yL1QmFqiHICzU9aQ;
typedef struct tyObject_TMatchedConcept_9blNHn9cqK8EfxnwsfjDnKvg tyObject_TMatchedConcept_9blNHn9cqK8EfxnwsfjDnKvg;
typedef struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence_9brg1xNurxcus33lU4IE1Dw tySequence_9brg1xNurxcus33lU4IE1Dw;
typedef struct tySequence_oYkV9aFZe0MXcEAprJaOUsA tySequence_oYkV9aFZe0MXcEAprJaOUsA;
typedef struct tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q;
typedef struct tySequence_Mh9agqM29bm9aP5AUL1x7dZGA tySequence_Mh9agqM29bm9aP5AUL1x7dZGA;
typedef struct tySequence_arD7Tw6eD6lvOczWZl9buNg tySequence_arD7Tw6eD6lvOczWZl9buNg;
typedef struct tyObject_TCtx_kjKhKVgNzXX9aw59cmt1hHYg tyObject_TCtx_kjKhKVgNzXX9aw59cmt1hHYg;
typedef struct tySequence_jWKvSdankQPoT5bw9cBU9aiw tySequence_jWKvSdankQPoT5bw9cBU9aiw;
typedef struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ;
typedef struct tySequence_YceFcaugL2PWNtVbyffD9bQ tySequence_YceFcaugL2PWNtVbyffD9bQ;
typedef struct tyObject_TTabIter_VYF5VQsIYEVaBL0fKZJkbg tyObject_TTabIter_VYF5VQsIYEVaBL0fKZJkbg;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyTuple_zwpS6d6iewrdlBSTNFoyVA tyTuple_zwpS6d6iewrdlBSTNFoyVA;
typedef struct tyObject_TOptionEntry_H9ac5KbrDJVwT1zH5O83r7w tyObject_TOptionEntry_H9ac5KbrDJVwT1zH5O83r7w;
typedef struct tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg;
typedef struct tyObject_TInstantiationPair_HkXM4cJmOpk8zFcmq9c9c3gQ tyObject_TInstantiationPair_HkXM4cJmOpk8zFcmq9c9c3gQ;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple_KlSLWBROOViO04uLQHu7ig tyTuple_KlSLWBROOViO04uLQHu7ig;
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
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
} S1;
struct {NF floatVal;
} S2;
struct {NimStringDesc* strVal;
} S3;
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
} S4;
struct {tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* ident;
} S5;
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} _Ukind;
NimStringDesc* comment;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* dup;
};
struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_Ef05srmQTDulnBdXR4Ja6Q* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* destructor;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* deepCopy;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* assignment;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sink;
tySequence_MvZmat48bhe9b6x9aUD58D5Q* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typeInst;
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
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* data;
};
struct tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw {
NI depthLevel;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA symbols;
tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw* parent;
};
struct tyObject_TPassContext_ZmGcnZ1NlGbjfV1h4uuYdw {
  RootObj Sup;
};
typedef NI tyArray_emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
tySequence_9brg1xNurxcus33lU4IE1Dw* data;
tyArray_emiAJ8okywrJw7ZHLzlXbQ a;
};
struct tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q {
NI counter;
tySequence_Mh9agqM29bm9aP5AUL1x7dZGA* data;
};
typedef N_NIMCALL_PTR(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, tyProc_MqeJmGcq433YA5MeaSjdjg) (tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
typedef NU32 tySet_tyEnum_TExprFlag_0WWd9a4ssQWuY7Q6ZKepq9cQ;
typedef N_NIMCALL_PTR(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, tyProc_gGVj2XU4byrHu6wLri3ExA) (tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TExprFlag_0WWd9a4ssQWuY7Q6ZKepq9cQ flags);
typedef NU32 tySet_tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
typedef N_NIMCALL_PTR(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, tyProc_0fqG5A4ZWR5zNYQ6ndnFcA) (tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* nOrig, tySet_tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw filter, tySet_tyEnum_TExprFlag_0WWd9a4ssQWuY7Q6ZKepq9cQ flags);
typedef N_NIMCALL_PTR(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, tyProc_onLglM433uk9cCFfxT62Tfg) (tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* prev);
typedef struct {
N_NIMCALL_PTR(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, ClP_0) (tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q pt, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, void* ClE_0);
void* ClE_0;
} tyProc_VLr034hEi5eNsjZoyvf2Xg;
typedef struct {
N_NIMCALL_PTR(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, ClP_0) (tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* fn, tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q pt, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, void* ClE_0);
void* ClE_0;
} tyProc_IkMmlSMKq2j1qu5KCaRjEg;
typedef NU8 tyEnum_TTypeAttachedOp_jZY2AMF49b43fezf9aDwN9c9cQ;
typedef N_NIMCALL_PTR(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, tyProc_ieUYnzWnOiW2loCFIFhD9bA) (tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* dc, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, tyEnum_TTypeAttachedOp_jZY2AMF49b43fezf9aDwN9c9cQ op, NI col);
typedef NU16 tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ;
struct tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA {
  tyObject_TPassContext_ZmGcnZ1NlGbjfV1h4uuYdw Sup;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* enforceVoidContext;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* module;
tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw* currentScope;
tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw* importTable;
tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw* topLevelScope;
tyObject_TProcCon_s5jyYR8yL1QmFqiHICzU9aQ* p;
tyObject_TMatchedConcept_9blNHn9cqK8EfxnwsfjDnKvg* matchedConcept;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* friendModules;
NI instCounter;
tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg ambiguousSymbols;
NI inGenericContext;
NI inStaticContext;
NI inUnrolledContext;
NI compilesContextId;
NI compilesContextIdGenerator;
NI inGenericInst;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* converters;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* patterns;
tySequence_oYkV9aFZe0MXcEAprJaOUsA* optionStack;
tyObject_TIdTable_9aiv9bp2t5icFNINcg9c4xi1Q symMapping;
tySequence_arD7Tw6eD6lvOczWZl9buNg* libs;
tyProc_MqeJmGcq433YA5MeaSjdjg semConstExpr;
tyProc_gGVj2XU4byrHu6wLri3ExA semExpr;
tyProc_gGVj2XU4byrHu6wLri3ExA semTryExpr;
tyProc_MqeJmGcq433YA5MeaSjdjg semTryConstExpr;
tyProc_gGVj2XU4byrHu6wLri3ExA semOperand;
tyProc_MqeJmGcq433YA5MeaSjdjg semConstBoolExpr;
tyProc_0fqG5A4ZWR5zNYQ6ndnFcA semOverloadedCall;
tyProc_onLglM433uk9cCFfxT62Tfg semTypeNode;
tyProc_VLr034hEi5eNsjZoyvf2Xg semInferredLambda;
tyProc_IkMmlSMKq2j1qu5KCaRjEg semGenerateInstance;
tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg includedFiles;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA pureEnumFields;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA userPragmas;
tyObject_TCtx_kjKhKVgNzXX9aw59cmt1hHYg* evalContext;
tyObject_IntSet_PQrmFm4BXFkFSVOUl1ojSg unknownIdents;
tySequence_jWKvSdankQPoT5bw9cBU9aiw* generics;
NI topStmts;
NI lastGenericIdx;
NI hloLoopDetector;
NI inParallelStmt;
tyProc_ieUYnzWnOiW2loCFIFhD9bA instTypeBoundOp;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* selfName;
tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache;
tyObject_ModuleGraphcolonObjectType__RZI3hCs0FTPYx8StfC81qQ* graph;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA signatures;
NimStringDesc* recursiveDep;
NIM_BOOL suggestionsMade;
tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ features;
NI inTypeContext;
tySequence_YceFcaugL2PWNtVbyffD9bQ* typesWithOps;
};
struct tyObject_TTabIter_VYF5VQsIYEVaBL0fKZJkbg {
NI h;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
} S1;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
} S2;
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
} S4;
} _Ukind;
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
typedef NU64 tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
struct tyTuple_zwpS6d6iewrdlBSTNFoyVA {
NI Field0;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg {
tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA* key;
RootObj* val;
};
struct tyObject_TInstantiationPair_HkXM4cJmOpk8zFcmq9c9c3gQ {
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* genericSym;
tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* inst;
};
struct tyTuple_KlSLWBROOViO04uLQHu7ig {
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* Field0;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* Field1;
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence_MvZmat48bhe9b6x9aUD58D5Q {
  TGenericSeq Sup;
  tyTuple_zwpS6d6iewrdlBSTNFoyVA data[SEQ_DECL_SIZE];
};
struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
struct tySequence_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence_oYkV9aFZe0MXcEAprJaOUsA {
  TGenericSeq Sup;
  tyObject_TOptionEntry_H9ac5KbrDJVwT1zH5O83r7w* data[SEQ_DECL_SIZE];
};
struct tySequence_Mh9agqM29bm9aP5AUL1x7dZGA {
  TGenericSeq Sup;
  tyObject_TIdPair_AdFnD2YdADPeuJbG2YJ4vg data[SEQ_DECL_SIZE];
};
struct tySequence_arD7Tw6eD6lvOczWZl9buNg {
  TGenericSeq Sup;
  tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* data[SEQ_DECL_SIZE];
};
struct tySequence_jWKvSdankQPoT5bw9cBU9aiw {
  TGenericSeq Sup;
  tyObject_TInstantiationPair_HkXM4cJmOpk8zFcmq9c9c3gQ data[SEQ_DECL_SIZE];
};
struct tySequence_YceFcaugL2PWNtVbyffD9bQ {
  TGenericSeq Sup;
  tyTuple_KlSLWBROOViO04uLQHu7ig data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, newTypeS_tLJOzl5Er4FHfvqHLmX9b9bQ)(tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind, tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeIT_XPsPiaJWaj9b3UEC2OCu8Ug)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_I7fH85CUcZMasoPRKxPsPg)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, initTabIter_MivcR840C8HhD7BQHi3G6A)(tyObject_TTabIter_VYF5VQsIYEVaBL0fKZJkbg* ti, tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, skipTypes_7vZ9a9bub9bucX5E73hsr9cjvg)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t, tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, newSym_ZQfOwiQo63qLga19cuF5r9cQ)(tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw symKind, tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* name, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, getCurrOwner_tcF0JuW5v7GcLQ0Vix7jCg)(tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c);
N_LIB_PRIVATE N_NIMCALL(void, addSon_gCCf68XrWL79bKes6htzFjQ_2)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newSymNode_UWZXukHA5As9aCftRHbafBg)(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym);
N_LIB_PRIVATE N_NIMCALL(void, addSonSkipIntLit_IsUgUD6jUR9cHf7wFXGXH2A)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* father, tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newSymNode_NJtIrnjsE5ii9ciiIDaE0HQ)(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
static N_INLINE(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newDeref_HtAG89bn1UDHEhRcS27NOXQlocals)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(void, add_gCCf68XrWL79bKes6htzFjQ)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, nextIter_MivcR840C8HhD7BQHi3G6A_2)(tyObject_TTabIter_VYF5VQsIYEVaBL0fKZJkbg* ti, tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab);
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

static N_INLINE(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newDeref_HtAG89bn1UDHEhRcS27NOXQlocals)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result = newNodeIT_XPsPiaJWaj9b3UEC2OCu8Ug(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65), (*n).info, (*(*n).typ).sons->data[((NI) 0)]);
	addSon_gCCf68XrWL79bKes6htzFjQ_2(result, n);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, semLocals_Dsa2v3APUQA3J2v1ut3I8g)(tyObject_TContext_vTgAc1OsYaFyeD40uCdaWA* c, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	NI counter;
	tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* tupleType;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	counter = ((NI) 0);
	tupleType = newTypeS_tLJOzl5Er4FHfvqHLmX9b9bQ(((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 18), c);
	result = newNodeIT_XPsPiaJWaj9b3UEC2OCu8Ug(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 37), (*n).info, tupleType);
	asgnRefNoCycle((void**) (&(*tupleType).n), newNodeI_I7fH85CUcZMasoPRKxPsPg(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 138), (*n).info));
	{
		tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw* scope;
		tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw* colontmp_;
		tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw* current;
		scope = (tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw*)0;
		colontmp_ = (tyObject_TScope_1cQRXW6aAknk7ywAwjH3nw*)0;
		colontmp_ = (*c).currentScope;
		current = colontmp_;
		{
			while (1) {
				if (!!((current == NIM_NIL))) goto LA3;
				scope = current;
				{
					if (!(scope == (*c).topLevelScope)) goto LA6_;
					goto LA1;
				}
				LA6_: ;
				{
					tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* it;
					tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA colontmp__2;
					tyObject_TTabIter_VYF5VQsIYEVaBL0fKZJkbg it_2;
					tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s;
					it = (tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*)0;
					nimZeroMem((void*)(&colontmp__2), sizeof(tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA));
					colontmp__2.counter = (*scope).symbols.counter;
					colontmp__2.data = (*scope).symbols.data;
					nimZeroMem((void*)(&it_2), sizeof(tyObject_TTabIter_VYF5VQsIYEVaBL0fKZJkbg));
					s = initTabIter_MivcR840C8HhD7BQHi3G6A((&it_2), colontmp__2);
					{
						while (1) {
							if (!!((s == NIM_NIL))) goto LA10;
							it = s;
							{
								NIM_BOOL T13_;
								tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T15_;
								tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* field;
								tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* T18_;
								tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T19_;
								tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* a;
								T13_ = (NIM_BOOL)0;
								T13_ = ((2099976 &(1U<<((NU)((*it).kind)&31U)))!=0);
								if (!(T13_)) goto LA14_;
								T15_ = (tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
								T15_ = skipTypes_7vZ9a9bub9bucX5E73hsr9cjvg((*it).typ, 8390656);
								T13_ = !(((IL64(1153202979717775816) &((NU64)1<<((NU)((*T15_).kind)&63U)))!=0));
								LA14_: ;
								if (!T13_) goto LA16_;
								T18_ = (tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*)0;
								T18_ = getCurrOwner_tcF0JuW5v7GcLQ0Vix7jCg(c);
								field = newSym_ZQfOwiQo63qLga19cuF5r9cQ(((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 19), (*it).name, T18_, (*n).info, 0);
								asgnRefNoCycle((void**) (&(*field).typ), skipTypes_7vZ9a9bub9bucX5E73hsr9cjvg((*it).typ, 8388608));
								(*field).position = counter;
								counter += ((NI) 1);
								T19_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
								T19_ = newSymNode_UWZXukHA5As9aCftRHbafBg(field);
								addSon_gCCf68XrWL79bKes6htzFjQ_2((*tupleType).n, T19_);
								addSonSkipIntLit_IsUgUD6jUR9cHf7wFXGXH2A(tupleType, (*field).typ);
								a = newSymNode_NJtIrnjsE5ii9ciiIDaE0HQ(it, (*result).info);
								{
									tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T22_;
									T22_ = (tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
									T22_ = skipTypes_7vZ9a9bub9bucX5E73hsr9cjvg((*it).typ, 2048);
									if (!((*T22_).kind == ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 23))) goto LA23_;
									a = newDeref_HtAG89bn1UDHEhRcS27NOXQlocals(a);
								}
								LA23_: ;
								add_gCCf68XrWL79bKes6htzFjQ(result, a);
							}
							LA16_: ;
							s = nextIter_MivcR840C8HhD7BQHi3G6A_2((&it_2), colontmp__2);
						} LA10: ;
					}
				}
				current = (*current).parent;
			} LA3: ;
		}
	} LA1: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_localsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, compiler_localsDatInit000)(void) {
}

