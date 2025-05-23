#include <stdio.h>

int main(){
    int numeros[100], n=0, acima =0, abaixo = 0;
    printf("Digite a quantidade de notas que ira precisar: \n");
    printf("ps: aperte -1 para o sistema parar \n");
    while (1)
    {
        printf("%d: ", n);
        scanf("%d", &numeros[n]);
        if(numeros[n]== -1){
             break;
        }
        n++;
    }
    int soma=0,media=0;
     printf("Os valores digitados foram: \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d" , numeros[i]);
        soma += numeros[i];
    }
    media =  soma / n ;
      printf("\nA ordem inversa dos valores digitados eh: \n");

      for (int i = n; i >= 0; i--)
    {
        printf("%d \n" , numeros[i]);
            if(numeros[i]> media){
            acima++;
        }
        if (numeros[i] < 7)
        {
            abaixo++;
        }
        
    }

 printf("soma dos valores: %d\n", soma);
 printf("media: %d\n", media);
 printf("quantidade acima da media: %d\n", acima);
 printf("Quantidade abaixo de 7: %d\n", abaixo);

 return 0;

}