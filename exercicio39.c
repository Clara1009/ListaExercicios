#include <stdio.h>
int main(){
int num;
print("Digite um numero: \n");
scanf("%d", &num);
if (num%2==0){
    printf("O numero é par \n");
}else{
    printf("O numero é impar \n");
}
}