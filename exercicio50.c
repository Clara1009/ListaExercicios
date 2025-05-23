
int main(){
    float  paisA , paisB, crecAnoA, crecAnoB;
    int ano;
    
    printf("Digite a populacao do pais A: ");
    scanf("%f", &paisA);
    printf("Digite a populacao do pais B: ");
    scanf("%f", &paisB);    
    printf("Digite a taxa de crescimento do pais A: ");
    scanf("%f", &crecAnoA);
    printf("Digite a taxa de crescimento do pais B: ");
    scanf("%f", &crecAnoB); 

    for (  ano = 0; paisA<paisB;  ano++ ){
       paisA= (paisA*100)/crecAnoA;
       paisB= (paisB*100)/crecAnoB;
    }
    
    printf("Em %d anos a cidade A ira alcançar ou ultrpaçar a B \n", ano );
}