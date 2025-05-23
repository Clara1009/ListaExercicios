#include <stdio.h>
int main(){
 int num ,contadorP = 0, contadorNP = 0;

 printf("Digite aum numero para analizar qual eh primo\n");
 scanf("%d", &num);
for (int i = num; i > 1; i--)
{ 

if(i == 2 || i == 3 || i == 5){
        printf("%d eh primo\n", i);
        contadorP++;
    }else if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0){

     printf("%d nao eh primo\n", i);
     for (int j = 1; j <= i; j++) { 
            if (i % j == 0) {
                contadorNP++;
            }
        }
    }else{

        printf("%d eh primo\n", i);
        contadorP++;
    }
   
}
    printf("Para descobrir quais dos %d nao sao primos foram divididas %d vezes\n", num, contadorNP);
    printf("Para descobrir quais dos %d sao primos foram divididas %d vezes\n", num, contadorP);
    printf("no total = %d divisoes\n\n", contadorNP + contadorP);

}



  