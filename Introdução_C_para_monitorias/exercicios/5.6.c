// // a)
// #include <stdio.h>

// int main() {
//     float x, y, z, media;

//     scanf("%f%f%f", &x, &y, &z);
//     media = (x+y+z) / 3;
//     printf("O valor calculado da media entre os números %f, %f e %f foi: %f", x,y,z,media);
//     return 0;
// }   

// // b)
// #include <stdio.h>

// int main() {
//     float x, y, z, media;

//     scanf("%f%f%f", &x, &y, &z);
//     media = x+y+z / 3;
//     printf("O valor calculado da media entre os números %f, %f e %f foi: %f", x,y,z,media);
//     return 0;
// }  

// c)
// #include <stdio.h>

// int main() {
//     float x, y, media;

//     scanf("%f%f", &x, &y);
//     media = (x+y) / 3;
//     printf("O valor calculado da media entre os números %f e %f foi: %f", x,y,media);
//     return 0;
// } 

// d)
// #include <stdio.h>

// int main() {
//     float n1, n2, n3, n4;

//     scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
//     printf("O valor do produto dos números %f, %f, %f, %f é: %f", n1, n2, n3, n4, (n1*n2*n3*n4));
//     return 0;
// }

// e)

// #include <stdio.h>

// int main() {
//     int n1, n2;

//     scanf("%d%d", &n1, &n2);
//     printf("O valor do quociente da divisão entre %d e %d é %d. O valor do resto entre %d e %d é %d.",  n1, n2, n1/n2, n1,n1, n1%n2);
//     return 0;
// }

// f)

#include <stdio.h>

int main() {
    int n1, n2, soma;
    scanf("%d%d", &n1, &n2);
    soma = (n1+n2);

    int n3;
    scanf("%d", &n3);
    printf("%d", (soma-n3));


    return 0;
}