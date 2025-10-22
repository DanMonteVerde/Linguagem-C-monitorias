#include <stdio.h>
int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
        printf("Você pode votar.\n");
    else
        printf("Você não pode votar.\n");

    return 0;
}