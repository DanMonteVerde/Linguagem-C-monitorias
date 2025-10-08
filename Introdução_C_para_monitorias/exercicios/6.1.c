#include <stdio.h>

int main(){
    float min, seg;

    printf("Escreva o minuto para converter para segundos: ");
    scanf("%f", &min);

    seg = (min*60);

    printf("%.0fm em s é igual a: %.0fs", min, seg);
}