#include <stdio.h>

int main() {
    int agencia = 1234;
    int conta = 567890;
    float valor = 750.50;
    char canal = 'A';

    printf("=== COMPROVANTE ===\n\n");
    printf("Agencia remetente: %d\n\n", agencia);
    printf("Conta de destino: %d\n\n", conta);
    printf("Valor transferido: R$ %.2f\n\n", valor);
    printf("Canal de atendimento: %c\n\n", canal);
    printf("===================\n");

    return 0;
}
