#include <stdio.h>
int main(){
    float salario = 1000, percentual = 1.5, aumento = 0;
    printf("O funcionario foi contratado em 1995\n");
    printf("Digite o salario inicial: 1000\n");
    printf("No ano seguinte voce teve um aumento de 1.5%%\n");

    aumento = salario * percentual / 100;
    salario += aumento;
    printf("No ano de 1996 o aumento foi de: %.2f\n", aumento);
    printf("O salario foi de: %.2f\n", salario);
    printf("No ano seguinte os aumentos salariais sempre correspondem ao dobro do percentual do ano anterior\n");

    for (int i = 1997; i < 2025; i++)
    {
        percentual *= 2;
        aumento = salario * percentual / 100;
        salario += aumento;

        printf("No ano de %d o aumento foi de: %.2f (percentual: %.2f%%)\n", i, aumento, percentual);
        printf("O salario foi de: %.2f\n\n", salario);
    }

}