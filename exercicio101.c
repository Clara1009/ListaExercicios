#include <stdio.h>

int main(){
int vetor1[10],j = 0, p = 0;
char vetor2[10], vetor3[20];
printf("digite 10 numeros inteiros: \n");
for (int i = 0; i < 10; i++)
{
    printf("%d: ", i + 1);
    scanf("%d" , &vetor1[i]);
   
}
printf("Agora digite 10 letras:\n");

for (int i = 0; i < 10; i++)
{
    printf("%d: ", i + 1);
    scanf(" %c" , &vetor2[i]); 
   
}

for (int i = 0; i < 20; i++)
{
    if ( i % 2 == 0)
    {
        vetor3[i] = vetor1[j];
        j++;
    }else{
        vetor3[i] = vetor2[p];
        p++;
    }
    
}

for (int i = 0; i < 20; i++)
{
    if (i % 2 == 0)
        printf("%d, ", vetor3[i]);
    else
        printf("%c, ", vetor3[i]); 
}

}