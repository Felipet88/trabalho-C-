#include <stdio.h>

int main(void) {
    int codigo, formaPagamento, quantidadeItens = 0;
    double preco, totalBruto = 0.0, desconto = 0.0;
    double totalFinal, valorRecebido = 0.0, troco = 0.0;

    printf("Codigo do item (0 para finalizar): ");
    scanf("%d", &codigo);

    while (codigo != 0) {
        printf("Preco unitario: R$ ");
        scanf("%lf", &preco);
        if (preco >= 0.0) {
            totalBruto += preco;
            quantidadeItens++;
        } else {
            printf("Preco invalido: item desconsiderado.\n");
        }
        printf("Codigo do item (0 para finalizar): ");
        scanf("%d", &codigo);
    }

    printf("Total bruto: R$ %.2f\n", totalBruto);
    printf("Pagamento (1 - dinheiro, 2 - cartao): ");
    scanf("%d", &formaPagamento);

    if (formaPagamento == 1) {
        desconto = totalBruto * 0.05;
        totalFinal = totalBruto - desconto;
        printf("Total com desconto: R$ %.2f\n", totalFinal);
        printf("Valor recebido: R$ ");
        scanf("%lf", &valorRecebido);
        while (valorRecebido < totalFinal) {
            printf("Valor insuficiente. Informe outro valor: R$ ");
            scanf("%lf", &valorRecebido);
        }
        troco = valorRecebido - totalFinal;
    } else if (formaPagamento == 2) {
        totalFinal = totalBruto;
    } else {
        printf("Forma de pagamento invalida.\n");
        return 1;
    }

    printf("\n--- EXTRATO FISCAL ---\n");
    printf("Itens: %d\n", quantidadeItens);
    printf("Total bruto: R$ %.2f\n", totalBruto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Forma de pagamento: %s\n",
           formaPagamento == 1 ? "Dinheiro" : "Cartao");
    printf("Total pago: R$ %.2f\n", totalFinal);
    if (formaPagamento == 1) {
        printf("Valor recebido: R$ %.2f\n", valorRecebido);
        printf("Troco: R$ %.2f\n", troco);
    }
    return 0;
}
