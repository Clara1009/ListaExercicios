#include <stdio.h>
int main(){
char fruta;
int quantidade;
printf("Digite M para Morango e A para Maca: \n");
scanf("%c", &fruta);
printf("Quantos quilos? \n");
scanf("%d", &quantidade);

if (fruta == 'M'){
   if (quantidade <= 5)
   {
       printf("O valor total é %.2f \n", quantidade * 2.50);
   }else if (quantidade > 5)
   {
    printf("O valor total é %.2f \n", quantidade * 2.20);
   }else if (quantidade >= 8){
    printf("O valor total é %.2f \n", quantidade * 2.20 * 0.10);
   }
}else if (fruta == 'A'){
    if (quantidade <= 5)
    {
        printf("O valor total é %.2f \n", quantidade * 1.80);
    }else if (quantidade >5)
    {
        printf("O valor total é %.2f \n", quantidade * 1.50);
    }else if (quantidade >= 8){
        printf("O valor total é %.2f \n", quantidade * 1.50 * 0.10);
    }

}

}