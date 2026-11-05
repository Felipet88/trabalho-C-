#include <stdio.h>

int main() {
    int requisicoes = 1500;
    float memoria = 68.5;
    char estado = 'A';
    char protocolo[] = "TCP";

    printf("Servidor: requisicoes=%d, memoria=%.2f%%, "
           "estado=%c, protocolo=%s\n",
           requisicoes, memoria, estado, protocolo);

    return 0;
}
