#include <stdio.h>

int main(){
int centena, dezena, unidade, valor;
printf("Digite um numero menor que 1000 e maior que 0 \n");
scanf("%d", &valor);
if (valor < 0 || valor > 1000){
    printf("Erro, o valor nao cumpre os requisitos \n");
    return 0;}
    else{
        centena = valor / 100;
        dezena = (valor % 100)/10; 
        unidade =(valor % 10)/10;
        if (centena==0 )  {
            printf("o numero %d tem %d dezenas e %d unidades \n" ,valor, dezena, unidade);
        }else if(centena == 0 && dezena == 0){
            printf("o numero %d tem %d unidades \n" ,valor, unidade);
        }else if (centena != 0 ){
             printf("o numero %d tem %d centena, %d dezenas e %d unidades \n" ,valor, centena, dezena, unidade);
       
        }
        
    }

}