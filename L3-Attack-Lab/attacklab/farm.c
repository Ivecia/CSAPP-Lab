/* This function marks the start of the farm */
int start_farm()
{
    return 1;
}

unsigned getval_142()
{
    // No gadgets.
    return 2425387259U;
}

unsigned addval_273(unsigned x)
{
    // 4019a2: mov %rax,%rdi
    // 4019a3: mov %eax,%edi
    return x + 3284633928U;
}

unsigned addval_219(unsigned x)
{
    // 4019ab: popq %rax
    return x + 2421715793U;
}

void setval_237(unsigned *p)
{
    // No gadgets.
    *p = 3351742792U;
}

void setval_424(unsigned *p)
{
    // No gadgets.
    *p = 2455290452U;
}

void setval_470(unsigned *p)
{
    // No gadgets.
    *p = 3347925091U;
}

void setval_426(unsigned *p)
{
    // 4019c5: mov %rax,%rdi
    // 4019c6: mov %eax,%edi
    *p = 2428995912U;
}

unsigned getval_280()
{
    // 4019cc: popq %rax
    return 3281016873U;
}

/* This function marks the middle of the farm */
int mid_farm()
{
    return 1;
}

/* Add two arguments */
long add_xy(long x, long y)
{
    // 4019d6: lea (%rdi,%rsi,1),%rax (original instruction)
    return x+y;
}

unsigned getval_481()
{
    // 4019dd: mov %eax,%edx
    return 2428668252U;
}

void setval_296(unsigned *p)
{
    // No gadgets.
    *p = 2425409945U;
}

unsigned addval_113(unsigned x)
{
    // No gadgets.
    return x + 3380137609U;
}

unsigned addval_490(unsigned x)
{
    // No gadgets.
    return x + 3676361101U;
}

unsigned getval_226()
{
    // No gadgets.
    return 3225997705U;
}

void setval_384(unsigned *p)
{
    // No gadgets.
    *p = 3229929857U;
}

unsigned addval_190(unsigned x)
{
    // 401a06: mov %rsp,%rax
    // 401a07: mov %esp,%eax
    return x + 3767093313U;
}

void setval_276(unsigned *p)
{
    // No gadgets.
    *p = 3372794504U;
}

unsigned addval_436(unsigned x)
{
    // 401a13: mov %ecx,%esi
    return x + 2425409161U;
}

unsigned getval_345()
{
    // No gadgets.
    return 3252717896U;
}

unsigned addval_479(unsigned x)
{
    // No gadgets.
    return x + 3372270217U;
}

unsigned addval_187(unsigned x)
{
    // 401a27: mov %ecx,%esi
    return x + 3224948361U;
}

void setval_248(unsigned *p)
{
    // No gadgets.
    *p = 3674787457U;
}

unsigned getval_159()
{
    // 401a34: mov %edx,%ecx
    return 3375944073U;
}

unsigned addval_110(unsigned x)
{
    // 401a3c: mov %esp,%eax
    return x + 3286272456U;
}

unsigned addval_487(unsigned x)
{
    // 401a42: mov %eax,%edx
    return x + 3229926025U;
}

unsigned addval_201(unsigned x)
{
    // No gadgets.
    return x + 3353381192U;
}

unsigned getval_272()
{
    // No gadgets.
    return 3523793305U;
}

unsigned getval_155()
{
    // No gadgets.
    return 3385115273U;
}

void setval_299(unsigned *p)
{
    // No gadgets.
    *p = 2447411528U;
}

unsigned addval_404(unsigned x)
{
    // No gadgets.
    return x + 3281178249U;
}

unsigned getval_311()
{
    // 401a69: mov %edx,%ecx
    return 3674788233U;
}

void setval_167(unsigned *p)
{
    // No gadgets.
    *p = 3281113481U;
}

void setval_328(unsigned *p)
{
    // No gadgets.
    *p = 3526935169U;
}

void setval_450(unsigned *p)
{
    // No gadgets.
    *p = 3372797449U;
}

unsigned addval_358(unsigned x)
{
    // 401a86: mov %esp,%eax
    return x + 2430634248U;
}

unsigned addval_124(unsigned x)
{
    // No gadgets.
    return x + 1019724425U;
}

unsigned getval_169()
{
    // No gadgets.
    return 3223375496U;
}

void setval_181(unsigned *p)
{
    // No gadgets.
    *p = 3269495112U;
}

unsigned addval_184(unsigned x)
{
    // No gadgets.
    return x + 3529556617U;
}

unsigned getval_472()
{
    // No gadgets.
    return 3525365389U;
}

void setval_350(unsigned *p)
{
    // 401aad: mov %rsp,%rax
    // 401aae: mov %esp,%eax
    *p = 2430634312U;
}

/* This function marks the end of the farm */
int end_farm()
{
    return 1;
}
