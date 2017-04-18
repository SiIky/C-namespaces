/*
 * mod3.c includes mod2.h the typical way, and main.c
 * includes mod2.h as a module, but they dont interfere
 * with each other.
 */
#include "mod2.h"

#define _MOD3_H_IMPL_
#include "mod3.h"

int mod3_mult2 (int x)
{
    return mod2_mult2(x);
}

int mod3_mult3 (int x)
{
    return mod2_mult3(x);
}

struct _mod3_h_namespace_ * _mod3_h_namespace_ (void)
{
    static struct _mod3_h_namespace_ ret = {
        .mult2 = mod3_mult2,
        .mult3 = mod3_mult3,
    };
    return &ret;
}
