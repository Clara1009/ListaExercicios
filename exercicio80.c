#include <stdio.h>
int main(){
    printf("Digite o numero dos 10 alunos e a sua altura: ");
    int numAluno[9], num[2];
    float altura[9];

    float maiorAultura = altura[0], menorAltura = altura[0];

    for (int  i = 0; i < 10; i++)
    {
        printf("Digite o numero do aluno %d: ", i+1);
        scanf("%d", &numAluno[i]);
        printf("Digite a altura do aluno %d: ", i+1);
        scanf("%f", &altura[i]);
        if(altura[i] > maiorAultura){
            maiorAultura = altura[i];
            num[0]= numAluno[i];
        }
        if(altura[i] < menorAltura){
            menorAltura = altura[i];
            num[1]= numAluno[i];
        }  
    }
    printf("A o aluno com a maior altura: %d\n", num[0]);
    printf("A o aluno com a menor altura: %d\n", num[1]);

}