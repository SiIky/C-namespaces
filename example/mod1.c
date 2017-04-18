#define _MOD1_H_IMPL_
#include "mod1.h"

int mod1_mult2 (int x)
{
    return x << 1;
}

int mod1_mult3 (int x)
{
    return x * 3;
}

struct _mod1_h_namespace_ * _mod1_h_namespace_ (void)
{
    static struct _mod1_h_namespace_ ret = {
        .mult2 = mod1_mult2,
        .mult3 = mod1_mult3,
    };
    return &ret;
}
