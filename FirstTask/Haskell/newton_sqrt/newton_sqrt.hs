iteration x y = if (x*x-y) < 0.0001 then x else iteration (0.5 * (x + y/x)) y

main = do
    putStrLn "What number do you want to calculate the square root from?"
    input <- getLine
    let number = read input :: Double
    let number1 = iteration number number
    putStrLn ("Your square root is (approximatly): ")
    print number1