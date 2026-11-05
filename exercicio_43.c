#include <stdio.h>

int main(void) {
    int n;
    double nota1, nota2, media, somaMedias = 0.0;
    printf("Quantidade de alunos: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("A quantidade deve ser positiva.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("Notas do aluno %d: ", i);
        scanf("%lf %lf", &nota1, &nota2);
        media = (nota1 + nota2) / 2.0;
        somaMedias += media;
        printf("Media: %.2f - %s\n", media,
               media >= 6.0 ? "Aprovado" : "Reprovado");
    }

    printf("Media da turma: %.2f\n", somaMedias / n);
    return 0;
}
