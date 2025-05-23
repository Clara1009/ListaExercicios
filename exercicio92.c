#include <stdio.h>
int main(){
    int numeros[5];
    printf("Digite 5 numeros inteiros: \n");
    for (int i = 0; i < 5; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Os numeros digitados foram: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Numero %d: %d\n", i+1, numeros[i]);
    }
    
}