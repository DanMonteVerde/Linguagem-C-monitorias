#include <stdio.h>

int main(){
    float a, b;

    printf("Informe o valor de a: ");
    scanf("%f", &a);

    printf("Informe o valor de b: ");
    scanf("%f", &b);

    printf("%f\n%f\n%f\n%f", a*b, a/b, a+b, a-b);


}