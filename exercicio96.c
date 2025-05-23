#include <stdio.h>

int main(){
 int numInteiro[20], par[20], impar[20], m=0, p=0;
 printf("digite varios numeros: \n");
 for (int i = 0; i < 20; i++)
 {
    printf("%d: ", i + 1 );
    scanf ("%d", &numInteiro[i]);
 }
 for (int i = 0; i < 20; i++)
 {
    if (numInteiro[i] % 2 == 0)
    {
        par[p]= numInteiro[i];
        p++;
    }else{
        impar[m]= numInteiro[i];
        m++;
    }
    
 }

 printf("os numeros digitados:\n");
 for (int i = 0; i < 20; i++)
 {
    printf(" %d," , numInteiro[i]);
 }
  printf("\n os numeros pares:\n");
 for (int i = 0; i < p; i++)
 {
    printf(" %d," , par[i]);
 }

 printf("\n os numeros impares:\n");
 for (int i = 0; i < m; i++)
 {
    printf(" %d," , impar[i]);
 }


}