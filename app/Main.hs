module Main where

import Fib (fib)

main :: IO ()
main = do
  putStrLn "Hello, Haskell!"
  putStr "Fibonacci of 32 = "
  print $ fib 32
