#include  <stdio.h>

int main(){

int idade[5];
float altura[5];
char nome[5][50];

for (int i = 0; i < 5; i++)
{
    printf("digite o seu nome: ");
    scanf("%s", nome[i]);
    printf("Oi %s digite a sua altura: ", nome[i]);
    scanf("%f", &altura[i]);
    printf("Oi %s digite a sua idade: ", nome[i]);
    scanf("%d", &idade[i]);
}
for (int i = 4; i >= 0; i--)
{
   printf("nome: %s\n" ,nome[i]);
   printf ("altura: %f\n", altura[i]);
   printf("idade: %d\n", idade[i]);
}

}