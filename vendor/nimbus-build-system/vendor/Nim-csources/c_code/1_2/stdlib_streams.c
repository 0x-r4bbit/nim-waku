/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#include <setjmp.h>
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
typedef struct tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
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
typedef struct tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw;
typedef struct tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
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
struct RootObj {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, tyProc_JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc_3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_2VVzVL9bOnKhj1eZKkf9cEuA) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_ki6p1QyfOkJLQJ9aw5NI0AQ) (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ {
  RootObj Sup;
tyProc_JQrsH08b4uPTH9cyFPlVOZg closeImpl;
tyProc_9bmhFrLahRsL2hltfRDVtlQ atEndImpl;
tyProc_3svSoGIUJIsHkaBL7q4DAQ setPositionImpl;
tyProc_xflqkf2D1uVClg70czEDHA getPositionImpl;
tyProc_2VVzVL9bOnKhj1eZKkf9cEuA readDataImpl;
tyProc_2VVzVL9bOnKhj1eZKkf9cEuA peekDataImpl;
tyProc_ki6p1QyfOkJLQJ9aw5NI0AQ writeDataImpl;
tyProc_JQrsH08b4uPTH9cyFPlVOZg flushImpl;
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
NU raise_id;
Exception* up;
};
struct tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError_qrLSDoe2oBoAqNtJ9badtnA Sup;
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
struct tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw {
  tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ Sup;
NimStringDesc* data;
NI pos;
};
typedef NIM_CHAR tyArray_9bKy7UA2LOi2vzOViufaW1Q[1024];
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
struct tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ {
  tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ Sup;
FILE* f;
};
typedef NU8 tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw;
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_NT9bSe2DDkjdtx7j9aov2Z6g;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_NT9bSe2DDkjdtx7j9aov2Z6g raiseAction;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, writeData_EOz6U9aIFgRtUqqdlm0VPhg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, atEnd_5ebsEcBZaoqxCkfDcpzdgg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*, newEIO_Xv2OzzdmoQWk9cjlC9c9b9ciYw)(NimStringDesc* msg);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, readChar_gV0kH8irN9bk7ZIGuh1xPOA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NI, readData_TYaWywfT8qLRVVdONIVhkw)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_NIMCALL(void, Marker_tyRef_1G0jiQbe7KwD5ADza5AZaw)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_Z9cj1NxLXx79cYy9c4gbj6CAA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void, ssClose_QCxhJhdbGUiB08yc0fBeLg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, ssAtEnd_Aq3rxetdTkDpVSXU7JqLPQ)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, ssSetPosition_KgEn9bmq40bvWqBEE7YUgvQ)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, clamp_RrNgT2340KObgDMnZWSK5A)(NI x, NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NI, ssGetPosition_Om0Yjh3VW2JrNe1mVaOhXA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NI, ssReadData_VwkmV0rE82KHQOm1pQyMKg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, ssPeekData_VwkmV0rE82KHQOm1pQyMKg_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(void, ssWriteData_OOEfFmc9bLLbcXoH1cApdvA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f, NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream_rT0vr5guf49c4PWwagLpAgQ)(FILE* f);
static N_NIMCALL(void, Marker_tyRef_y4kGpp4Cn6oTOCWBJMIxAg)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void, fsClose_QCxhJhdbGUiB08yc0fBeLg_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsAtEnd_Aq3rxetdTkDpVSXU7JqLPQ_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile_OpxMRqWNQzmofyVQsNQqVA)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, fsSetPosition_KgEn9bmq40bvWqBEE7YUgvQ_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, setFilePos_YAngY19cHH2nZ9bqhMgAHz8Q)(FILE* f, NI64 pos, tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw relativeTo);
N_LIB_PRIVATE N_NIMCALL(NI, fsGetPosition_Om0Yjh3VW2JrNe1mVaOhXA_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos_XePgC9ccBXCgb9bEHXZpnMqA)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI, fsReadData_VwkmV0rE82KHQOm1pQyMKg_3)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer_1qjbrvfnPD4PaIieHVDvhw_2)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, fsPeekData_VwkmV0rE82KHQOm1pQyMKg_4)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_LIB_PRIVATE N_NIMCALL(void, fsWriteData_OOEfFmc9bLLbcXoH1cApdvA_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer_1qjbrvfnPD4PaIieHVDvhw)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, fsFlush_QCxhJhdbGUiB08yc0fBeLg_3)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s);
N_LIB_PRIVATE N_NIMCALL(void, flushFile_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f);
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_THYguAi9bSgidczZ3ywEIMQ_;
TNimType NTI_JQrsH08b4uPTH9cyFPlVOZg_;
TNimType NTI_9bmhFrLahRsL2hltfRDVtlQ_;
TNimType NTI_3svSoGIUJIsHkaBL7q4DAQ_;
TNimType NTI_xflqkf2D1uVClg70czEDHA_;
TNimType NTI_2VVzVL9bOnKhj1eZKkf9cEuA_;
TNimType NTI_ki6p1QyfOkJLQJ9aw5NI0AQ_;
extern TNimType NTI_HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI_iLZrPn9anoh9ad1MmO0RczFw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_1G0jiQbe7KwD5ADza5AZaw_;
TNimType NTI_Olau5FPRehZBBEB77FHnfw_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_Z9cj1NxLXx79cYy9c4gbj6CAA_;
TNimType NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_;
extern TNimType NTI_7BHnQsEj49a9c6QtudqWTo1w_;
TNimType NTI_y4kGpp4Cn6oTOCWBJMIxAg_;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
STRING_LITERAL(TM_Ue7tnBcsL67VCiRfvt8q0A_3, "cannot read from stream", 23);
STRING_LITERAL(TM_Ue7tnBcsL67VCiRfvt8q0A_6, "cannot write to stream", 22);

N_LIB_PRIVATE N_NIMCALL(void, writeData_EOz6U9aIFgRtUqqdlm0VPhg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	(*s).writeDataImpl(s, buffer, bufLen);
}

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

N_LIB_PRIVATE N_NIMCALL(void, write_ilJq6ezua9cBxEFehuCAG9bg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc* x) {
	{
		if (!(((NI) 0) < (x ? x->Sup.len : 0))) goto LA3_;
		writeData_EOz6U9aIFgRtUqqdlm0VPhg(s, ((void*) (nimToCStringConv(x))), (x ? x->Sup.len : 0));
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, close_Xz3YiEzNrT9cUBndwi4hNjw)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	{
		if (!!(((*s).closeImpl == 0))) goto LA3_;
		(*s).closeImpl(s);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, atEnd_5ebsEcBZaoqxCkfDcpzdgg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (*s).atEndImpl(s);
	return result;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*, newEIO_Xv2OzzdmoQWk9cjlC9c9b9ciYw)(NimStringDesc* msg) {
	tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw* result;
	NimStringDesc* T1_;
	result = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*)0;
	result = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI_HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw));
	(*result).Sup.Sup.Sup.m_type = (&NTI_iLZrPn9anoh9ad1MmO0RczFw_);
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).Sup.Sup.message; (*result).Sup.Sup.message = copyStringRC1(msg);
	if (T1_) nimGCunrefNoCycle(T1_);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, readData_TYaWywfT8qLRVVdONIVhkw)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	result = (NI)0;
	result = (*s).readDataImpl(s, buffer, bufLen);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, readChar_gV0kH8irN9bk7ZIGuh1xPOA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = readData_TYaWywfT8qLRVVdONIVhkw(s, ((void*) ((&result))), ((NI) 1));
		if (!!((T3_ == ((NI) 1)))) goto LA4_;
		result = 0;
	}
	LA4_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine_KN3I0OGVr9bF9acs3y6DWpiA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NIM_BOOL T3_;
		tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw* T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = atEnd_5ebsEcBZaoqxCkfDcpzdgg(s);
		if (!T3_) goto LA4_;
		T6_ = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*)0;
		T6_ = newEIO_Xv2OzzdmoQWk9cjlC9c9b9ciYw(((NimStringDesc*) &TM_Ue7tnBcsL67VCiRfvt8q0A_3));
		raiseException((Exception*)T6_, "IOError");
	}
	LA4_: ;
	{
		while (1) {
			NIM_CHAR c;
			c = readChar_gV0kH8irN9bk7ZIGuh1xPOA(s);
			{
				if (!((NU8)(c) == (NU8)(13))) goto LA11_;
				c = readChar_gV0kH8irN9bk7ZIGuh1xPOA(s);
				goto LA7;
			}
			LA11_: ;
			{
				NIM_BOOL T15_;
				T15_ = (NIM_BOOL)0;
				T15_ = ((NU8)(c) == (NU8)(10));
				if (T15_) goto LA16_;
				T15_ = ((NU8)(c) == (NU8)(0));
				LA16_: ;
				if (!T15_) goto LA17_;
				goto LA7;
			}
			goto LA13_;
			LA17_: ;
			{
				result = addChar(result, c);
			}
			LA13_: ;
		}
	} LA7: ;
	return result;
}
static N_NIMCALL(void, Marker_tyRef_1G0jiQbe7KwD5ADza5AZaw)(void* p, NI op) {
	tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* a;
	a = (tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*)p;
}
static N_NIMCALL(void, Marker_tyRef_Z9cj1NxLXx79cYy9c4gbj6CAA)(void* p, NI op) {
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* a;
	a = (tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*)p;
	nimGCvisit((void*)(*a).data, op);
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

N_LIB_PRIVATE N_NIMCALL(void, ssClose_QCxhJhdbGUiB08yc0fBeLg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* s_2;
	s_2 = ((tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) (s));
	asgnRefNoCycle((void**) (&(*s_2).data), ((NimStringDesc*) NIM_NIL));
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, ssAtEnd_Aq3rxetdTkDpVSXU7JqLPQ)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* s_2;
{	result = (NIM_BOOL)0;
	s_2 = ((tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) (s));
	result = (((*s_2).data ? (*s_2).data->Sup.len : 0) <= (*s_2).pos);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, ssSetPosition_KgEn9bmq40bvWqBEE7YUgvQ)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NI pos) {
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* s_2;
	s_2 = ((tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) (s));
	(*s_2).pos = clamp_RrNgT2340KObgDMnZWSK5A(pos, ((NI) 0), ((*s_2).data ? (*s_2).data->Sup.len : 0));
}

N_LIB_PRIVATE N_NIMCALL(NI, ssGetPosition_Om0Yjh3VW2JrNe1mVaOhXA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NI result;
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* s_2;
{	result = (NI)0;
	s_2 = ((tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) (s));
	result = (*s_2).pos;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

N_LIB_PRIVATE N_NIMCALL(NI, ssReadData_VwkmV0rE82KHQOm1pQyMKg)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* s_2;
	result = (NI)0;
	s_2 = ((tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) (s));
	result = ((bufLen <= (NI)(((*s_2).data ? (*s_2).data->Sup.len : 0) - (*s_2).pos)) ? bufLen : (NI)(((*s_2).data ? (*s_2).data->Sup.len : 0) - (*s_2).pos));
	{
		if (!(((NI) 0) < result)) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(buffer, ((void*) ((&(*s_2).data->data[(*s_2).pos]))), ((NI) (result)));
		(*s_2).pos += result;
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI) 0);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, ssPeekData_VwkmV0rE82KHQOm1pQyMKg_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* s_2;
	result = (NI)0;
	s_2 = ((tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) (s));
	result = ((bufLen <= (NI)(((*s_2).data ? (*s_2).data->Sup.len : 0) - (*s_2).pos)) ? bufLen : (NI)(((*s_2).data ? (*s_2).data->Sup.len : 0) - (*s_2).pos));
	{
		if (!(((NI) 0) < result)) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(buffer, ((void*) ((&(*s_2).data->data[(*s_2).pos]))), ((NI) (result)));
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI) 0);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, ssWriteData_OOEfFmc9bLLbcXoH1cApdvA)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* s_2;
{	s_2 = ((tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) (s));
	{
		if (!(bufLen <= ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!(((*s_2).data ? (*s_2).data->Sup.len : 0) < (NI)((*s_2).pos + bufLen))) goto LA7_;
		asgnRefNoCycle((void**) (&(*s_2).data), setLengthStr((*s_2).data, ((NI) ((NI)((*s_2).pos + bufLen)))));
	}
	LA7_: ;
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*s_2).data->data[(*s_2).pos]))), buffer, ((NI) (bufLen)));
	(*s_2).pos += bufLen;
	}BeforeRet_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*, newStringStream_aIf1Q9cTTlEW5dnj9ciC0odg)(NimStringDesc* s) {
	tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw* result;
	NimStringDesc* T1_;
	result = (tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*)0;
	result = (tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*) newObj((&NTI_Z9cj1NxLXx79cYy9c4gbj6CAA_), sizeof(tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw));
	(*result).Sup.Sup.m_type = (&NTI_Olau5FPRehZBBEB77FHnfw_);
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).data; (*result).data = copyStringRC1(s);
	if (T1_) nimGCunrefNoCycle(T1_);
	(*result).pos = ((NI) 0);
	(*result).Sup.closeImpl = ssClose_QCxhJhdbGUiB08yc0fBeLg;
	(*result).Sup.atEndImpl = ssAtEnd_Aq3rxetdTkDpVSXU7JqLPQ;
	(*result).Sup.setPositionImpl = ssSetPosition_KgEn9bmq40bvWqBEE7YUgvQ;
	(*result).Sup.getPositionImpl = ssGetPosition_Om0Yjh3VW2JrNe1mVaOhXA;
	(*result).Sup.readDataImpl = ssReadData_VwkmV0rE82KHQOm1pQyMKg;
	(*result).Sup.peekDataImpl = ssPeekData_VwkmV0rE82KHQOm1pQyMKg_2;
	(*result).Sup.writeDataImpl = ssWriteData_OOEfFmc9bLLbcXoH1cApdvA;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll_KN3I0OGVr9bF9acs3y6DWpiA_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NimStringDesc* result;
	tyArray_9bKy7UA2LOi2vzOViufaW1Q buffer;
	result = (NimStringDesc*)0;
	{
		while (1) {
			NI readBytes;
			NI prevLen;
			readBytes = readData_TYaWywfT8qLRVVdONIVhkw(s, ((void*) ((&buffer[(((NI) 0))- 0]))), ((NI) 1024));
			{
				if (!(readBytes == ((NI) 0))) goto LA5_;
				goto LA1;
			}
			LA5_: ;
			prevLen = (result ? result->Sup.len : 0);
			result = setLengthStr(result, ((NI) ((NI)(prevLen + readBytes))));
			copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&result->data[prevLen]))), ((void*) ((&buffer[(((NI) 0))- 0]))), ((NI) (readBytes)));
			{
				if (!(readBytes < ((NI) 1024))) goto LA9_;
				goto LA1;
			}
			LA9_: ;
		}
	} LA1: ;
	return result;
}
static N_NIMCALL(void, Marker_tyRef_y4kGpp4Cn6oTOCWBJMIxAg)(void* p, NI op) {
	tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ* a;
	a = (tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*)p;
}

N_LIB_PRIVATE N_NIMCALL(void, fsClose_QCxhJhdbGUiB08yc0fBeLg_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	{
		if (!!(((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f == NIM_NIL))) goto LA3_;
		close_BWnr8V7RERYno9bIdPmw8Hw_3((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
		(*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f = NIM_NIL;
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, fsAtEnd_Aq3rxetdTkDpVSXU7JqLPQ_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	result = endOfFile_OpxMRqWNQzmofyVQsNQqVA((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, fsSetPosition_KgEn9bmq40bvWqBEE7YUgvQ_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, NI pos) {
	setFilePos_YAngY19cHH2nZ9bqhMgAHz8Q((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, ((NI64) (pos)), ((tyEnum_FileSeekPos_I9aQjuvWxs8BspGbxwsngWw) 0));
}

N_LIB_PRIVATE N_NIMCALL(NI, fsGetPosition_Om0Yjh3VW2JrNe1mVaOhXA_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	NI result;
	NI64 T1_;
{	result = (NI)0;
	T1_ = (NI64)0;
	T1_ = getFilePos_XePgC9ccBXCgb9bEHXZpnMqA((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
	result = ((NI) (T1_));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, fsReadData_VwkmV0rE82KHQOm1pQyMKg_3)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI result;
	result = (NI)0;
	result = readBuffer_1qjbrvfnPD4PaIieHVDvhw_2((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, buffer, ((NI) (bufLen)));
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

N_LIB_PRIVATE N_NIMCALL(NI, fsPeekData_VwkmV0rE82KHQOm1pQyMKg_4)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	NI volatile result;
	NI pos;
	TSafePoint TM_Ue7tnBcsL67VCiRfvt8q0A_5;
	result = (NI)0;
	pos = fsGetPosition_Om0Yjh3VW2JrNe1mVaOhXA_2(s);
	pushSafePoint(&TM_Ue7tnBcsL67VCiRfvt8q0A_5);
	TM_Ue7tnBcsL67VCiRfvt8q0A_5.status = setjmp(TM_Ue7tnBcsL67VCiRfvt8q0A_5.context);
	if (TM_Ue7tnBcsL67VCiRfvt8q0A_5.status == 0) {
		result = readBuffer_1qjbrvfnPD4PaIieHVDvhw_2((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, buffer, ((NI) (bufLen)));
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		fsSetPosition_KgEn9bmq40bvWqBEE7YUgvQ_2(s, pos);
	}
	if (TM_Ue7tnBcsL67VCiRfvt8q0A_5.status != 0) reraiseException();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, fsWriteData_OOEfFmc9bLLbcXoH1cApdvA_2)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen) {
	{
		NI T3_;
		tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw* T6_;
		T3_ = (NI)0;
		T3_ = writeBuffer_1qjbrvfnPD4PaIieHVDvhw((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f, buffer, ((NI) (bufLen)));
		if (!!((T3_ == bufLen))) goto LA4_;
		T6_ = (tyObject_IOError_iLZrPn9anoh9ad1MmO0RczFw*)0;
		T6_ = newEIO_Xv2OzzdmoQWk9cjlC9c9b9ciYw(((NimStringDesc*) &TM_Ue7tnBcsL67VCiRfvt8q0A_6));
		raiseException((Exception*)T6_, "IOError");
	}
	LA4_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, fsFlush_QCxhJhdbGUiB08yc0fBeLg_3)(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ* s) {
	flushFile_BWnr8V7RERYno9bIdPmw8Hw_2((*((tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) (s))).f);
}

N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream_rT0vr5guf49c4PWwagLpAgQ)(FILE* f) {
	tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ* result;
	result = (tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*)0;
	result = (tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*) newObj((&NTI_y4kGpp4Cn6oTOCWBJMIxAg_), sizeof(tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ));
	(*result).Sup.Sup.m_type = (&NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_);
	(*result).f = f;
	(*result).Sup.closeImpl = fsClose_QCxhJhdbGUiB08yc0fBeLg_2;
	(*result).Sup.atEndImpl = fsAtEnd_Aq3rxetdTkDpVSXU7JqLPQ_2;
	(*result).Sup.setPositionImpl = fsSetPosition_KgEn9bmq40bvWqBEE7YUgvQ_2;
	(*result).Sup.getPositionImpl = fsGetPosition_Om0Yjh3VW2JrNe1mVaOhXA_2;
	(*result).Sup.readDataImpl = fsReadData_VwkmV0rE82KHQOm1pQyMKg_3;
	(*result).Sup.peekDataImpl = fsPeekData_VwkmV0rE82KHQOm1pQyMKg_4;
	(*result).Sup.writeDataImpl = fsWriteData_OOEfFmc9bLLbcXoH1cApdvA_2;
	(*result).Sup.flushImpl = fsFlush_QCxhJhdbGUiB08yc0fBeLg_3;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream_X7Yto1yRxc3r4DfqEKWuBQ)(NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize) {
	tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ* result;
	FILE* f;
	result = (tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open_sEp0GH2306oGo9bqBpj5oTQ(&f, filename, mode, bufSize);
		if (!T3_) goto LA4_;
		result = newFileStream_rT0vr5guf49c4PWwagLpAgQ(f);
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_streamsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_streamsDatInit000)(void) {
static TNimNode* TM_Ue7tnBcsL67VCiRfvt8q0A_2[8];
static TNimNode* TM_Ue7tnBcsL67VCiRfvt8q0A_4[2];
static TNimNode TM_Ue7tnBcsL67VCiRfvt8q0A_0[13];
NTI_THYguAi9bSgidczZ3ywEIMQ_.size = sizeof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ);
NTI_THYguAi9bSgidczZ3ywEIMQ_.kind = 17;
NTI_THYguAi9bSgidczZ3ywEIMQ_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
NTI_THYguAi9bSgidczZ3ywEIMQ_.flags = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_2[0] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[1];
NTI_JQrsH08b4uPTH9cyFPlVOZg_.size = sizeof(tyProc_JQrsH08b4uPTH9cyFPlVOZg);
NTI_JQrsH08b4uPTH9cyFPlVOZg_.kind = 25;
NTI_JQrsH08b4uPTH9cyFPlVOZg_.base = 0;
NTI_JQrsH08b4uPTH9cyFPlVOZg_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, closeImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].typ = (&NTI_JQrsH08b4uPTH9cyFPlVOZg_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[1].name = "closeImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[1] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[2];
NTI_9bmhFrLahRsL2hltfRDVtlQ_.size = sizeof(tyProc_9bmhFrLahRsL2hltfRDVtlQ);
NTI_9bmhFrLahRsL2hltfRDVtlQ_.kind = 25;
NTI_9bmhFrLahRsL2hltfRDVtlQ_.base = 0;
NTI_9bmhFrLahRsL2hltfRDVtlQ_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, atEndImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].typ = (&NTI_9bmhFrLahRsL2hltfRDVtlQ_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[2].name = "atEndImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[2] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[3];
NTI_3svSoGIUJIsHkaBL7q4DAQ_.size = sizeof(tyProc_3svSoGIUJIsHkaBL7q4DAQ);
NTI_3svSoGIUJIsHkaBL7q4DAQ_.kind = 25;
NTI_3svSoGIUJIsHkaBL7q4DAQ_.base = 0;
NTI_3svSoGIUJIsHkaBL7q4DAQ_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, setPositionImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].typ = (&NTI_3svSoGIUJIsHkaBL7q4DAQ_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[3].name = "setPositionImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[3] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[4];
NTI_xflqkf2D1uVClg70czEDHA_.size = sizeof(tyProc_xflqkf2D1uVClg70czEDHA);
NTI_xflqkf2D1uVClg70czEDHA_.kind = 25;
NTI_xflqkf2D1uVClg70czEDHA_.base = 0;
NTI_xflqkf2D1uVClg70czEDHA_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, getPositionImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].typ = (&NTI_xflqkf2D1uVClg70czEDHA_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[4].name = "getPositionImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[4] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[5];
NTI_2VVzVL9bOnKhj1eZKkf9cEuA_.size = sizeof(tyProc_2VVzVL9bOnKhj1eZKkf9cEuA);
NTI_2VVzVL9bOnKhj1eZKkf9cEuA_.kind = 25;
NTI_2VVzVL9bOnKhj1eZKkf9cEuA_.base = 0;
NTI_2VVzVL9bOnKhj1eZKkf9cEuA_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, readDataImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].typ = (&NTI_2VVzVL9bOnKhj1eZKkf9cEuA_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[5].name = "readDataImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[5] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[6];
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, peekDataImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].typ = (&NTI_2VVzVL9bOnKhj1eZKkf9cEuA_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[6].name = "peekDataImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[6] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[7];
NTI_ki6p1QyfOkJLQJ9aw5NI0AQ_.size = sizeof(tyProc_ki6p1QyfOkJLQJ9aw5NI0AQ);
NTI_ki6p1QyfOkJLQJ9aw5NI0AQ_.kind = 25;
NTI_ki6p1QyfOkJLQJ9aw5NI0AQ_.base = 0;
NTI_ki6p1QyfOkJLQJ9aw5NI0AQ_.flags = 3;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, writeDataImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].typ = (&NTI_ki6p1QyfOkJLQJ9aw5NI0AQ_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[7].name = "writeDataImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_2[7] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[8];
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].offset = offsetof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ, flushImpl);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].typ = (&NTI_JQrsH08b4uPTH9cyFPlVOZg_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[8].name = "flushImpl";
TM_Ue7tnBcsL67VCiRfvt8q0A_0[0].len = 8; TM_Ue7tnBcsL67VCiRfvt8q0A_0[0].kind = 2; TM_Ue7tnBcsL67VCiRfvt8q0A_0[0].sons = &TM_Ue7tnBcsL67VCiRfvt8q0A_2[0];
NTI_THYguAi9bSgidczZ3ywEIMQ_.node = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[0];
NTI_1G0jiQbe7KwD5ADza5AZaw_.size = sizeof(tyObject_StreamObj_THYguAi9bSgidczZ3ywEIMQ*);
NTI_1G0jiQbe7KwD5ADza5AZaw_.kind = 22;
NTI_1G0jiQbe7KwD5ADza5AZaw_.base = (&NTI_THYguAi9bSgidczZ3ywEIMQ_);
NTI_1G0jiQbe7KwD5ADza5AZaw_.marker = Marker_tyRef_1G0jiQbe7KwD5ADza5AZaw;
NTI_Olau5FPRehZBBEB77FHnfw_.size = sizeof(tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw);
NTI_Olau5FPRehZBBEB77FHnfw_.kind = 17;
NTI_Olau5FPRehZBBEB77FHnfw_.base = (&NTI_THYguAi9bSgidczZ3ywEIMQ_);
TM_Ue7tnBcsL67VCiRfvt8q0A_4[0] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[10];
TM_Ue7tnBcsL67VCiRfvt8q0A_0[10].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[10].offset = offsetof(tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw, data);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[10].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[10].name = "data";
TM_Ue7tnBcsL67VCiRfvt8q0A_4[1] = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[11];
TM_Ue7tnBcsL67VCiRfvt8q0A_0[11].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[11].offset = offsetof(tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw, pos);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[11].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[11].name = "pos";
TM_Ue7tnBcsL67VCiRfvt8q0A_0[9].len = 2; TM_Ue7tnBcsL67VCiRfvt8q0A_0[9].kind = 2; TM_Ue7tnBcsL67VCiRfvt8q0A_0[9].sons = &TM_Ue7tnBcsL67VCiRfvt8q0A_4[0];
NTI_Olau5FPRehZBBEB77FHnfw_.node = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[9];
NTI_Z9cj1NxLXx79cYy9c4gbj6CAA_.size = sizeof(tyObject_StringStreamObj_Olau5FPRehZBBEB77FHnfw*);
NTI_Z9cj1NxLXx79cYy9c4gbj6CAA_.kind = 22;
NTI_Z9cj1NxLXx79cYy9c4gbj6CAA_.base = (&NTI_Olau5FPRehZBBEB77FHnfw_);
NTI_Z9cj1NxLXx79cYy9c4gbj6CAA_.marker = Marker_tyRef_Z9cj1NxLXx79cYy9c4gbj6CAA;
NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_.size = sizeof(tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ);
NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_.kind = 17;
NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_.base = (&NTI_THYguAi9bSgidczZ3ywEIMQ_);
NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_.flags = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[12].kind = 1;
TM_Ue7tnBcsL67VCiRfvt8q0A_0[12].offset = offsetof(tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ, f);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[12].typ = (&NTI_7BHnQsEj49a9c6QtudqWTo1w_);
TM_Ue7tnBcsL67VCiRfvt8q0A_0[12].name = "f";
NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_.node = &TM_Ue7tnBcsL67VCiRfvt8q0A_0[12];
NTI_y4kGpp4Cn6oTOCWBJMIxAg_.size = sizeof(tyObject_FileStreamObj_9bEVSsOIpkY9cf5lCtaS39bPQ*);
NTI_y4kGpp4Cn6oTOCWBJMIxAg_.kind = 22;
NTI_y4kGpp4Cn6oTOCWBJMIxAg_.base = (&NTI_9bEVSsOIpkY9cf5lCtaS39bPQ_);
NTI_y4kGpp4Cn6oTOCWBJMIxAg_.marker = Marker_tyRef_y4kGpp4Cn6oTOCWBJMIxAg;
}

