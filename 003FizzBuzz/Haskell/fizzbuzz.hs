
import Data.Maybe

fizzbuzz :: Int -> IO ()
fizzbuzz 101 = putStrLn ""
fizzbuzz num = do   if num`mod`15 == 0 then putStrLn "FizzBuzz"
                    else if num`mod`3 == 0 then putStrLn "Fizz"
                    else if num`mod`5 == 0 then putStrLn "Buzz"
                    else print num
                    fizzbuzz (num+1)
                    
main = fizzbuzz 1

