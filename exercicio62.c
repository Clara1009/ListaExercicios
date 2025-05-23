#include <stdlib.h>
#include <stdio.h>
int main(){
    int n, maior, menor, soma=0;
    int *vetor;
    printf("Digite o tamanho do vetor: ");

    scanf("%d", &n);
    vetor = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }

        if(menor > vetor[i]){
            menor = vetor[i];
        }

        soma += vetor[i];
    }
    printf("O maior elemento do vetor eh: %d\n", maior);
    printf("O menor elemento do vetor eh: %d\n", menor);
    printf("A soma dos elementos do vetor eh: %d\n", soma);
    
    free(vetor);
}