#include <stdio.h>
int main(){
    int numeros[10];
    int c = 0;
    printf("Digite 10 numeros inteiros: \n");
    for (int i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Os numeros digitados na ordem inversa: \n");
    for (int i = 9; i >= 0; i--)
    {
        
        printf("Numero %d: %d\n", c, numeros[i]);
        c++;
    }
    
}