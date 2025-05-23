#include <stdio.h>

int main(){
    int n=0;
    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &n);
    printf(" Para votar \n");
    printf(" digite 1 para o candidato 1\n");
    printf(" digite 2 para o candidato 2\n");
    printf(" digite 3 para o candidato 3\n");
    int j =n;
    int votos[n];

    int  candidatos1=0,candidatos2=0,candidatos3=0, nulo=0;

    for ( int i = 1; i < j + 1; i++)
    {
        printf("Digite o voto do eleitor %d: ", i);
        scanf("%d", &votos[i]);

        if(votos[i] == 1){
           candidatos1 ++; 
        }else if (votos[i]== 2)
        {
            candidatos2++;
        }else if (votos[i]== 3)
        {
            candidatos3++;
        }else{
            nulo++;
        }
        
    }
    printf("Candidato 1: %d votos\n", candidatos1);
    printf("Candidato 2: %d votos\n", candidatos2);
    printf("Candidato 3: %d votos\n", candidatos3);
    printf("voto nulo: %d votos\n", nulo);
    
}