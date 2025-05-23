#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[10];
    printf("Digite dez numeros inteiros: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            printf("%d eh par\n", num[i]);
        } else {
            printf("%d eh impar\n", num[i]);
        }
    }
    return 0;
}
