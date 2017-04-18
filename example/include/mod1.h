#ifndef _MOD1_H
#define _MOD1_H

#if defined(_MOD1_H_IMPL_) || defined(_MOD1_H_NAMESPACE_)

struct _mod1_h_namespace_ {
    int (* const mult2) (int x);
    int (* const mult3) (int x);
};

#endif /* defined(_MOD1_H_IMPL_) || defined(_MOD1_H_NAMESPACE_) */

#ifdef _MOD1_H_NAMESPACE_

struct _mod1_h_namespace_ * _mod1_h_namespace_ (void);

#else /* _MOD1_H_NAMESPACE_ */

int mod1_mult2 (int x);
int mod1_mult3 (int x);

#endif /* _MOD1_H_NAMESPACE_ */

#endif /* _MOD1_H */
