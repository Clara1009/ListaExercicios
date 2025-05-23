#include <stdio.h>

int main(){
 
    float preco= 1.99; 
    printf("tabela de valores\n");
    for (int i = 0; i < 50; i++)
    {
         float custo = preco * (i+1);
        printf("%d = %.2f\n", i+1, custo);
    }

}