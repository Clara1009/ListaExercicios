#include <stdio.h>

int main(){
    int idade[10],soma = 0, baixinho = 0;
    float altura[10];
    for (int i = 0; i < 10; i++)
    {
        printf("digite a idade: ");
        scanf("%d",&idade[i]);
         printf("digite a altura: ");
        scanf("%f",&altura[i]);
        soma += altura[i];
    }
    int media = soma / 10;
    for (int i = 0; i < 10; i++)
    {
        if (idade[i] > 13)
        {
          if (media > altura[i])
          {
            baixinho++;
          }
             
        } 
    }
    
    printf("nesta sala %d sao menores que a media", baixinho);

}