/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct tySequence_MvZmat48bhe9b6x9aUD58D5Q tySequence_MvZmat48bhe9b6x9aUD58D5Q;
typedef struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw tyObject_Target_9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence_tNFrR3kRuS1FSwuiLGoSSA tySequence_tNFrR3kRuS1FSwuiLGoSSA;
typedef struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence_7lEisrXlQEzwtUKW5pzRCw tySequence_7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ tySequence_Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence_4eRCaZmrYLLw2k30GPTiMw tySequence_4eRCaZmrYLLw2k30GPTiMw;
typedef struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw tySequence_pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple_zwpS6d6iewrdlBSTNFoyVA tyTuple_zwpS6d6iewrdlBSTNFoyVA;
typedef struct tyTuple_z822nu9bFF1AlQnLrHjdwpA tyTuple_z822nu9bFF1AlQnLrHjdwpA;
typedef struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw tyTuple_xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw;
typedef struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw tyTuple_QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg;
typedef NU8 tyEnum_StyleCheck_132xwWC8AgNAoAB0QeMtyA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
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
struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NU8 tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
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
NI uniqueId;
};
typedef NU8 tySet_tyChar_nmiMWKVIe46vacnhAFrQvw[32];
typedef NimStringDesc* tyArray_etu752fp48vGyYS0blUZTQ[39];
typedef NU8 tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ;
struct tyObject_Target_9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU_XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS_s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
typedef NU64 tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA {
tySequence_7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput_fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence_tNFrR3kRuS1FSwuiLGoSSA* msgContext;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table_Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence_Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw;
typedef NU8 tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg {
tySequence_4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU16 tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA;
typedef NU64 tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType__bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc_QYEVXrYc9beQ379crS3rzqRA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA;
typedef NU8 tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity_x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc_22mgIiTBBoqNe1T0FSw9ahQ;
struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw {
tyObject_Target_9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_MsgConfig_kV7r8HWT0SqOYW2k2ukC6A m;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_TCommands_VH3ghgQVwLSg3krOAoXigw cmd;
tyEnum_TGCMode_tkz389aDYNd8ykeZszCuBSw selectedGC;
NI verbosity;
NI numberOfProcessors;
NimStringDesc* evalExpr;
NF lastCmdTime;
tyEnum_SymbolFilesOption_gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
tyObject_HashSet_CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature_01UoAKYz1MxZiuG1X2VhNQ features;
NimStringDesc* arguments;
NIM_BOOL helpWritten;
tyEnum_IdeCmd_1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC_1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg enableNotes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg disableNotes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg foreignPackageNotes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg notes;
tySet_tyEnum_TMsgKind_vuCAakv8v9aIe9a44eiR1GOg mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
NI32 projectMainIdx;
NimStringDesc* command;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NIM_BOOL keepComments;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* ccompilerpath;
tySequence_pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc_QYEVXrYc9beQ379crS3rzqRA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc_Q1W5D85O9cNu3iq9cZ9alS9aWA writelnHook;
tyProc_22mgIiTBBoqNe1T0FSw9ahQ structuredErrorHook;
NimStringDesc* cppCustomNamespace;
};
typedef NU8 tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tyEnum_TMsgKind_29cbg2fC1z5iM1PAI28kR5w;
struct tyTuple_zwpS6d6iewrdlBSTNFoyVA {
NI Field0;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tyTuple_z822nu9bFF1AlQnLrHjdwpA {
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q Field0;
NimStringDesc* Field1;
};
struct tyTuple_xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyfile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
struct tyTuple_QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag_Vl9c9ayddDuXiWtnWTsEYGsA flags;
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
struct tySequence_MvZmat48bhe9b6x9aUD58D5Q {
  TGenericSeq Sup;
  tyTuple_zwpS6d6iewrdlBSTNFoyVA data[SEQ_DECL_SIZE];
};
struct tySequence_tNFrR3kRuS1FSwuiLGoSSA {
  TGenericSeq Sup;
  tyTuple_z822nu9bFF1AlQnLrHjdwpA data[SEQ_DECL_SIZE];
};
struct tySequence_7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple_xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence_Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo_GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence_4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple_QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile_i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, beautifyName_fOdwioWHjTwKHWAVS9bR9cng)(NimStringDesc* s, tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw k);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, allCharsInSet_wVfr4F6j4mVzI8ggLoMVdw)(NimStringDesc* s, tySet_tyChar_nmiMWKVIe46vacnhAFrQvw theSet);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqtilde__5yoNqXoYehBJvvfaWrX6Rg)(NimStringDesc* s, NimStringDesc** a, NI aLen_0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToUpperAsciiChar)(NIM_CHAR c);
static N_INLINE(NIM_BOOL, contains_I9cy9aN2znlBRynMcXN4pBGgcommands)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
static N_INLINE(NI, find_b3HPX1XboPhUmnxkTjazFQcommands)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(void, lintReport_zjCdbBdtlQl6bHyFhGQ2RA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* beau);
N_LIB_PRIVATE N_NIMCALL(void, localError_w3nlav3QVHhYSX6HNr5zYg)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(void, message_5K7hPSxmIuoAwPKVN0TTEA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, tyEnum_TMsgKind_29cbg2fC1z5iM1PAI28kR5w msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
NIM_BOOL gOverWrite_awlWeHLXqH2RGhCXOgkaJw;
tyEnum_StyleCheck_132xwWC8AgNAoAB0QeMtyA gStyleCheck_t9cO3xNdLER7laiyYSxLzVw;
NIM_BOOL gCheckExtern_4yZXvm0Xd1WH8tfScIkz5Q;
NIM_BOOL gOnlyMainfile_0CJCyyAB2coBZm3ypUzMfA;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
static NIM_CONST tySet_tyChar_nmiMWKVIe46vacnhAFrQvw TM_NvI37FoCN5uTD3k9bAqbGMA_2 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_4, "int", 3);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_5, "uint", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_6, "cint", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_7, "cuint", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_8, "clong", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_9, "cstring", 7);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_10, "string", 6);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_11, "char", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_12, "byte", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_13, "bool", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_14, "openArray", 9);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_15, "seq", 3);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_16, "array", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_17, "void", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_18, "pointer", 7);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_19, "float", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_20, "csize", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_21, "cdouble", 7);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_22, "cchar", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_23, "cschar", 6);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_24, "cshort", 6);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_25, "cu", 2);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_26, "nil", 3);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_27, "typedesc", 8);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_28, "auto", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_29, "any", 3);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_30, "range", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_31, "openarray", 9);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_32, "varargs", 7);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_33, "set", 3);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_34, "cfloat", 6);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_35, "ref", 3);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_36, "ptr", 3);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_37, "untyped", 7);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_38, "typed", 5);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_39, "static", 6);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_40, "sink", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_41, "lent", 4);
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_42, "type", 4);
NIM_CONST tyArray_etu752fp48vGyYS0blUZTQ TM_NvI37FoCN5uTD3k9bAqbGMA_3 = {((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_4),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_5),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_6),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_7),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_8),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_9),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_10),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_11),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_12),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_13),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_14),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_15),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_16),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_17),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_18),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_19),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_20),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_21),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_22),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_23),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_24),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_25),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_26),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_27),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_28),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_29),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_30),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_31),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_32),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_33),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_34),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_35),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_36),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_37),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_38),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_39),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_40),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_41),
((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_42)}
;
STRING_LITERAL(TM_NvI37FoCN5uTD3k9bAqbGMA_43, "name should be: \'$1\'", 20);

N_LIB_PRIVATE N_NIMCALL(NI, identLen_shED4elzF3U9bsbeBn9aTKAA)(NimStringDesc* line, NI start) {
	NI result;
	result = (NI)0;
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = ((NI)(start + result) < (line ? line->Sup.len : 0));
			if (!(T3_)) goto LA4_;
			T3_ = (((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI)(start + result)])) == ((NU8)(95)));
			LA4_: ;
			if (!T3_) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqtilde__5yoNqXoYehBJvvfaWrX6Rg)(NimStringDesc* s, NimStringDesc** a, NI aLen_0) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NimStringDesc* x;
		NI i;
		x = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < aLen_0)) goto LA3;
				x = a[i];
				{
					NIM_BOOL T6_;
					T6_ = (NIM_BOOL)0;
					T6_ = nsuStartsWith(s, x);
					if (!T6_) goto LA7_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA7_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, find_b3HPX1XboPhUmnxkTjazFQcommands)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NI result;
{	result = (NI)0;
	{
		NIM_CHAR i;
		NI i_2;
		i = (NIM_CHAR)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3;
				i = a[i_2];
				{
					if (!((NU8)(i) == (NU8)(item))) goto LA6_;
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

static N_INLINE(NIM_BOOL, contains_I9cy9aN2znlBRynMcXN4pBGgcommands)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find_b3HPX1XboPhUmnxkTjazFQcommands(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, beautifyName_fOdwioWHjTwKHWAVS9bR9cng)(NimStringDesc* s, tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw k) {
	NimStringDesc* result;
	NIM_BOOL allUpper;
	NI i;
{	result = (NimStringDesc*)0;
	allUpper = allCharsInSet_wVfr4F6j4mVzI8ggLoMVdw(s, TM_NvI37FoCN5uTD3k9bAqbGMA_2);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = allUpper;
		if (!(T3_)) goto LA4_;
		T3_ = ((1049728 &(1U<<((NU)(k)&31U)))!=0);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = copyString(s);
		goto BeforeRet_;
	}
	LA5_: ;
	result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
	i = ((NI) 0);
	switch (k) {
	case ((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 7):
	case ((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 4):
	{
		{
			NIM_BOOL T10_;
			T10_ = (NIM_BOOL)0;
			T10_ = eqtilde__5yoNqXoYehBJvvfaWrX6Rg(s, TM_NvI37FoCN5uTD3k9bAqbGMA_3, 39);
			if (!T10_) goto LA11_;
			result = addChar(result, s->data[i]);
		}
		goto LA8_;
		LA11_: ;
		{
			NIM_CHAR T14_;
			T14_ = (NIM_CHAR)0;
			T14_ = nsuToUpperAsciiChar(s->data[i]);
			result = addChar(result, T14_);
		}
		LA8_: ;
	}
	break;
	case ((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 10):
	case ((tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw) 20):
	{
		result = addChar(result, s->data[((NI) 0)]);
	}
	break;
	default:
	{
		{
			NIM_BOOL T19_;
			T19_ = (NIM_BOOL)0;
			T19_ = ((s ? s->Sup.len : 0) == ((NI) 1));
			if (!(T19_)) goto LA20_;
			T19_ = ((NU8)(s->data[((NI) 0)]) == (NU8)(76));
			LA20_: ;
			if (!T19_) goto LA21_;
			result = addChar(result, 76);
		}
		goto LA17_;
		LA21_: ;
		{
			NIM_BOOL T24_;
			T24_ = (NIM_BOOL)0;
			T24_ = contains_I9cy9aN2znlBRynMcXN4pBGgcommands(s->data, (s ? s->Sup.len : 0), 95);
			if (!T24_) goto LA25_;
			result = addChar(result, s->data[i]);
		}
		goto LA17_;
		LA25_: ;
		{
			NIM_CHAR T28_;
			T28_ = (NIM_CHAR)0;
			T28_ = nsuToLowerAsciiChar(s->data[((NI) 0)]);
			result = addChar(result, T28_);
		}
		LA17_: ;
	}
	break;
	}
	i += ((NI) 1);
	{
		while (1) {
			if (!(i < (s ? s->Sup.len : 0))) goto LA30;
			{
				if (!((NU8)(s->data[i]) == (NU8)(95))) goto LA33_;
				{
					NIM_BOOL T37_;
					T37_ = (NIM_BOOL)0;
					T37_ = (((NI) 0) < i);
					if (!(T37_)) goto LA38_;
					T37_ = (((NU8)(s->data[(NI)(i - ((NI) 1))])) >= ((NU8)(65)) && ((NU8)(s->data[(NI)(i - ((NI) 1))])) <= ((NU8)(90)));
					LA38_: ;
					if (!T37_) goto LA39_;
					result = addChar(result, 95);
					i += ((NI) 1);
					result = addChar(result, s->data[i]);
				}
				goto LA35_;
				LA39_: ;
				{
					NIM_CHAR T42_;
					i += ((NI) 1);
					T42_ = (NIM_CHAR)0;
					T42_ = nsuToUpperAsciiChar(s->data[i]);
					result = addChar(result, T42_);
				}
				LA35_: ;
			}
			goto LA31_;
			LA33_: ;
			{
				NIM_CHAR T46_;
				if (!allUpper) goto LA44_;
				T46_ = (NIM_CHAR)0;
				T46_ = nsuToLowerAsciiChar(s->data[i]);
				result = addChar(result, T46_);
			}
			goto LA31_;
			LA44_: ;
			{
				result = addChar(result, s->data[i]);
			}
			LA31_: ;
			i += ((NI) 1);
		} LA30: ;
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

static N_INLINE(NIM_BOOL, equalMem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a, void* b, NI size) {
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
		result = equalMem_DCrUjdaMvFDHaR1hs7sQGwropes(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, lintReport_zjCdbBdtlQl6bHyFhGQ2RA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* beau) {
	{
		NimStringDesc* T5_;
		if (!(((*conf).globalOptions &((NU64)1<<((NU)(((tyEnum_TGlobalOption_RAfAEZqjnKMDumgyKKc1qw) 14))&63U)))!=0)) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = nsuFormatSingleElem(((NimStringDesc*) &TM_NvI37FoCN5uTD3k9bAqbGMA_43), beau);
		localError_w3nlav3QVHhYSX6HNr5zYg(conf, info, T5_);
	}
	goto LA1_;
	LA3_: ;
	{
		message_5K7hPSxmIuoAwPKVN0TTEA(conf, info, ((tyEnum_TMsgKind_29cbg2fC1z5iM1PAI28kR5w) 58), beau);
	}
	LA1_: ;
}

N_LIB_PRIVATE N_NIMCALL(void, nep1CheckDefImpl_2xqZNpIgfcG7h9crI5n1kvQ)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s, tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw k) {
	NimStringDesc* beau;
{	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((2080 &(1U<<((NU)(k)&31U)))!=0);
		if (T3_) goto LA4_;
		T3_ = !((((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(97)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(122)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(65)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(90)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(57)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) >= ((NU8)(128)) && ((NU8)((*(*s).name).s->data[((NI) 0)])) <= ((NU8)(255)) || ((NU8)((*(*s).name).s->data[((NI) 0)])) == ((NU8)(95))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = ((144 &(1U<<((NU)(k)&31U)))!=0);
		if (!(T9_)) goto LA10_;
		T9_ = (((*s).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 30))&63U)))!=0);
		LA10_: ;
		if (!T9_) goto LA11_;
		goto BeforeRet_;
	}
	LA11_: ;
	{
		NIM_BOOL T15_;
		T15_ = (NIM_BOOL)0;
		T15_ = !(((*s).typ == NIM_NIL));
		if (!(T15_)) goto LA16_;
		T15_ = ((*(*s).typ).kind == ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 8));
		LA16_: ;
		if (!T15_) goto LA17_;
		goto BeforeRet_;
	}
	LA17_: ;
	{
		if (!!(((96 & (*s).flags) == 0))) goto LA21_;
		goto BeforeRet_;
	}
	LA21_: ;
	beau = beautifyName_fOdwioWHjTwKHWAVS9bR9cng((*(*s).name).s, k);
	{
		if (!!(eqStrings((*(*s).name).s, beau))) goto LA25_;
		lintReport_zjCdbBdtlQl6bHyFhGQ2RA(conf, info, beau);
	}
	LA25_: ;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, compiler_linterInit000)(void) {
{
	gOverWrite_awlWeHLXqH2RGhCXOgkaJw = NIM_TRUE;
}
}

