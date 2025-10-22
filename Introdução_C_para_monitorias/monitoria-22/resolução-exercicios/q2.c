#include <stdio.h>
int main() {
    float altura;
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    if (altura < 1.60)
        printf("Você é baixo(a).\n");
    else if (altura >= 1.60 && altura <= 1.80)
        printf("Você é de altura média.\n");
    else
        printf("Você é alto(a).\n");

    return 0;
}