#include <stdio.h>
int main(){
    float saltos[5];
    char nome[50];
    printf("Digite o nome do atleta: \n");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Digite as 7 notas do(a) atleta %s: \n", nome);
    for (int i = 0; i < 5; i++)
    {
        printf("Nota %d: ", i+1);
        scanf("%f", &saltos[i]);
    }
    float maiorNota = saltos[0], menorNota = saltos[0], somaNota = 0;
    int num = 0, num2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if(saltos[i] > maiorNota)
        {
            maiorNota = saltos[i];
            num = i;
        }
        if(saltos[i] < menorNota)
        {
            menorNota = saltos[i];
            num2 = i;
        }
    }
    printf("A maior nota do(a) atleta %s e: %.2f\n", nome, maiorNota);
    printf("A menor nota do(a) atleta %s e: %.2f\n", nome, menorNota);
    saltos[num]= 0;
    saltos[num2]= 0;
    for (int i = 0; i < 5; i++)
    {
        somaNota += saltos[i];
    }
    float mediaSaltos = somaNota / 3;
    printf("Media das demais notas: %.2f\n", mediaSaltos);
    printf("A nota final do(a) atleta %s e: %.2f\n", nome, mediaSaltos);
}