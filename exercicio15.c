#include <stdio.h>

int main() {
    float n1, n2, n3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0)) / 10.0;

    printf("Media ponderada: %.2f\n", media);

    return 0;
}
