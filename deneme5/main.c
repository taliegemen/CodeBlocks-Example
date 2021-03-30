#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i;
 int a = 0;
 int Array[3][4] = {0};
 int *p;
 int k = 0;
 int ctr = 0;

 p = Array;
 for (i = 0; i < 12; i++) {
    *(p+i) = i;
 }

 printf("%d\n", p+10);
 printf("%d\n", p);
 printf("%d\n", *p);
 printf("%d\n", *(p+10));
 printf("%d\n", &p);
 printf("%d\n", Array);

  for(int j = 0; j < 12; j++)
    printf("%d ", Array[(j/4)][j%4]);
    return 0;
}
