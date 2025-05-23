#include <stdio.h>

int main(){
    int q = 0 ; 
   

    printf("digite a quantidade de CD's:");
    scanf("%d", &q);
    int p = q;
    float precoCD[q], soma = 0;

    for (int i = 0; i < q; i++)
    {
        printf("digite o valor pago pelo CD %d: ", i + 1);
        scanf("%f", &precoCD[i]);
    }
    for (int i = 0; i < q; i++)
    {
       soma += precoCD[i];
    }
        float media = soma / p;
        printf("A media que paga por cada CD eh: %.2f", media);

}