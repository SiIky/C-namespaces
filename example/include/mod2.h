#ifndef _MOD2_H
#define _MOD2_H

#if defined(_MOD2_H_IMPL_) || defined(_MOD2_H_NAMESPACE_)

struct _mod2_h_namespace_ {
    int (* const mult2) (int x);
    int (* const mult3) (int x);
};

#endif /* defined(_MOD2_H_IMPL_) || defined(_MOD2_H_NAMESPACE_) */

#ifdef _MOD2_H_NAMESPACE_

struct _mod2_h_namespace_ * _mod2_h_namespace_ (void);

#else /* _MOD2_H_NAMESPACE_ */

int mod2_mult2 (int x);
int mod2_mult3 (int x);

#endif /* _MOD2_H_NAMESPACE_ */

#endif /* _MOD2_H */
