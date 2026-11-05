#include <stdio.h>

int main(void) {
    int inicio, fim, passo;
    printf("Limite inferior, superior e passo: ");
    scanf("%d %d %d", &inicio, &fim, &passo);

    if (inicio > fim || passo <= 0) {
        printf("Informe inicio <= fim e passo positivo.\n");
        return 1;
    }

    printf("Crescente: ");
    for (int i = inicio; i <= fim; i += passo) {
        if (i != inicio) printf(", ");
        printf("%d", i);
    }

    printf("\nDecrescente: ");
    for (int i = fim; i >= inicio; i -= passo) {
        if (i != fim) printf(", ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
