#include <stdio.h>
int main(){
    
int ID[100], i = 0, j = 0; 
   float peso[100], altura[100];
   printf("Digite o 0 caso tenha dado todas as informacoes: \n");
while (1)
{
    printf("Digite o ID do cliente: ");
    scanf("%d", &ID[i]);
     if (ID[i] == 0)
    { 
        break;
    }
  
    printf("Digite o peso do cliente: ");
    scanf("%f", &peso[i]);
    printf("Digite a altura do cliente: ");
    scanf("%f", &altura[i]);
    i++;
    j++;
    
}
float maiorPeso = peso[0], menorPeso = peso[0];
float maiorAltura = altura[0], menorAltura = altura[0], somaP = 0, somaA =0;
for (int i = 0; i < j; i++)
{
    somaP += peso[i];
    somaA += altura[i];

    if(peso[i] > maiorPeso){
        maiorPeso = peso[i];
    }
    if(peso[i] < menorPeso){
        menorPeso = peso[i];
    }
    if(altura[i] > maiorAltura){
        maiorAltura = altura[i];
    }
    if(altura[i] < menorAltura){
        menorAltura = altura[i];
    }
}
float mediaP = somaP / j;
float mediaA = somaA / j;

for (int i = 0; i < j; i++)
{
   printf("ID: %d, Peso: %.2f, Altura: %.2f\n", ID[i], peso[i], altura[i]);
}
printf("\n");
printf("A quantidade de pessoas cadastradas e: %d\n", j);
printf("A media do peso e: %.2f\n", mediaP);
printf("A media da altura e: %.2f\n", mediaA);
printf("O maior peso e: %.2f\n", maiorPeso);
printf("O menor peso e: %.2f\n", menorPeso);
printf("A maior altura e: %.2f\n", maiorAltura);
printf("A menor altura e: %.2f\n", menorAltura);




}