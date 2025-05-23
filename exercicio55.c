#include <stdio.h>
int main (){
    int num1, num2; 
    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &num1, &num2);
printf("Os numeros entre %d e %d sao: ", num1, num2);
    for(int i = num1 + 1; i < num2; i++){
        printf("%d ", i);
    }


}