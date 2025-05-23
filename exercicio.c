// faltava informação na 45 e troquei pela 49

int main(){
    float  paisA = 80000, paisB = 200000, crecAnoA= 3, crecAnoB = 1.5;
    int ano;

    for (  ano = 0; paisA<paisB;  ano++ ){
       paisA= (paisA*100)/crecAnoA;
       paisB= (paisB*100)/crecAnoB;
    }
    
    printf("Em %d anos a cidade A ira alcançar ou ultrpaçar a B \n", ano );
}