#include <stdio.h>
int main(){

    int tipoCarne, quantidade, cartao; 
    float valorTotal; 

    printf("Que tipo de Carne você quer? \n");
    printf("Digite 1 para File Duplo\n");  
    printf("Digite 2 para Alcatra\n");   
    printf("Digite 3 para Picanha\n");
    scanf("%d", &tipoCarne);

    printf("Quantos quilos? \n");
    scanf("%d", &quantidade);

    printf("Tem o cartao Tabajara? \n");
    printf("Digite 1 para sim e 2 para nao \n");
    scanf("%d", &cartao); 

    if (tipoCarne == 1) {
        if (cartao == 1) {
            if (quantidade <= 5) {
                valorTotal = quantidade * 4.90 * 0.95;
                printf("Valor total = %.2f \n", valorTotal);
            } else {
                valorTotal = quantidade * 5.80 * 0.95; 
                printf("Valor total = %.2f \n", valorTotal);
            }
        } else {
            if (quantidade <= 5) {
                valorTotal = quantidade * 4.90;
                printf("Valor total = %.2f \n", valorTotal);
            } else {
                valorTotal = quantidade * 5.80;
                printf("Valor total = %.2f \n", valorTotal);
            }
        }
    } else if (tipoCarne == 2) {
        if (cartao == 1) {
            if (quantidade <= 5) {
                valorTotal = quantidade * 5.90 * 0.95;
                printf("Valor total = %.2f \n", valorTotal);
            } else {
                valorTotal = quantidade * 6.80 * 0.95;
                printf("Valor total = %.2f \n", valorTotal);
            }
        } else {
            if (quantidade <= 5) {
                valorTotal = quantidade * 5.90;
                printf("Valor total = %.2f \n", valorTotal);
            } else {
                valorTotal = quantidade * 6.80;
                printf("Valor total = %.2f \n", valorTotal);
            }
        }
    } else if (tipoCarne == 3) {
        if (cartao == 1) {
            if (quantidade <= 5) {
                valorTotal = quantidade * 6.90 * 0.95;
                printf("Valor total = %.2f \n", valorTotal);
            } else {
                valorTotal = quantidade * 7.80 * 0.95;
                printf("Valor total = %.2f \n", valorTotal);
            }
        } else {
            if (quantidade <= 5) {
                valorTotal = quantidade * 6.90;
                printf("Valor total = %.2f \n", valorTotal);
            } else {
                valorTotal = quantidade * 7.80;
                printf("Valor total = %.2f \n", valorTotal);
            }
        }
    }

    return 0;
}