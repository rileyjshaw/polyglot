#include <stdio.h>

long makeChange(long *coins, long coinLen, long amount) {
  if(amount < 0) return 0;
  if(amount == 0) return 1;
  if(coinLen <= 0) return 0;
  return  makeChange(coins + 1, coinLen-1, amount)
      + makeChange(coins, coinLen, amount-coins[0]);
}

int main(int argc, char *argv[]) {
  long coins[5] = {50, 25, 10, 5, 1};
  long amount = 2000;
  long no = makeChange(coins, 5, amount);
  printf("%u\n", no);
  return 0;
}