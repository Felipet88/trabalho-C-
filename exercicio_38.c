#include <stdio.h>

int main(void) {
    int soma = 0;
    printf("Multiplos de 3 e 5 entre 1 e 100: ");
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma: %d\n", soma);
    return 0;
}
