# h-tst2

Demo aimed at automating builds of FFI for C code calling Haskell code, within one package/repository.
The code itself comes from https://wiki.haskell.org/Calling_Haskell_from_C


The main difference from that example, or the main contribution is use of Cabal to compile and link
everything automatically. While it may not make sense for this example, as it's more labor to write
the .cabal file than to trype two GHC invocations - larger projects would benefit from the ability
to build everything with one `cabal build` invocation.
