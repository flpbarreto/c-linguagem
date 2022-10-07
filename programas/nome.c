#include <stdio.h>
int main() {
	int N, fat=1, cont=1;
	printf("digite um valor para n: ");
	scanf("%d", &N);
	while(cont<=N) {
		fat*=cont;
		cont++;
	}
	printf("fat = %d", fat);
	return 0;
}
