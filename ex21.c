#include <stdio.h>

int main() {
    float total;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &total);

    if (total > 250.0) {
        total = total - total * 0.10;
    }

    printf("Valor final a pagar: R$ %.2f\n", total);

    return 0;
}
