#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
    float num;
    printf("Digite um numero: \n");
    scanf("%f", &num);
    bool isInt;
    if ((isInt = num == (int)num))
    {
        printf("O numero é inteiro \n");
    }else
    {
        printf("O numero é decimal \n");
    }
    }
