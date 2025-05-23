#include <stdio.h>
 
int main(){

    int numeros[5];

    printf("digite cinco valores \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d" , &numeros[i]);
    }

    int soma = 0, multiplicacao = 1;
    for (int i = 0; i < 5; i++)
    {
       printf("%d", numeros[i]);

       if ( i < 4)
       {
         printf(" + ");
       }else{
        printf(" =");
       }
       soma += numeros[i];
    }

    printf(" %d\n" , soma);

     for (int i = 0; i < 5; i++)
    {
       printf("%d", numeros[i]);

       if ( i < 4)
       {
         printf(" x ");
       }else{
        printf(" =");
       }
       multiplicacao *= numeros[i];
    }
    printf(" %d" , multiplicacao);

}