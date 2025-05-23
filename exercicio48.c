#include <stdio.h>
#include <string.h>
int main (){
    char nome[50], sexo, EstadoCivil;
    float salario;
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = 0; 
    if (strlen(nome) > 3 ){
        printf("Nome valido\n");
    }{
        printf("Nome invalido\n");
    }
 
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'F'){
        printf("Sexo valido\n");
    }else{
        printf("Sexo invalido\n");}


    
    printf("Digite seu estado civil (C/S/V/D): ");
    scanf(" %c", &EstadoCivil);

    if (EstadoCivil == 'C' || EstadoCivil == 'S' || EstadoCivil == 'V' || EstadoCivil == 'D'){
        printf("Estado civil valido\n");
    }else{  
        printf("Estado civil invalido\n");}



    printf("Digite seu salario: ");
    scanf("%f", &salario);
    if (salario < 0){
        printf("Salario invalido\n");
    }else{
        printf("Salario valido\n");}

    }
