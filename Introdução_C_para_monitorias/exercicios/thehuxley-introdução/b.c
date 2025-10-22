#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	float n;
	scanf("%f", &n);
	
	printf("%.2f", ((n*10) / 100 + n));

}