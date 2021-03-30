#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int asal = 0;
    int cnt = 0;
    asal = 1;
    while (cnt < 10001) {
        asal++;
        if(AsalMi(asal) == 0) {
            cnt++;
        }

    }
    printf("%d", asal);
    return 0;
}

int AsalMi (int number) {

    if(number == 2 || number == 3) return 0;
    if(number%2 == 0)   return -1;
    for(int i = 2; i < (number/2); i++) {
        if(number%i == 0) return -1;
    }
    return 0;
}
