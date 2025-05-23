#include <stdio.h>

int main(){
int ValorSaque, nota100, nota50, nota10, nota5, nota1;
printf("Qual o valor do saque? \n");
scanf("%d", &ValorSaque);
if (ValorSaque<10 || ValorSaque>600){
 printf("Valor invalido \n");
}else{
    printf("quantas notas de cada valor serão fornecidas.\n");
    printf(nota100);
    scanf("%d", &nota100);
    printf(nota50);
    scanf("%d", &nota50);
    printf(nota10);
    scanf("%d", &nota10);
    printf(nota5);
    scanf("%d", &nota5);
    printf(nota1);
    scanf("%d", &nota1);
    printf("O valor do saque é %d \n", ValorSaque);
    printf("E a quantidade de notas é: \n");

    
}


}