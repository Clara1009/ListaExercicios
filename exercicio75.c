#include <stdio.h>

int main (){
    int p=0;
    printf("digite o numero de produtos: ");
    scanf("%d", &p);

    float produtos[p];
    printf("digite os precos dos produtos:\n");
    for(int i =0; i<p; i++){
        printf("produto %d: ", i+1);
        scanf("%f", &produtos[i]);
    }
    printf("digite o numero correspondente aos produtos comprados: ");
    printf("e digite 0 para finalizar a compra\n");
    float soma = 0;
    int produtosComprados[p];
    for (int i = 0; i < 100; i++)
     {
        int n;
        printf("produto %d: ", i+1);
        scanf("%d", &n);
        produtosComprados[i] = n;
        if(n==0){
            break;
        }
        if(n>p){
            printf("produto invalido\n");
            continue;
        }
        soma += produtos[n-1];
    }


    printf("o total da compra e: %.2f\n", soma);
    printf("qual o valor pago: ");
    float pago;
    scanf("%f", &pago);
    float troco = pago - soma;
    printf("itens comprados:\n");

    for(int i = 0; i < p; i++){
        if(produtosComprados[i] != p){
            printf("produto %d: %d\n", i+1, produtosComprados[i]);
        }
    }
    printf("o total da compra e: %.2f\n", soma);
    printf("o valor pago e: %.2f\n", pago);
    printf("o troco e: %.2f\n", troco);


}