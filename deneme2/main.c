#include <stdio.h>
#include <stdlib.h>

/*
4 000 000'a kadar olan cift fibonacci dizisinin
elemanlarinin toplami

10-> 0 + 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
*/
int FibonacciArray(int limit);          // fonksiyon prototipi

int main()                              // main fonksiyonun
{
    int lmt = 0;
    int sum = 0;
    scanf("%d",&lmt);
    sum = FibonacciArray(lmt);
    printf("%d",sum);
    return 0;
}

int FibonacciArray(int limit)           // fonksiyon yanımı
{
    int a,b,c,d;
    a = 2; b = 1; c = 2; d = 0;
    while(a < limit){
        c = a + b;
        if(a%2 == 0){
        d += a;
        }
        b = a;
        a = c;
    }
    return (d);
}
