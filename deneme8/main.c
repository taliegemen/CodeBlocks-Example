#include <stdio.h>
#include <stdlib.h>

//float x = 2,y = 1,z = 3,w;
float w;
typedef float (*Calc)(struct CalcStruct* );



typedef struct CalcStruct{
    Calc CalcFunc;
    float x;
    float y;
    int calcType;

}CalcComp;


CalcComp Calc1;


float CalcOp () {

   switch(Calc1.calcType) {
   case 1:
       w = Calc1.x + Calc1.y;
       printf("%f",w);

       break;
   case 2:
       break;
   case 3:
       break;
   case 4:
       break;

   }
}


int main()
{
    printf("Give x,y and calc value");
    //scanf("%f %f %f",x,y,z);
    //CalcComp Calc1;
    Calc1.CalcFunc = CalcOp;
    Calc1.calcType = 1;
    scanf("%f", &Calc1.x);
    scanf("%f", &Calc1.y);
    Calc1.CalcFunc(&Calc1);
    return 0;
}
