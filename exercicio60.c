#include <stdio.h>
int main(){
    int n = 0;
    printf("digite o numero de termos da sequencia: ");
    scanf("%d", &n);
    int a[n];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    printf("a sequencia de fibonacci e:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}