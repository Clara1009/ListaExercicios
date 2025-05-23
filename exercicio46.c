#include <stdio.h>
int main(){
    int nota;
    while (nota > 1 || nota <= 10)
    {
        printf("Digite uma nota entre 1 e 10: \n");
        scanf("%d", &nota);
        if (nota < 1 || nota > 10)
        {
            printf("Nota invalida\n");
            break;
        }
    }
    
 
    
}