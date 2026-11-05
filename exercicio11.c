#include <stdio.h>

int main() {
    int horas;
    float valorHora;
    float salarioBruto;
    float previdencia;
    float imposto;
    float salarioLiquido;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salarioBruto = horas * valorHora;
    previdencia = salarioBruto * 0.11;
    imposto = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - previdencia - imposto;

    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Desconto previdenciario: R$ %.2f\n", previdencia);
    printf("Imposto de renda: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
