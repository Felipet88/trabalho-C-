#include <stdio.h>

int main() {
    int id, bloqueado;

    printf("Digite o numero do cracha: ");
    scanf("%d", &id);
    printf("Usuario suspenso? (1 = sim, 0 = nao): ");
    scanf("%d", &bloqueado);

    if (id == 1001 && !bloqueado) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}
