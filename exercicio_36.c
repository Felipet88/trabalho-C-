#include <stdio.h>

int main(void) {
    int k, pares = 0, impares = 0;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &k);
    if (k <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= k; i++) {
        if (i % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}
