#include <stdio.h>
int main(){
int  abonoMinimo=0, Colaboradores=0;
float Salario, abono, GastoTotal=0, MaiorAbono =0;
printf("Peca para os seus funcionarios digitarem o Salario deles e eu darei o abono\n");

while (1)
{
    printf("Digite o Seu Salario:");
    scanf("%f", &Salario);
    if(Salario == 0 ){
        break;
    }

    abono = (Salario*20)/100;
    if (abono > 100)
    {
        printf("Salario: R$%.2f\n Abono: R$%.2f\n", Salario, abono);
    }else{
        abono = 100;
        printf("Salario: R$%.2f\n Abono: R$%.2f\n", Salario, abono);
        abonoMinimo++;
    }

    GastoTotal += abono;

    if (MaiorAbono < abono)
    {
        MaiorAbono = abono;
    }
  
    
    Colaboradores++;
}
printf("Foram processados %d colaboradores\n", Colaboradores);
printf("Total gasto com abonos: R$ %.2f\n ", GastoTotal);
printf("Valor minimo foi pago a %d colaboradores\n", abonoMinimo);
printf("Maior valor de abono pago: R$ %.2f \n", MaiorAbono);



}