#include <stdio.h>
int main(){
    int n = 0 ;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);
    int  j = n;
    float  quantidadeNotas[n], soma = 0, media; 
    printf("Digite as notas:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &quantidadeNotas[i]);
    }
    for ( int i = 0; i < n; i++)
    {
      soma += quantidadeNotas[i];
    }
    media = soma / j;
    printf("A media das notas eh: %.2f\n", media/n);
}
