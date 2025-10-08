#include <stdio.h>

int main(){
    float base, altura, area;

    printf("Informe a base do seu triângulo: ");
    scanf("%f", &base);

    printf("Informe a altura do seu triângulo: ");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("A área do triâmgulo é: %.2f m ou cm.", area);
}