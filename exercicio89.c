#include <stdio.h>
int main(){
    int num, numInvertido = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    int numOriginal = num;
    while(num > 0)
    {
        int digito = num % 10;
        numInvertido = numInvertido * 10 + digito;
        num /= 10;
    }
    printf("O numero %d invertido e: %d\n", numOriginal, numInvertido);

}