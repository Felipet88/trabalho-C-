#include <stdio.h>

int main() {
    int idade, contribuicao;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de contribuicao (anos): ");
    scanf("%d", &contribuicao);

    if (idade >= 65 || contribuicao >= 35) {
        printf("Aposentadoria autorizada.\n");
    } else {
        printf("Requisitos nao preenchidos. Aposentadoria negada.\n");
    }

    return 0;
}
