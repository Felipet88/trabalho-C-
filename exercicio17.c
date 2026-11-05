#include <stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Você é maior de idade e pode dirigir.");
    } else {
        printf("Você é menor de idade e pela lei não pode dirigir");
    }
}
