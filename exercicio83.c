#include <stdio.h>
int main(){
    float num;
    int  ZeroaVinteCinco = 0,VinteSeisaCinquenta = 0, CinquentaUmSetentaCinco = 0, SetentaSeisCento = 0;
while(1){
printf("Digite um numero: \n");
scanf("%f", &num);

if (num > 0 && num < 25){
    ZeroaVinteCinco++;
}
else if (num > 25 && num < 50){
    VinteSeisaCinquenta++;
}
else if (num > 50 && num < 75){
    CinquentaUmSetentaCinco++;
}
else if (num > 75 && num < 100){
    SetentaSeisCento++;
}
else{
    break;
    
}
}  
printf("A quantidade de numeros entre 0 e 25 e: %d\n", ZeroaVinteCinco);
printf("A quantidade de numeros entre 26 e 50 e: %d\n", VinteSeisaCinquenta);
printf("A quantidade de numeros entre 51 e 75 e: %d\n", CinquentaUmSetentaCinco);
printf("A quantidade de numeros entre 76 e 100 e: %d\n", SetentaSeisCento);


}