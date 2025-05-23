#include <stdio.h>
int main(){
 int num;
 printf("Digite um numero e te direi se ele eh primo ou nao\n");
 scanf("%d", &num);
if(num == 2 || num == 3 || num == 5){
        printf("O numero eh primo\n");
    }else if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0){
     printf("O numero nao eh primo\n");
    }else{
        printf("O numero eh primo\n");
    }
     
}