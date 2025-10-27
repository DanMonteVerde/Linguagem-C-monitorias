#include <stdio.h>
int main() {
    int num1, num2;
    char operacao;

    printf("Digite dois números e uma operação (s para soma, m para multiplicação): ");
    scanf("%d %d %c", &num1, &num2, &operacao);

    if (num1 == num2)
        printf("Números iguais.\n");
    else
        printf("Números diferentes.\n");

    if (operacao == 's')
        printf("Soma: %d\n", num1 + num2);
    else if (operacao == 'm')
        printf("Multiplicação: %d\n", num1 * num2);
    else
        printf("Operação inválida.\n");

    return 0;
}