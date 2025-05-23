#include <stdio.h>
int main (){
char combustivel;
float valorA=1.90, valorG=2.50, valorTotal;  
int quantidade; 
printf("Se o cliente quiser Alcool aperte A se ele quiser Gasolina aperte G \n");
scanf("%c", &combustivel);
printf("quantos litros ele quer de combustivel? \n");
scanf("%d", &quantidade);
if (combustivel == 'A'){
    if (quantidade <= 20){
        valorTotal = quantidade * valorA * 0.03;
        printf("O valor total é %.2f \n", valorTotal);
    }else{
        valorTotal = quantidade * valorA * 0.05;
        printf("O valor total é %.2f \n", valorTotal);
    }
}else if (combustivel == 'G'){
    if (quantidade <= 20){
        valorTotal = quantidade * valorG * 0.04;
        printf("O valor total é %.2f \n", valorTotal);
    }else{
        valorTotal = quantidade * valorG * 0.06;
        printf("O valor total é %.2f \n", valorTotal);
    }
}
}