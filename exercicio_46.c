#include <stdio.h>

int main(void) {
    int idade, maiorIdade = -1, quantidade = 0;
    double salario, somaSalarios = 0.0;
    printf("Idade (negativa para encerrar): ");
    scanf("%d", &idade);

    while (idade >= 0) {
        printf("Salario mensal: ");
        scanf("%lf", &salario);
        somaSalarios += salario;
        quantidade++;
        if (idade > maiorIdade) maiorIdade = idade;

        printf("Idade (negativa para encerrar): ");
        scanf("%d", &idade);
    }

    printf("Entrevistados: %d\n", quantidade);
    if (quantidade > 0) {
        printf("Media salarial: %.2f\n", somaSalarios / quantidade);
        printf("Maior idade: %d\n", maiorIdade);
    } else {
        printf("Nenhum cidadao entrevistado.\n");
    }
    return 0;
}
