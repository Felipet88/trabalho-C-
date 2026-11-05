#include <stdio.h>

int main(void) {
    double popA = 80000.0, popB = 100000.0;
    int anos = 0;

    while (popA <= popB) {
        popA *= 1.03;
        popB *= 1.015;
        anos++;
    }

    printf("Anos necessarios: %d\n", anos);
    printf("Populacao A: %.0f\n", popA);
    printf("Populacao B: %.0f\n", popB);
    return 0;
}
