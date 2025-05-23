#include <stdio.h>

int main(){

int num;
printf("Digite um numero inteiro: ");
scanf("%d", &num);
for (int i = 0; i < 11; i++)
{
    printf("%d x %d = %d\n", num, i, num * i);
}


}