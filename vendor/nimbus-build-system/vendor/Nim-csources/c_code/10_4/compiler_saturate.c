/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
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
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

N_LIB_PRIVATE N_NIMCALL(NI64, barplusbar__ob65GDP1gLUz8UD9bFXYfng)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = (a < IL64(0));
		if (T9_) goto LA10_;
		T9_ = (b < IL64(0));
		LA10_: ;
		if (!T9_) goto LA11_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA11_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, barstarbar__ob65GDP1gLUz8UD9bFXYfng_2)(NI64 a, NI64 b) {
	NI64 result;
	NF resAsFloat;
	NF floatProd;
{	result = (NI64)0;
	resAsFloat = (NF)0;
	floatProd = (NF)0;
	result = (NI64)((NU64)(a) * (NU64)(b));
	floatProd = ((double) (a));
	floatProd = ((NF)(floatProd) * (NF)(((double) (b))));
	resAsFloat = ((double) (result));
	{
		if (!(resAsFloat == floatProd)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!(((NF)(3.2000000000000000e+01) * (NF)((((NF)(resAsFloat) - (NF)(floatProd)) < 0? -(((NF)(resAsFloat) - (NF)(floatProd))) : (((NF)(resAsFloat) - (NF)(floatProd)))))) <= (floatProd < 0? -(floatProd) : (floatProd)))) goto LA7_;
		goto BeforeRet_;
	}
	LA7_: ;
	{
		if (!(0.0 <= floatProd)) goto LA11_;
		result = IL64(9223372036854775807);
	}
	goto LA9_;
	LA11_: ;
	{
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	LA9_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, barminusbar__ob65GDP1gLUz8UD9bFXYfng_3)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		if (!(IL64(0) < b)) goto LA9_;
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
	LA9_: ;
	{
		result = IL64(9223372036854775807);
	}
	LA7_: ;
	}BeforeRet_: ;
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
