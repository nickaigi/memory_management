#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(){
  int x = 20, y = 35;
  printf("The GCD of %d and %d = %d\n", x, y, gcd(x, y));
  return 0;
}

int gcd(int x, int y){
  if (x == 0)
    return y;
  if (y == 0)
    return x;
  if (x == y)
    return x;
  if (x > y)
    return gcd(x -y, y);
  return gcd(x, y - x);
}
