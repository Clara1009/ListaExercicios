#include <stdio.h>

int main(){
    int  n, m=1;
    float soma = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("H= 1 + ");
    for(int i = 1; i <= n; i++)
    {
        printf(" 1 / %d ", m);
        soma += (1 / m);
        m ++;
        
        if(i < n)
        {
            printf("+");
        }
       
    }

    printf("= %.2f\n", soma);

}