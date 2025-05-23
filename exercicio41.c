#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int equacao;
    float num1, num2, resultado;
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);
    printf("Digite a equacao: \n");
    printf("1 - soma \n");
    printf("2 - subtracao \n");
    printf("3 - multiplicacao \n");
    printf("4 - divisao \n");
    scanf("%d", &equacao);

    switch (equacao)
    {
    case 1:
        resultado = num1 + num2;
        break;
    case 2:
        resultado = num1 - num2;
        break;
    case 3:
        resultado = num1 * num2;
        break;
    case 4:   
        resultado = num1 / num2;
        break;
    default:
    printf("Erro, a equacao nao existe \n");
    break;
    }
  if (resultado / 2 ==0){
    printf("O resultado é par \n");
  }else{    
    printf("O resultado é impar \n");
  } 
  if (resultado > 0){
    printf("O resultado é positivo \n");    
  
  }
  else {
    printf("O resultado é negativo \n");
  }
  bool isInt;
  if ((isInt = resultado == (int)resultado))
  {
      printf("O numero é inteiro \n");
  }else
  {
      printf("O numero é decimal \n");
  }
  
  printf("O resultado é: %.2f \n", resultado);
    }
