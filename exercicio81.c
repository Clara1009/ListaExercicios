#include <stdio.h>
int main(){
    
    int  CodigoCidade[5], NumVeiculos[5], NumAcidentes[5];

    for(int i = 0; i< 5; i++){
        printf("Digite o codigo da cidade %d: ", i+1);
        scanf("%d", &CodigoCidade[i]);
        printf("Digite o numero de veiculos: ");
        scanf("%d", &NumVeiculos[i]);
        printf("Digite o numero de acidentes: ");
        scanf("%d", &NumAcidentes[i]);
    }
    int  menorAcidente = NumAcidentes[0], menorAcidenteCidade = CodigoCidade[0];
    int somaVeiculos = 0, mediaVeiculos = 0, somaAcidentes = 0, mediaAcidentes = 0;

    for (int i = 0; i < 5; i++)
    {
        somaVeiculos += NumVeiculos[i];

        if (NumAcidentes[i] < menorAcidente)
        {
            menorAcidente = NumAcidentes[i];
            menorAcidenteCidade = CodigoCidade[i];
        }
        if (NumVeiculos[i] < 2000)
        {
           somaAcidentes += NumAcidentes[i];
        }
    
        
    }
    mediaVeiculos = somaVeiculos / 5;
    mediaAcidentes = somaAcidentes / 5;


    printf("A cidade com o menor numero de acidentes e: %d\n",menorAcidenteCidade);
    printf("A media de veiculos das 5 cidades juntas eh: %d\n", mediaVeiculos);
    printf("A quantidade de acidentes em cidades com menos de 2000 veiculos e: %d\n", mediaAcidentes);

}