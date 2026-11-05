#include <stdio.h>

int main(void) {
    float temperatura, maxima = 0.0f, minima = 0.0f;
    for (int dia = 1; dia <= 7; dia++) {
        printf("Temperatura do dia %d: ", dia);
        scanf("%f", &temperatura);

        if (dia == 1) {
            maxima = temperatura;
            minima = temperatura;
        } else {
            if (temperatura > maxima) maxima = temperatura;
            if (temperatura < minima) minima = temperatura;
        }
    }
    printf("Maior temperatura: %.1f\n", maxima);
    printf("Menor temperatura: %.1f\n", minima);
    return 0;
}
