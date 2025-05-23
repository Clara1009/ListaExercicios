#include <stdio.h>
#include <stdlib.h>

int main(){
int num[5];
printf("Digite cinco numeros inteiros: \n");
scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
for (size_t i = 0; i < 5; i++)
{
    if(num[i] % 2 != 0){
        printf("%d ", num[i]);
}
}
printf("são impares\n"); 

return 0;
}