#include <stdio.h>
int main(void){
    int num,fatorial=1;
    printf("Digite um numero inteiro para eu transforma-lo em fatorial \n");
    printf("porem ele tem que ser menor que 17 e maior que 0 \n");
    printf("Aperte 0 para o programa sera encerrado\n");
    while (1)
    {
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num < 17 || num > 0)
    {
       for(int i = num; i > 0; i--){
        fatorial *= i;
    }
     printf("O fatorial de %d eh: %d \n", num, fatorial); 
    }else if(num==0){
        break;
    }else{
        printf("O numero eh maior que 16, tente novamente\n");
    }
    
    }
    
    return 0;
}