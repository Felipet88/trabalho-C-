#include <stdio.h>

int main(void) {
    int opcao = -1;
    double a, b;

    while (opcao != 0) {
        printf("\n1 - Somar\n2 - Multiplicar\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
            if (opcao == 1) {
                printf("Soma: %.2f\n", a + b);
            } else {
                printf("Produto: %.2f\n", a * b);
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }
    }
    printf("Sistema encerrado.\n");
    return 0;
}
