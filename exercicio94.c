#include <stdio.h>
int main(){
    int nota[4], soma = 0, media;

    printf("Digite as 4 notas do aluno: \n");
    for (int i = 0; i < 4; i++){
        printf("Nota %d: ", i+1);
        scanf("%d", &nota[i]);
        soma += nota[i];
    }
    media = soma / 4;
    for (int i = 0; i < 4; i++)
    {
         printf("A nota do aluno e: %d\n", nota[i]);
    }

    printf("A media do aluno e: %d\n", media);
}