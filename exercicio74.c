#include <stdio.h>

int main(){
 
    float preco= 0 ; 
    printf("digite o preco do pao: ");
    scanf("%f", &preco);
    
    printf("tabela de valores do pao\n");
    for (int i = 0; i < 50; i++)
    {
         float custo = preco * (i+1);
        printf("%d = %.2f\n", i+1, custo);
    }

}