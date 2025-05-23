#include <stdio.h>

int main(){
	float vendaSemanal[100], salario;

	int Contadores[9] ={0};
	int n = 0;
    	printf("Bom dia, nosso programa calcula quanto sera sua comicao\n");
		printf("quanto voce vendeu essa semana? \n");
        printf("Aperte -1 quando todos terminarem de dar as informacoes\n");
	while (1)
	{
		printf("%d: ", n + 1);
		scanf("%f", &vendaSemanal[n]);

		if (vendaSemanal[n] == -1)
			break;

		salario = 200 + (vendaSemanal[n] * 0.09);

		int indice = (int)(salario / 100) - 2;
		if (indice < 0)
			indice = 0;
		else if (indice > 8)
			indice = 8;
		Contadores[indice]++;

		n++;
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == 8)
		{
			printf("Faixa R$ 1000 ou mais: %d vendedores\n", Contadores[i]);
		}
		else
		{
			printf("Faixa R$ %d - R$ %d: %d vendedores\n", 200 + i * 100, 299 + i * 100, Contadores[i]);
		}
	}
  


	return 0;
}