#include <stdio.h>
int main(){
    int n = 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);
    int  j = n;
    float  quantidadePessoas[n], soma = 0, media; 

    printf("Digite as notas:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &quantidadePessoas[i]);
    }
    for ( int i = 0; i < n; i++)
    {
      soma += quantidadePessoas[i];
    }

    media = soma / j;

    if (media <= 0 || media >= 25)
    {
        printf("A turma eh jovem e a media de idade eh: %.2f\n", media/n);
    }else if(media >25 || media <= 60){
        printf("A turma eh adulta e a media de idade eh: %.2f\n", media/n);
    }else if(media > 60){
        printf("A turma eh idosa e a media de idade eh: %.2f\n", media/n);
    
    }
}
