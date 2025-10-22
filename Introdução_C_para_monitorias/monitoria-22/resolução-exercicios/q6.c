#include <stdio.h>
int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Número par.\n");
    else
        printf("Número ímpar.\n");

    return 0;
}