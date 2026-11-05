#include <stdio.h>

int main(void) {
    int n;
    double valor, soma = 0.0;

    printf("Quantas medicoes? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("A quantidade deve ser positiva.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("Valor %d: ", i);
        scanf("%lf", &valor);
        soma += valor;
    }

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", soma / n);
    return 0;
}
