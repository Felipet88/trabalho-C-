#include <stdio.h>

int main() {
    float a, b, absA, absB;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    absA = a;
    if (a < 0) {
        absA = -a;
    }
    absB = b;
    if (b < 0) {
        absB = -b;
    }

    if (absA > absB) {
        printf("O primeiro numero (%.2f) tem maior magnitude.\n", a);
    } else if (absB > absA) {
        printf("O segundo numero (%.2f) tem maior magnitude.\n", b);
    } else {
        printf("Os dois numeros tem a mesma magnitude.\n");
    }

    return 0;
}
