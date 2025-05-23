#include <stdio.h>
int main(){
    char caracter[10], consoante[10], vogal[10];
    int u = 0, p = 0;
    printf("digite 10 letras \n");
    for (int i = 0; i < 10; i++)
    {
        printf("digite aqui: " );
        scanf(" %c", &caracter[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if( caracter[i] != 'a' && caracter[i] != 'e' && caracter[i] != 'i' && caracter[i] != 'o' && caracter[i] != 'u'){
            consoante[p] = caracter[i];
            p++;
        }else{
            vogal[u] = caracter[i];
            u++;
        }
    }

    printf( "consoante:");
    for (int i = 0; i < p; i++)
    {
        printf(" %c ", consoante[i]);
    }
    printf( "\nvogal:");
    for (int i = 0; i < u; i++)
    {
        printf(" %c ", vogal[i]);
    }

}