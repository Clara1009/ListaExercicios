#include <stdio.h>
int main(){
    int num,fatorial=1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i--){
        fatorial *= i;
    }
     printf("O fatorial de %d eh: %d", num, fatorial);
}