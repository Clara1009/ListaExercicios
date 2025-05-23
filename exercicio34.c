
#include <stdio.h>
#include <math.h>

int main(){
int a, b, c, delta;

printf("Digite o valor de a numero \n");
scanf("%d", &a);
if (a==0){
    printf("Não é uma equacao de segundo grau \n");
    return 0;
    }
    else{
        printf("Digite o valor de a numero \n");
    scanf("%d", &b);
    printf("Digite o valor de a numero \n");
    scanf("%d", &c);

    delta = (b*b) - (4*a*c);
    if (delta < 0){
        printf(" a equação não possui raízes reais. \n");
        return 0;
    }else if (delta>0){
        printf("A equação possui duas raízes reais. \n");
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raízes são: %.2f e %.2f \n", x1, x2);
        return 0;

    }else{
        printf("A equação possui uma raiz real. \n");
        float x = -b / (2*a);
        printf("A raiz é: %.2f \n", x);
        return 0;

    }
        }
    }
