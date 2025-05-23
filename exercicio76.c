#include <stdio.h>

int main(){
    int q =0 ; 
    printf("digite a quantidade de temperaturas que leremos hoje: ");
    scanf("%d", &q);
    float temperaturas[q], soma = 0 ;
    
    for (int i = 0; i < q; i++)
    {
        printf("digite a temperatura %d: ", i+1);
        scanf("%f", &temperaturas[i]);
    }
    float j = temperaturas[0], t = temperaturas[0];;
    for (int  i = 0; i < q; i++)
    {
        
        soma += temperaturas[i];
        if (t < temperaturas[i])
        {
            t = temperaturas[i];
        }
        if (j > temperaturas[i])
        {
            j = temperaturas[i];
        }
       
    }
    float media = soma / q;
    printf("a temperatura maxima e: %.2f\n", t);
    printf("a temperatura minima e: %.2f\n", j);
    printf("a media das temperaturas e: %.2f\n", media);
}