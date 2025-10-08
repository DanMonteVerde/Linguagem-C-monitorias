#include <stdio.h>

int main(){
    float massa, altura;

    scanf("%f %f", &massa,&altura);

    printf("O resultado do IMC é: %.2f", (massa/(altura*altura)));
}