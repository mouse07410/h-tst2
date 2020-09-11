#include <stdio.h>

#include <HsFFI.h>
#ifdef __GLASGOW_HASKELL__
#include "Fib_stub.h"
#endif

int main(int argc, char *argv[])
{
    int i;
    hs_init(&argc, &argv);

    i = fib_hs(42);
    printf("Fibonacci: %d\n", i);

    hs_exit();
    return 0;
}
