#include <stdio.h>

int main() {
    char nome[] = "Circuito Integrado CI-100";
    float tensao = 5.0;
    long int lote = 123456;
    char eficiencia = 'A';

    printf("=== FICHA TECNICA ===\n");
    printf("Componente: %s\n", nome);
    printf("Tensao nominal: %.1f V\n", tensao);
    printf("Lote de fabricacao: %ld\n", lote);
    printf("Classe de eficiencia: %c\n", eficiencia);

    return 0;
}
