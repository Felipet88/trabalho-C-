#include <stdio.h>

int main() {
    float num, den, res;

    printf("Digite o numerador: ");
    scanf("%f", &num);

    printf("Digite o denominador: ");
    scanf("%f", &den);

    if (den != 0.0) {
        res = num / den;
        printf("Resultado da divisao: %.2f\n", res);
    } else {
        printf("Erro: divisao por zero nao e permitida!\n");
    }

    return 0;
}
