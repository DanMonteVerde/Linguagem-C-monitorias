#include <stdio.h>
int main() {
    float num1, num2, num3, media;
    printf("Digite três números reais: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    if (media >= 7)
        printf("A média é %.2f, que é maior ou igual a 7.\n", media);
    else
        printf("A média é %.2f, que é menor que 7.\n", media);

    return 0;
}