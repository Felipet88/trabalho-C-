#include <stdio.h>

int main() {
    float kwh, fatura;

    printf("Digite o consumo mensal (kWh): ");
    scanf("%f", &kwh);

    if (kwh <= 100) {
        fatura = kwh * 0.40;
    } else if (kwh <= 250) {
        fatura = kwh * 0.65;
    } else {
        fatura = kwh * 0.90;
    }

    fatura = fatura + 15.00;

    printf("Valor da fatura: R$ %.2f\n", fatura);

    return 0;
}
