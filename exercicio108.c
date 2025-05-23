#include <stdio.h>
int main(){
    int Sistemas[6] ={0}, votos,Total_Votos =0, melhor=0,p=0;
    char *Tiposistema[6] = {"Windows Server", "Unix", "Linux", "Netware", "Mac OS", "Outro"};
    printf("Enquete: qual o melhor sistema operacional?");
    printf("1- Windows Server \n2- Unix \n3- Linux \n4- Netware \n5- Mac OS \n6- Outro\n");
    while (1)
    {
        printf("Numero referente ao Sistema Operacional: ");
        scanf("%d", &votos);
        if(votos == 0){
            break;
        }
        if (votos >= 1 && votos <= 6)
        {
           Sistemas[votos-1]++;
           Total_Votos++;
        }
        
    }
    float melhorPorcento;
    for (int i = 0; i < 6; i++)
    {
        
        //Nova coisa que eu aprendi: 
        //(Total_Votos > 0) isso é como o if e verifica se total de votos é maior que 0
        //e o sinal de "?" é como o if e diz o que precisa ser feito se a afirmação é verdadeira
        // Ja o ":" faz o papel do else

        float porcentagem = (Total_Votos > 0) ? (Sistemas[i] * 100.0) / Total_Votos : 0.0;
        printf("%s: %.2f%%\n", Tiposistema[i], porcentagem);
        if (melhor<Sistemas[i])
        {
            melhor =Sistemas[i];
            p=i;
            melhorPorcento = porcentagem;
        }
       
    }
     printf("O Sistema Operacional mais votado foi o %s, com %d votos, correspondendo a %.2f%% dos votos.", Tiposistema[p],melhor, melhorPorcento);
    
}