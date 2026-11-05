#include <stdio.h>

int main() {
    float massa, altura, imc;

    printf("Digite a massa (kg): ");
    scanf("%f", &massa);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("IMC: %.1f\n", imc);

    if (imc < 18.5) {
        printf("Magreza.\n");
    } else if (imc < 25.0) {
        printf("Peso adequado.\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }

    return 0;
}
