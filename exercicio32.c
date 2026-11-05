#include <stdio.h>

int main() {
    float renda, parcela;
    int situacao;

    printf("Digite a renda mensal bruta: R$ ");
    scanf("%f", &renda);
    printf("Digite o valor da parcela: R$ ");
    scanf("%f", &parcela);
    printf("Situacao cadastral (0 = adimplente, 1 = inadimplente): ");
    scanf("%d", &situacao);

    if (parcela <= renda * 0.30 && situacao == 0) {
        printf("Emprestimo aprovado.\n");
    } else {
        printf("Emprestimo recusado.\n");
    }

    return 0;
}
