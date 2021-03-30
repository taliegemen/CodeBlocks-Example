#include <stdio.h>
#include <stdlib.h>
/*
1000den kucuk 3 ve 5 e bolunebilen
sayilarin toplamini bulan bir program

10 -> 3+5+6+9
*/
int a,c;

int main()
{
    c = 0;
    for(a = 1; a<1000; a++){
        if (a%3 == 0 || a%5 == 0){
            c += a;
        }
    }
    printf("%d" ,c);
    return 0;
}


