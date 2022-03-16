#include <stdio.h>
#include <stdlib.h>

#include <HsFFI.h>
#ifdef __GLASGOW_HASKELL__
#include "Fib_stub.h"
#endif

int main(int argc, char *argv[])
{
    int i;
    int input = 43;

    if (argc > 1)
      input = atoi(argv[1]);

    hs_init(&argc, &argv);

    i = fibHs(input);
    printf("Fibonacci(%d): %d\n", input, i);

    hs_exit();
    return 0;
}
