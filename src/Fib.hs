{-# LANGUAGE ForeignFunctionInterface #-}

module Fib (fib) where

import Foreign.C.Types

fib :: Int -> Int
fib n = fibs !! n
  where
    fibs = 0 : 1 : zipWith (+) fibs (tail fibs)

fibHs :: CInt -> CInt
fibHs = fromIntegral . fib . fromIntegral

foreign export ccall fibHs :: CInt -> CInt
