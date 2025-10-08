#include <stdio.h>

int main(){
    int dinheiro, troco;

    scanf("%d", &dinheiro);

    troco = (dinheiro%7);

    printf("%d", troco);
}