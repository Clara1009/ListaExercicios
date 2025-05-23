#include <stdio.h>

int main(){
    int base, expoente;
    printf("Digite um numero para a base: ");
    scanf("%d", &base);
    printf("Digite um numero para o expoente: ");
    scanf("%d", &expoente);

    int resultado = 1;

    for (int i = 0; i < expoente; i++){
        resultado *= base;
    }
    printf("O resultado de %d elevado a %d eh: %d\n", base, expoente, resultado);
}