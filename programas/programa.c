#include <stdio.h>
int main() {
 	int n, c=1;
 	float h=0;
 	scanf("%d", &n); fflush(stdin);
 	while (c<=n) {
 		h=h+(1.0/c);
 		c++;
	}
	printf("h vale %f", h);
 	return 0;
}
