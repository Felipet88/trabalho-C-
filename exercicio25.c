#include <stdio.h>

int main() {
    float media, frequencia;

    printf("Digite a media semestral: ");
    scanf("%f", &media);
    printf("Digite a frequencia (%%): ");
    scanf("%f", &frequencia);

    if (media >= 6.0 && frequencia >= 75.0) {
        printf("Aprovado.\n");
    } else if (media >= 4.0 && media < 6.0 && frequencia >= 75.0) {
        printf("Recuperacao.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}
