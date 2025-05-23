#include <stdio.h>
int main(){
    float saltos[5];
    char nome[20];
    printf("Digite o nome do atleta: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Digite os 5 saltos do atleta %s: \n", nome);
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o salto %d: ", i+1);
        scanf("%f", &saltos[i]);
    }
    float maiorSalto = saltos[0], menorSalto = saltos[0], somaSaltos = 0;
    int num = 0, num2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if(saltos[i] > maiorSalto)
        {
            maiorSalto = saltos[i];
            num = i;
        }
        if(saltos[i] < menorSalto)
        {
            menorSalto = saltos[i];
            num2 = i;
        }
    }
    printf("O maior salto do atleta %s e: %.2f\n", nome, maiorSalto);
    printf("O menor salto do atleta %s e: %.2f\n", nome, menorSalto);
    saltos[num]= 0;
    saltos[num2]= 0;
    for (int i = 0; i < 5; i++)
    {
        somaSaltos += saltos[i];
    }
    float mediaSaltos = somaSaltos / 3;
    printf("Média dos demais saltos: %.2f\n", mediaSaltos);
}