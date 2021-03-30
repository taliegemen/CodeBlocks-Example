#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ornek[64];
    fp = fopen("test123.txt", "w+");
    fprintf(fp,"Satir 1 yazi 1,\nsatir 2 yazi 2,\nsatir 3 yazi 3,\n");
    fclose(fp);
    fp = fopen("test123.txt", "r+");
    fscanf(fp,"%s",ornek);
    printf("%s",ornek);
    fgets(ornek,255,fp);
    printf("%s",ornek);
    fgets(ornek,255,fp);
    printf("%s",ornek);
    fgets(ornek,255,fp);
    printf("%s",ornek);
    return 0;
}
