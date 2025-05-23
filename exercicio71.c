#include <stdio.h>

int main(){
    int t= 0;
    printf("Digite a quantidade de turmas: ");
    scanf("%d", &t);
    int j = t, soma = 0;

    int turmas[t]; 
    for (int i = 0; i < j; i++)
    {
        
        printf("Digite a quantidade de alunos da turma %d: ", i + 1);
        scanf("%d", &turmas[i]);
        if (turmas[i] >= 40)
        {
            printf("erro: a turma %d tem mais de 40 alunos\n", i + 1);
            printf("tente novamente\n");
            i--;
        }else{
             soma += turmas[i];
        }
 
    }
    int media = soma / j;
    printf("A quantidade total de alunos eh: %d\n", soma);
    printf("A media de alunos por turma eh: %d\n", media);
    
    
}