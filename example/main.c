#include <stdio.h>

/*
 * export a function that returns a pointer to a struct
 * containing the public functions pointers
 */
#define _MOD1_H_NAMESPACE_
#include "mod1.h"

/*
 * export a function that returns a pointer to a struct
 * containing the public functions pointers
 */
#define _MOD2_H_NAMESPACE_
#include "mod2.h"

/*
 * classic function export:
 * mod3_mult2
 * mod3_mult3
 */
#include "mod3.h"

struct _custom_func_struct_ {
    int (* const mult2) (int x);
    int (* const mult3) (int x);
};

struct _custom_func_struct_ _mod3 = {
    .mult2 = mod3_mult3,
    .mult3 = mod3_mult2,
};
struct _custom_func_struct_ * mod3 = &_mod3;

int mult2 (int x)
{
    struct _mod2_h_namespace_ * mod2 = _mod2_h_namespace_();
    return mod2->mult2(x);
}

int mult3 (int x)
{
    return mod3->mult3(x);
}

int main (void)
{
    struct _mod1_h_namespace_ * mod1 = _mod1_h_namespace_();
    struct _mod2_h_namespace_ * mod2 = _mod2_h_namespace_();

#define MOD(N)  mod ## N
#define MOD_PRINT(N) printf( \
                             "Using mod%d:\n"        \
                             "mult2(2) = %d\n"       \
                             "mult3(2) = %d\n\n",    \
                             (N),                    \
                             MOD(N)->mult2(2),       \
                             MOD(N)->mult3(2)        \
                           )
    MOD_PRINT(1);
    MOD_PRINT(2);
#undef MOD_PRINT
#undef MOD

    const void * mod[3] = {
        mod1,
        mod2,
        mod3,
    };

#define MOD(V)  ((const struct _mod1_h_namespace_ *) (V))
    for (size_t i = 0; i < 3; i++)
        printf("Using mod%lu from array:\nmult2(2) = %d\nmult3(3) = %d\n\n",
               (i + 1),
               MOD(mod[i])->mult2(2),
               MOD(mod[i])->mult3(3)
              );
#undef MOD

    printf("Using mult2 and mult3 from main:\nmult2(2) = %d\nmult3(3) = %d\n",
           mult2(2),
           mult3(3)
          );

    return 0;
}
