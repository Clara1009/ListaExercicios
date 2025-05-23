#include <stdio.h>

int main(){
int vetor1[10],j = 0, p = 0, l = 0;
char vetor2[10], vetor4[30][20];
float  vetor3[10];
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
printf("Agora digite 10 numeros quebrados:\n");

for (int i = 0; i < 10; i++)
{
    printf("%d: ", i + 1);
    scanf(" %f" , &vetor3[i]); 
   
}



 for (int i = 0; i < 30; i++) {
        if (i % 3 == 0) {
            sprintf(vetor4[i], "%d", vetor1[j]);
            j++;
        } else if (i % 3 == 1) {
            sprintf(vetor4[i], "%c", vetor2[p]);
            p++;
        } else {
            sprintf(vetor4[i], "%.2f", vetor3[l]);
            l++;
        }
    }

    for (int i = 0; i < 30; i++) {
        printf("%s, ", vetor4[i]);
    }   

}