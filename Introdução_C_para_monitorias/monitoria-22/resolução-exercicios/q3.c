#include <stdio.h>
int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);
    if (num2 != 0)
        printf("Divisão: %.2f\n", (float)num1 / num2);
    else
        printf("Erro: divisão por zero.\n");

    return 0;
}