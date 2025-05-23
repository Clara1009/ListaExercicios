#include <stdio.h>

int main(){
    float valorDivida;
    printf("Digite o valor da divida: ");
    scanf("%f", &valorDivida);
    int parcela[5] = {1, 3, 6, 9, 12};
    int valorParcela[5] = {0, 10, 15, 20, 25};
    float valor = 0, valorpago = 0;

    for (int  i = 0; i < 5; i++)
    {
        valor = valorParcela[i] * valorDivida / 100;
        valorpago = valor + valorDivida;
        printf("Parcela %d: ", parcela[i]);
        printf("porcentagem: %d\n", valorParcela[i]);
        printf("Valor: %.2f\n", valor);
        printf("Valor pago: %.2f\n", valorpago);
    }
    
    
    
}