#include <stdio.h>
#include <stdlib.h>

double AsalMax(double n){
    double i;
    for (i = 2; i < n; i++) {
        while ((fmod(n,i)) == 0) {
        n /= i;
    }
  }
  return (n);
}

int main(void)
{
  double number = 600851475143;
  double maxasal;
  maxasal = AsalMax(number);
  printf("%.0lf \n", maxasal);
  return 0;
}

