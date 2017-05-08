# C-namespaces

Backward compatible way to simulate namespaces in C.
Simply define a struct containing all the public functions
and variables, a function to create and return a pointer to
such struct.

Prefixed names won't be exported and the "namespace" can have
any name the user wants.

If namespace isnt included, no extra names will be included
and it works as usual.
If namespace is included, 2 names are exported, one for the
struct type and another for the function returning the
namespace.
