#include<stdio.h>
int main(){
    float tempMes[12], soma = 0, media;
    int acimaMedia[12], j = 0;
    const char *mes[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    printf("Digite a temperatura referente ao mês\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%d: ", i+1);
        scanf("%f", &tempMes[i]);
        soma += tempMes[i];
    }
    media = soma / 12;
    printf("A media de temperatura anual foi %.2f\n", media);
    for (int i = 0; i < 12; i++)
    {
        if (tempMes[i] > media)
        {
            acimaMedia[j] = i;
            j++;
        }
    }
    printf("Os meses com temperatura acima da media sao:\n");
    for (int i = 0; i < j; i++)
    {
        printf("%s = %.2f\n", mes[acimaMedia[i]], tempMes[acimaMedia[i]]);
    }
    printf("A media de temperatura anual foi %.2f\n", media);
    return 0;
}