#include <stdio.h>

int main(){
int nums[10], somaQuadrado = 0;

printf("digite 10 numeros: \n");
for (int i = 0; i < 10; i++)
{
    printf("%d: ", i + 1);
    scanf("%d" , &nums[i]);
    somaQuadrado += (nums[i] * nums[i]);
}
for (int i = 0; i < 10; i++)
{
    printf("%d * %d ", nums[i], nums[i]);
    if (i < 9)
    {
        printf("+ ");
    }else{
        printf("= %d", somaQuadrado);
    }
    
}
}