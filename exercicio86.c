#include <stdio.h>
int main(){
    char gabarito[10];
    int p= 0, acertosAluno[100], ErroAluno[100];
    char nomes[100][50];

    printf(" Professor por favor digite o gabarito da prova: \n");
    for(int i = 0; i < 10; i++ ){
        printf("Digite a resposta da questao %d: ", i+1);
        scanf(" %c", &gabarito[i]);
    }

    printf("Agora peça para cada aluno um de cada vez digitar o proprio gabarito \n");
    printf("aperte 0 para sair\n");

    while (1){

        int acerto = 0, erro = 0;
        char gabaritoAluno[10];
        printf("Digite o nome do aluno: ");
        scanf(" %s", nomes[p]);

        for(int i = 0; i < 10; i++ ){
        printf("Digite a resposta da questao %d: ", i+1);
        scanf(" %c", &gabaritoAluno[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (gabarito[i] == gabaritoAluno[i])
        {
            acerto++;
            
        }
        else
        {
            erro++;
           
        }
    }
    acertosAluno[p] = acerto;
    ErroAluno[p] = erro;
    p++;
    printf("Todos os alunos respnderam a prova?\n aperte 0 para sair\n");
    int resposta;
    scanf("%d", &resposta);
    if (resposta == 0)
    {
        break;
    }
}
for (int i = 0; i < p; i++) {
    printf("A quantidade de acertos do aluno %s e: %d\n", nomes[i], acertosAluno[i]);
    printf("A quantidade de erros do aluno %s e: %d\n", nomes[i], ErroAluno[i]);
}


  int melhorNota = acertosAluno[0], piorNota = acertosAluno[0];
    for (int i = 1; i < p; i++)
    {
        if (acertosAluno[i] > melhorNota)
        {
            melhorNota = acertosAluno[i];
        }
        if (acertosAluno[i] < piorNota)
        {
            piorNota = acertosAluno[i];
        }
    }

    printf("A melhor nota e: %d\n", melhorNota);
    printf("A pior nota e: %d\n", piorNota);

}
  
    


