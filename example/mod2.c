#define _MOD2_H_IMPL_
#include "mod2.h"

int mod2_mult2 (int x)
{
    return x << 1;
}

int mod2_mult3 (int x)
{
    return x * 3;
}

struct _mod2_h_namespace_ * _mod2_h_namespace_ (void)
{
    static struct _mod2_h_namespace_ ret = {
        .mult2 = mod2_mult2,
        .mult3 = mod2_mult3,
    };
    return &ret;
}
