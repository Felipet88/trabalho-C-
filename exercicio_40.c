#include <stdio.h>

int main(void) {
    int a1, razao, n;
    printf("Termo inicial, razao e quantidade: ");
    scanf("%d %d %d", &a1, &razao, &n);
    if (n <= 0) {
        printf("A quantidade deve ser positiva.\n");
        return 1;
    }

    printf("PA: ");
    for (int i = 0; i < n; i++) {
        long long termo = (long long)a1 + (long long)i * razao;
        if (i > 0) printf(", ");
        printf("%lld", termo);
    }
    printf("\n");
    return 0;
}
