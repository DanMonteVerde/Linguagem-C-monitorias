#include <stdio.h>
int main() {
    char nome[50];
    float nota;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a nota final do aluno: ");
    scanf("%f", &nota);

    printf("Aluno: %s, Nota Final: %.2f\n", nome, nota);

    return 0;
}