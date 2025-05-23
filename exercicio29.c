

#include <stdio.h>

int main(){
    float  aumento, percentual, salarioI, SalarioF;
    
    printf("Qual o seu salario? \n");
    scanf("%f" , &salarioI);
    
    if (salarioI <= 280.00 ){
        percentual = 20;
        aumento = (salarioI * percentual) / 100;
        SalarioF = salarioI + aumento;

        printf("O seu salario antigo é %.2f \n", salarioI);
        printf("O percentual do aumento é %.2f%% \n", percentual);
        printf("O aumento sera %.2f \n", aumento);
        printf("O salario com o aumento sera %.2f \n", SalarioF);
    } else {
        if (salarioI > 280.00 && salarioI <= 700.00 ){
            percentual = 15;
            aumento = (salarioI * percentual) / 100;
            SalarioF = salarioI + aumento;

            printf("O seu salario antigo é %.2f \n", salarioI);
            printf("O percentual do aumento é %.2f%% \n", percentual);
            printf("O aumento sera %.2f \n", aumento);
            printf("O salario com o aumento sera %.2f \n", SalarioF);
        } else {
            if (salarioI > 700.00 && salarioI <= 1500.00 ){
                percentual = 10;
                aumento = (salarioI * percentual) / 100;
                SalarioF = salarioI + aumento;

                printf("O seu salario antigo é %.2f \n", salarioI);
                printf("O percentual do aumento é %.2f%% \n", percentual);
                printf("O aumento sera %.2f \n", aumento);
                printf("O salario com o aumento sera %.2f \n", SalarioF);
            } else {
                percentual = 5;
                aumento = (salarioI * percentual) / 100;
                SalarioF = salarioI + aumento;

                printf("O seu salario antigo é %.2f \n", salarioI);
                printf("O percentual do aumento é %.2f%% \n", percentual);
                printf("O aumento sera %.2f \n", aumento);
                printf("O salario com o aumento sera %.2f \n", SalarioF);
            }
        }
    }
    
return 0;            
        }
    



