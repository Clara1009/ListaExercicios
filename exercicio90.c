#include <stdio.h>

int main(){
    int  n, m=1;
    float soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d / %d ", i, m);
        soma += (i / m);
        m += 2;
        
        if(i < n)
        {
            printf("+ ");
        }
       
    }

    printf("= %.2f\n", soma);

}