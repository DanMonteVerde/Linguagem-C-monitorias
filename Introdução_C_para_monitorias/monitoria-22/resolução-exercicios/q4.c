#include <stdio.h>
int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0 && num2 > 0)
        printf("Soma: %d\n", num1 + num2);
    else
        printf("Erro: pelo menos um dos números não é positivo.\n");

    return 0;
}