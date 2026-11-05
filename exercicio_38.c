#include <stdio.h>

int main() {
int soma = 0;

for (int i = 1; i <= 100; i++) {

    if (i % 3 == 0 && i % 5 == 0) {
        printf("%d\n", i);
        soma = soma + i;
    }

}

printf("A soma dos multiplos e: %d", soma);

return 0;

}