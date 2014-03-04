coins = [50, 25, 10, 5, 1]

getChg :: (Num a, Ord a) => [a] -> a -> a
getChg _ x | x < 0 = 0
getChg _ x | x == 0 = 1
getChg [] x | x > 0 = 0
getChg (c:cs) x | x > 0 =
  getChg cs x +
  getChg (c:cs) (x-c)