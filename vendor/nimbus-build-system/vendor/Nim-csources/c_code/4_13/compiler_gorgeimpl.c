/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#include <stdio.h>
#include <sys/types.h>
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
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct tyTuple_XOVT24GHXwqiEj5GCsEGCA tyTuple_XOVT24GHXwqiEj5GCsEGCA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw;
typedef struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
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
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tySequence_4eQHGndY6XBYpFOH09apV8Q tySequence_4eQHGndY6XBYpFOH09apV8Q;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyTuple_UV3llMMYFckfui8YMBuUZA tyTuple_UV3llMMYFckfui8YMBuUZA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw {
NI16 line;
NI16 col;
NI32 fileIndex;
};
struct tyTuple_XOVT24GHXwqiEj5GCsEGCA {
NimStringDesc* Field0;
NI Field1;
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
typedef NU8 tyArray_YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU8 tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ;
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef NU8 tySet_tyEnum_ProcessOption_bnU6W8LhTMnT4JaSWtGlSA;
typedef NimStringDesc* tyArray_8ZvwQIddfpj2THRVPsFzIQ[1];
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
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw {
  RootObj Sup;
int inHandle;
int outHandle;
int errHandle;
tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* inStream;
tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* outStream;
tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* errStream;
pid_t id;
int exitStatus;
NIM_BOOL exitFlag;
tySet_tyEnum_ProcessOption_bnU6W8LhTMnT4JaSWtGlSA options;
};
typedef NU8 tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw {
  RootObj Sup;
NI counter;
tySequence_4eQHGndY6XBYpFOH09apV8Q* data;
tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
typedef N_NIMCALL_PTR(void, tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_KjFcmLOhf4VQvVcyLJWXZw) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(void, tyProc_jlOYFw9cHausuCbPoWx2iiA) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_tjaJtoUzLe1BMUbItlcGhQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_b9bsIuILxTLVZHPvJBW187A) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ {
  RootObj Sup;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q closeImpl;
tyProc_KjFcmLOhf4VQvVcyLJWXZw atEndImpl;
tyProc_jlOYFw9cHausuCbPoWx2iiA setPositionImpl;
tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ getPositionImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ readDataImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ peekDataImpl;
tyProc_b9bsIuILxTLVZHPvJBW187A writeDataImpl;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q flushImpl;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyTuple_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
struct tySequence_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  tyTuple_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath_KZnzGw9baMUf9ad9aixRtHmqg)(NI32 fileIdx);
N_LIB_PRIVATE N_NIMCALL(void, secureHash_EXfqX32pW1lnNt34KrEaBg)(NimStringDesc* str, tyArray_YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toGeneratedFile_goM58sGu9cGRy9cRCs0Gd3Rw)(NimStringDesc* path, NimStringDesc* ext);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__9cgKBrLNcxzFztdSZGMv5ZA)(tyArray_YtcvxHNKV4YiecPE9ap1mcA self);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f, NimStringDesc* filename, tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll_y7iEIBoIrYlvsLCqA1SrwQ)(FILE* file);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_3)(FILE* f);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw*, nospstartProcess)(NimStringDesc* command, NimStringDesc* workingDir, NimStringDesc** args, NI argsLen_0, tyObject_StringTableObj_DKRIdH9c9cKI7YpQb9c0wKlEw* env, tySet_tyEnum_ProcessOption_bnU6W8LhTMnT4JaSWtGlSA options);
N_LIB_PRIVATE N_NIMCALL(void, write_J8LHFlpeBAP4mtGzmgjURA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*, nospinputStream)(tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw* p);
N_LIB_PRIVATE N_NIMCALL(void, close_4ed7IXme7lqtClFI7s2sTQ)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(void, readOutput_KxSL0m3K9aNEKoAIsWxMIdQ)(tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw* p, tyTuple_XOVT24GHXwqiEj5GCsEGCA* Result);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*, nospoutputStream)(tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, atEnd_K8dPRCnFaz50Kq9buF2PeYA)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine_y6Jvjm2hmT9aQbvX9aMpHkOQ)(tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NI, nospwaitForExit)(tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw* p, NI timeout);
N_LIB_PRIVATE N_NIMCALL(void, writeFile_c1B29b0ZdDRPHc27YaKqwaA)(NimStringDesc* filename, NimStringDesc* content);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, reraiseException)(void);
TNimType NTI_XOVT24GHXwqiEj5GCsEGCA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_9czoZw3pzPyrBmb5zTHY1OQ_;
extern Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
extern TNimType NTI_3XwRQvmzCEOC4QnT706q1g_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_3, "\011", 1);
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_4, "gorge_", 6);
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_5, "txt", 3);
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_7, "", 0);
STRING_LITERAL(TM_69a9b06YSkBJW7wqzuZfJ29aQ_8, "\012", 1);
NIM_CONST tyTuple_XOVT24GHXwqiEj5GCsEGCA TM_69a9b06YSkBJW7wqzuZfJ29aQ_9 = {((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_7),
((NI) -1)}
;

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

N_LIB_PRIVATE N_NIMCALL(void, readOutput_KxSL0m3K9aNEKoAIsWxMIdQ)(tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw* p, tyTuple_XOVT24GHXwqiEj5GCsEGCA* Result) {
	tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* output;
	genericReset((void*)Result, (&NTI_XOVT24GHXwqiEj5GCsEGCA_));
	unsureAsgnRef((void**) (&(*Result).Field0), copyString(((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_7)));
	output = nospoutputStream(p);
	{
		while (1) {
			NIM_BOOL T3_;
			NimStringDesc* T4_;
			T3_ = (NIM_BOOL)0;
			T3_ = atEnd_K8dPRCnFaz50Kq9buF2PeYA(output);
			if (!!(T3_)) goto LA2;
			T4_ = (NimStringDesc*)0;
			T4_ = readLine_y6Jvjm2hmT9aQbvX9aMpHkOQ(output);
			(*Result).Field0 = resizeString((*Result).Field0, T4_->Sup.len + 0);
appendString((*Result).Field0, T4_);
			(*Result).Field0 = resizeString((*Result).Field0, 1);
appendString((*Result).Field0, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_8));
		} LA2: ;
	}
	{
		if (!(((NI) 0) < ((*Result).Field0 ? (*Result).Field0->Sup.len : 0))) goto LA7_;
		(*Result).Field0 = setLengthStr((*Result).Field0, ((NI) ((NI)(((*Result).Field0 ? (*Result).Field0->Sup.len : 0) - ((NI) 1)))));
	}
	LA7_: ;
	(*Result).Field1 = nospwaitForExit(p, ((NI) -1));
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = (Exception*)0;
	result = currException_9bVPeDJlYTi9bQApZpfH8wjg;
	return result;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
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

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
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

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currException_9bVPeDJlYTi9bQApZpfH8wjg), (*currException_9bVPeDJlYTi9bQApZpfH8wjg).up);
}

N_LIB_PRIVATE N_NIMCALL(void, opGorge_JsFO19c9aG6fpHpG2OybxC7g)(NimStringDesc* cmd, NimStringDesc* input, NimStringDesc* cache, tyObject_TLineInfo_T9c3PM9bs7WZ4LIQfEici9cZw info, tyTuple_XOVT24GHXwqiEj5GCsEGCA* Result) {
	NimStringDesc* workingDir;
	NimStringDesc* T1_;
{	genericReset((void*)Result, (&NTI_XOVT24GHXwqiEj5GCsEGCA_));
	T1_ = (NimStringDesc*)0;
	T1_ = toFullPath_KZnzGw9baMUf9ad9aixRtHmqg(info.fileIndex);
	workingDir = nosparentDir(T1_);
	{
		tyArray_YtcvxHNKV4YiecPE9ap1mcA h;
		NimStringDesc* T6_;
		NimStringDesc* filename;
		NimStringDesc* T7_;
		NimStringDesc* T8_;
		FILE* f;
		NIM_BOOL volatile readSuccessful;
		TSafePoint TM_69a9b06YSkBJW7wqzuZfJ29aQ_6;
		if (!(((NI) 0) < (cache ? cache->Sup.len : 0))) goto LA4_;
		memset((void*)h, 0, sizeof(h));
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString(cmd->Sup.len + input->Sup.len + cache->Sup.len + 2);
appendString(T6_, cmd);
appendString(T6_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_3));
appendString(T6_, input);
appendString(T6_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_3));
appendString(T6_, cache);
		secureHash_EXfqX32pW1lnNt34KrEaBg(T6_, h);
		T7_ = (NimStringDesc*)0;
		T8_ = (NimStringDesc*)0;
		T8_ = dollar__9cgKBrLNcxzFztdSZGMv5ZA(h);
		T7_ = rawNewString(T8_->Sup.len + 6);
appendString(T7_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_4));
appendString(T7_, T8_);
		filename = toGeneratedFile_goM58sGu9cGRy9cRCs0Gd3Rw(T7_, ((NimStringDesc*) &TM_69a9b06YSkBJW7wqzuZfJ29aQ_5));
		f = (FILE*)0;
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = open_sEp0GH2306oGo9bqBpj5oTQ(&f, filename, ((tyEnum_FileMode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) -1));
			if (!T11_) goto LA12_;
			unsureAsgnRef((void**) (&(*Result).Field0), readAll_y7iEIBoIrYlvsLCqA1SrwQ(f));
			(*Result).Field1 = ((NI) 0);
			close_BWnr8V7RERYno9bIdPmw8Hw_3(f);
			goto BeforeRet_;
		}
		LA12_: ;
		readSuccessful = NIM_FALSE;
		pushSafePoint(&TM_69a9b06YSkBJW7wqzuZfJ29aQ_6);
		TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status = _setjmp(TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.context);
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status == 0) {
			tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw* p;
			tyArray_8ZvwQIddfpj2THRVPsFzIQ T15_;
			memset((void*)T15_, 0, sizeof(T15_));
			p = nospstartProcess(cmd, workingDir, T15_, 0, NIM_NIL, 12);
			{
				tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* T20_;
				tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* T21_;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA18_;
				T20_ = (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*)0;
				T20_ = nospinputStream(p);
				write_J8LHFlpeBAP4mtGzmgjURA(T20_, input);
				T21_ = (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*)0;
				T21_ = nospinputStream(p);
				close_4ed7IXme7lqtClFI7s2sTQ(T21_);
			}
			LA18_: ;
			readOutput_KxSL0m3K9aNEKoAIsWxMIdQ(p, Result);
			readSuccessful = NIM_TRUE;
			{
				if (!((*Result).Field1 == ((NI) 0))) goto LA24_;
				writeFile_c1B29b0ZdDRPHc27YaKqwaA(filename, (*Result).Field0);
			}
			LA24_: ;
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_))||isObj(getCurrentException()->Sup.m_type, (&NTI_3XwRQvmzCEOC4QnT706q1g_))) {
				TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status = 0;
				{
					if (!!(readSuccessful)) goto LA30_;
					unsureAsgnRef((void**) (&(*Result).Field0), copyString(TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.Field0));
					(*Result).Field1 = TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.Field1;
				}
				LA30_: ;
				popCurrentException();
			}
		}
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_6.status != 0) reraiseException();
	}
	goto LA2_;
	LA4_: ;
	{
		TSafePoint TM_69a9b06YSkBJW7wqzuZfJ29aQ_10;
		pushSafePoint(&TM_69a9b06YSkBJW7wqzuZfJ29aQ_10);
		TM_69a9b06YSkBJW7wqzuZfJ29aQ_10.status = _setjmp(TM_69a9b06YSkBJW7wqzuZfJ29aQ_10.context);
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_10.status == 0) {
			tyObject_ProcessObj_NHqciQYh8G1aN2n273mmYw* p_2;
			tyArray_8ZvwQIddfpj2THRVPsFzIQ T34_;
			memset((void*)T34_, 0, sizeof(T34_));
			p_2 = nospstartProcess(cmd, workingDir, T34_, 0, NIM_NIL, 12);
			{
				tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* T39_;
				tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* T40_;
				if (!!(((input ? input->Sup.len : 0) == ((NI) 0)))) goto LA37_;
				T39_ = (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*)0;
				T39_ = nospinputStream(p_2);
				write_J8LHFlpeBAP4mtGzmgjURA(T39_, input);
				T40_ = (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ*)0;
				T40_ = nospinputStream(p_2);
				close_4ed7IXme7lqtClFI7s2sTQ(T40_);
			}
			LA37_: ;
			readOutput_KxSL0m3K9aNEKoAIsWxMIdQ(p_2, Result);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI_9czoZw3pzPyrBmb5zTHY1OQ_))||isObj(getCurrentException()->Sup.m_type, (&NTI_3XwRQvmzCEOC4QnT706q1g_))) {
				TM_69a9b06YSkBJW7wqzuZfJ29aQ_10.status = 0;
				unsureAsgnRef((void**) (&(*Result).Field0), copyString(TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.Field0));
				(*Result).Field1 = TM_69a9b06YSkBJW7wqzuZfJ29aQ_9.Field1;
				popCurrentException();
			}
		}
		if (TM_69a9b06YSkBJW7wqzuZfJ29aQ_10.status != 0) reraiseException();
	}
	LA2_: ;
	}BeforeRet_: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_gorgeimplInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_gorgeimplDatInit000)(void) {
static TNimNode* TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[2];
static TNimNode TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[3];
NTI_XOVT24GHXwqiEj5GCsEGCA_.size = sizeof(tyTuple_XOVT24GHXwqiEj5GCsEGCA);
NTI_XOVT24GHXwqiEj5GCsEGCA_.kind = 18;
NTI_XOVT24GHXwqiEj5GCsEGCA_.base = 0;
NTI_XOVT24GHXwqiEj5GCsEGCA_.flags = 2;
TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[0] = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1];
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].kind = 1;
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].offset = offsetof(tyTuple_XOVT24GHXwqiEj5GCsEGCA, Field0);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[1].name = "Field0";
TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[1] = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2];
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].kind = 1;
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].offset = offsetof(tyTuple_XOVT24GHXwqiEj5GCsEGCA, Field1);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[2].name = "Field1";
TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0].len = 2; TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0].kind = 2; TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0].sons = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_2[0];
NTI_XOVT24GHXwqiEj5GCsEGCA_.node = &TM_69a9b06YSkBJW7wqzuZfJ29aQ_0[0];
}

