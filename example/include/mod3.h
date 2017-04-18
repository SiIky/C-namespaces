#ifndef _MOD3_H
#define _MOD3_H

#if defined(_MOD3_H_IMPL_) || defined(_MOD3_H_NAMESPACE_)

struct _mod3_h_namespace_ {
    int (* const mult2) (int x);
    int (* const mult3) (int x);
};

#endif /* defined(_MOD3_H_IMPL_) || defined(_MOD3_H_NAMESPACE_) */

#ifdef _MOD3_H_NAMESPACE_

struct _mod3_h_namespace_ * _mod3_h_namespace_ (void);

#else /* _MOD3_H_NAMESPACE_ */

int mod3_mult2 (int x);
int mod3_mult3 (int x);

#endif /* _MOD3_H_NAMESPACE_ */

#endif /* _MOD3_H */
