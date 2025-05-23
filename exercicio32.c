#include <stdio.h>

int main(){

    float nota1, nota2,media;
    
    printf("Digite a primeira nota \n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota \n");
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
    
    if(media>=90 && media<=100){
        printf("A media do aluno foi %f ele foi aprovado" , media);
    }else{
        if(media>=75 && media<90){
            printf("A media do aluno foi %f ele foi aprovado" , media);}
            else {
                if(media>=60 && media<75){
                    printf("A media do aluno foi %f ele foi aprovado" , media);}
                    else{
                if(media>=40 && media<60){
                    printf("A media do aluno foi %f ele foi reprovado" , media);}
                else{
                    printf("A media do aluno foi %f ele foi reprovado" , media);} 
            
            }
            }
        
    }

    return 0;
}