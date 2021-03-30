#include <stdio.h>
#include <stdlib.h>

float w;
int array[4]

typedef enum {
    Summation,
    Subtraction,
    Multiplication,
    Division
}eCalcType;

typedef struct CalcStruct{
    eCalcType calcType;
    float (*Calculation)(float x, float y);

}sCalcComp;

float Sum(float x, float y) {
    w = x+y;
    return w;
}
float Subtract(float x, float y) {
    w = x-y;
    return w;
}
float Multiple(float x, float y) {
    w = x*y;
    return w;
}
float Divide(float x, float y) {
    w = x/y;
    return w;
}


sCalcComp Calcc[4]= {   {Summation,         Sum},
                        {Subtraction,       Subtract},
                        {Multiplication,    Multiple},
                        {Division,          Divide }

                    };

int main()
{
    int type;
    float val1;
    float val2;

    printf("Give value 1\n");
    scanf("%f", &val1);
    printf("Give value 2\n");
    scanf("%f", &val2);
    printf("Give calculation type\n");
    scanf("%d", &type);


    for (int i = 0; i < 4; i++){
        if ((eCalcType)type == Calcc[i].calcType){

            printf("%f", Calcc[i].Calculation(val1, val2));
        }
    }

    return 0;
}
