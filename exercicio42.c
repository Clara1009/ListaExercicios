#include <stdio.h>

int main(){
    
    printf("Voê é uma pessoa suspeita de assassinar a vitima\n");
    printf("respondam as seguintes quetoes\n");
    printf("aperte 0 para sim e  1 para não\n");

    for (int j = 0; j < 5; j++)
    {
        int perguntas[5] ;
    printf("Telefonou para a vitima? ");
    scanf("%d", &perguntas[0]);
    printf("Esteve no local do crime? ");
    scanf("%d", &perguntas[1]);
    printf("Mora perto da vitima? ");
    scanf("%d", &perguntas[2]);
    printf("Devia para a vitima? ");
    scanf("%d", &perguntas[3]);
    printf(" trabalhou com a vitima? ");
    scanf("%d", &perguntas[4]);

    int sim = 0;
    for(int j = 0; j < 5; j++){
        if (perguntas[j] == 0)
        {
            sim++;
        }
    }

    if (sim == 2)
    {
        printf("Suspeita\n");
    }else if(sim == 3 || sim == 4) {
        printf("Cumplice\n");
    }else if(sim == 5) {
        printf("Assassino\n");
    }else if (sim == 0){
        printf("Inocente\n");
    }

    }
    
    
return 0;
}