#include <stdio.h>
int main(){
    int voto, votoJulio = 0, votoCarlos = 0, votoPatricia = 0, votoPedro = 0;
    float votoBranco = 0, votoNulo = 0;
    printf("bem-vindo ao sistema para escolhar o proximo presidente do Brasil\n");
    printf("Digite o numero do candidato: \n");

    printf("1 - Julio\n");
    printf("2 - Carlos\n");
    printf("3 - Patricia\n");
    printf("4 - Pedro 4\n");
    printf("5 - Nulo\n");
    printf("6 - Branco\n");
    while(1){
        
        printf("Digite o numero do candidato: \n");
        scanf("%d", &voto);
        if(voto == 0){
            break;
        }
        switch (voto)
        {
        case 1:
            votoJulio++;
            break;
        case 2:
            votoCarlos++;
            break;
        case 3:
            votoPatricia++;
            break;
        case 4:
            votoPedro++;
            break;
        case 5:
            votoNulo++;
            break;
        case 6:
            votoBranco++;
            break;
        default:
            printf("Voto invalido\n");
            break;

        }
    }
    int totalVotos = votoJulio + votoCarlos + votoPatricia + votoPedro + votoNulo + votoBranco;
    printf("Total de votos: %d\n", totalVotos);
    printf("Total de votos Julio: %d\n", votoJulio);
    printf("Total de votos Carlos: %d\n", votoCarlos);
    printf("Total de votos Patricia: %d\n", votoPatricia);
    printf("Total de votos Pedro: %d\n", votoPedro);
    printf("Total de votos Nulo: %.0f\n", votoNulo);
    printf("Total de votos Branco: %.0f\n", votoBranco);
    printf("Porcentafgem dos votos nulos sobre o total: %.0f%%\n", 100 * (votoNulo / totalVotos));
    printf("Porcentafgem dos votos brancos sobre o total: %.0f%%\n", 100 * (votoBranco / totalVotos));
}