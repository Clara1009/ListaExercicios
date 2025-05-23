#include <stdio.h>
#include <string.h>
int main(){
    char name[20], senha[20];
    printf("Digite seu nome: ");
    scanf("%49s", name);
    printf("Digite sua senha: ");
    scanf("%49s", name);

if (strcmp(name, senha) == 0){
    printf("Nome e senha iguais\n");
}else{  
    printf("Nome e senha diferentes\n");
}
  
}