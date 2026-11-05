#include <stdio.h>

int main() {
float temperatura;
float maior, menor;

for (int i = 1; i <= 7; i++) {
    printf("Digite a temperatura do dia %d: ", i);
    scanf("%f", &temperatura);

    if (i == 1) {
        maior = temperatura;
        menor = temperatura;
    } else {
        if (temperatura > maior) {
            maior = temperatura;
        }

        if (temperatura < menor) {
            menor = temperatura;
        }
    }
}

printf("\nMaior temperatura: %.2f\n", maior);
printf("Menor temperatura: %.2f\n", menor);

return 0;

}