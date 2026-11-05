#include <stdio.h>

int main(void) {
    int numero, quantidade = 0;
    long long soma = 0;
    printf("Digite um numero (0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero;
        quantidade++;
        printf("Digite outro numero (0 para encerrar): ");
        scanf("%d", &numero);
    }

    printf("Quantidade: %d\n", quantidade);
    printf("Soma: %lld\n", soma);
    return 0;
}
