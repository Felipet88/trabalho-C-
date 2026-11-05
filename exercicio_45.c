#include <stdio.h>

int main(void) {
    float nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    while (nota < 0.0f || nota > 10.0f) {
        printf("Nota invalida! Digite uma nota de 0 a 10: ");
        scanf("%f", &nota);
    }

    printf("Nota valida: %.1f\n", nota);
    return 0;
}
