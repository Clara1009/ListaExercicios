#include <stdio.h>

int main(){
    int codigo[6] = {100,101,102,103,104,105}, codigoLanche; 
    char *especificacao[6] = {"cachorro quente","bauru simples","bauru com ovo","hamburguer","cheeseburguer","refrigerante"};
    float preco[6] = {1.20, 1.30, 1.50, 1.20, 1.30, 1.00}, valorTotal = 0;
    char *pedido[100];
    int  p =0;
    while (1)
    {
    printf("Digite o codigo do lanche: ");
    scanf("%d", &codigoLanche);
        if (codigoLanche == 0)
        {
            break;
        }
        int encontrado = 0;
         for (int i = 0; i < 6; i++) {
            if (codigoLanche == codigo[i]) {
                valorTotal += preco[i];
                pedido[p] = especificacao[i];
                p++;
                encontrado = 1;
                break;
            }
        }
         if (!encontrado) {
            printf("Codigo invalido\n");
        }
       
    }
    printf("Pedido: \n");

    for (int i = 0; i < p; i++)
    {
        printf( "%s\n",  pedido[i]);
    }
    printf("Valor total: %.2f\n", valorTotal);
    return 0;
}