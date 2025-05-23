#include <stdio.h>

int main(){
int num1, num2, num3, num4, num5, soma, media;
printf("Digite cinco numeros inteiros: ");
scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
soma = num1 + num2 + num3 + num4 + num5;
media = soma / 5;
printf("A soma dos numeros e: %d\n", soma);
printf("A media dos numeros e: %d\n", media);   
}