#include <stdio.h>
int main(){
    int numInicial, numFinal, numTabuada;
    printf("Montar a tabuada de: ");
    scanf("%d", &numTabuada);
    printf("ela ira comecar a apartir de: ");
    scanf("%d", &numInicial);
    printf("e ira ate: ");
    scanf("%d", &numFinal);
    if (numInicial > numFinal)
    {
        printf("O numero inicial da tabuada deve ser menor que o numero final.\n");
        return 1;
    }
    
    printf("Vou montar a tabuada de %d começando em %d e terminando em %d:", numTabuada, numInicial, numFinal);
    for (int i = numInicial; i <= numFinal; i++)
    {
        printf("\n%d x %d = %d", numTabuada, i, numTabuada * i);
    }
}