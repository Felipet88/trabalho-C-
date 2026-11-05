#include <stdio.h>

int main(void) {
    long long n;
    int divisoes = 0;
    printf("Digite um inteiro maior que 1: ");
    scanf("%lld", &n);
    if (n <= 1) {
        printf("O numero deve ser maior que 1.\n");
        return 1;
    }

    while (n > 1) {
        n = n / 2;
        divisoes++;
    }
    printf("Numero de divisoes: %d\n", divisoes);
    return 0;
}
