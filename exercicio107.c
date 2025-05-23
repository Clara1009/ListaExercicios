#include <stdio.h>


   int main() {
    int votos, melhores[28] = {0}, total_votos = 0;
    printf("Enquete: Qual o Melhor jogador da partida de hoje?\n");

    while (1) {
        printf("Numero do jogador (0 = fim): ");
        scanf("%d", &votos);

        if (votos == 0)
            break;

        if (votos >= 1 && votos <= 27) {
            melhores[votos]++;
            total_votos++;
        } else {
            printf("Número inválido! Informe um valor entre 1 e 27 ou 0 para sair.\n");
        }
    }
    
    printf("\nResultado da votação:\n");
   printf(" Quantidade de votos: %d\n", total_votos);
    for (int i = 1; i <= 27; i++) {
        if (melhores[i] > 0) {
            printf("Jogador: %d\n", i);
            printf("Votos: %d\n", melhores[i]);
            printf("Porcentagem: %.2f%%\n",  (melhores[i] * 100.0) / total_votos);
          
        }
    }

    return 0;
}
    
