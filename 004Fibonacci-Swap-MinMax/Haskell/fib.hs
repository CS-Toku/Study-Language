

main = print $ fibo fib 20 

fibo :: (Int -> Int) -> Int -> [Int]
fibo func n = [func x| x <- [0..n]]

fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)


