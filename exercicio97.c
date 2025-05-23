#include <stdio.h>

int main(){
int  AcimaMedia = 0, abaixoMedia = 0;
float nota[4],media[10]; 
for (int  i = 0; i < 10; i++)
{
    int soma = 0;
    printf("digite a nota do aluno %d: \n", i + 1);
    for (int j = 0; j < 4; j++)
    {
        printf("%d: ", j + 1);
        scanf("%f", &nota[j]);
        soma += nota[j];
    }
    media[i] = soma / 4;
}

for (int i = 0; i < 10; i++)
{
    if(media[i] <= 7.0){
        AcimaMedia++;
    }else{
        abaixoMedia++;
    }
}
printf("%d ficaram acima da media\n",AcimaMedia);
printf("%d ficaram abaixo da media",abaixoMedia);

}