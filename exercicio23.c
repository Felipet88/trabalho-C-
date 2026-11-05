#include <stdio.h>

int main() {
    int estoque;

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &estoque);

    if (estoque < 50) {
        printf("ALERTA: estoque abaixo do minimo de seguranca. Necessario repor com urgencia!\n");
    } else {
        printf("Estoque estavel.\n");
    }

    return 0;
}
