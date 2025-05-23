
#include <stdio.h>
int main(){
int anoAtual;  

printf("Digite ano atual \n");
scanf("%d", &anoAtual);

if (anoAtual % 4 == 0 && anoAtual % 100 != 0){
    printf("O ano %d e bissexto \n", anoAtual);
    return 0;
}else if (anoAtual % 4 == 0 && anoAtual % 100 == 0){
    printf("O ano %d nao e bissexto \n", anoAtual);
    return 0;
}else if (anoAtual % 4 != 0 ){
    printf("O ano %d nao e bissexto \n", anoAtual);
    return 0;
}
}