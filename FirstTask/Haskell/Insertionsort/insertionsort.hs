import System.Random
import Data.List

randomlist :: Int -> StdGen -> [Int]
randomlist n = take n . unfoldr (Just . random)

main = do
    seed  <- newStdGen
    let rs = randomlist 10 seed
    print rs

