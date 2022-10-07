#include <stdio.h>
#include <math.h>
int main () {
	float a, b;
	printf("digite um valor para A: ");
	scanf("%f", &a);
	printf("digite um valor para B: ");
	scanf("%f", &b);
	if (a>b) {
		printf("o valor A eh maior que o valor B");
	}
	if (a<b) {
	    printf("o valor A eh menor que o valor B");
    }
    if (a==b) {
	    printf("o valor A eh igual ao valor B");
    }
	return 0;
}
