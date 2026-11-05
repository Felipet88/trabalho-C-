#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fatorial = 1;
    printf("Digite um inteiro nao negativo (0 a 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Informe um valor de 0 a 20.\n");
        return 1;
    }

    for (int i = n; i >= 1; i--) {
        fatorial *= (unsigned long long)i;
    }
    printf("%d! = %llu\n", n, fatorial);
    return 0;
}
