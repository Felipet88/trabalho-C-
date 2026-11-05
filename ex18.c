#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número:");
    scanf("&d", &num);
    if (num % 2 != 0) {
        printf("O número que digitou é par.");
    } else {
        printf("O número que digitou é ímpar.");
    }
    
}