#include <stdio.h>
int main() {
	int x, y;
	char operacao;
	float pi=3.14159265, r;
	printf("digite o primeiro valor ");
	scanf("%d", &x); fflush(stdin);
	printf("qual eh a operacao? ");
	operacao=getchar();
	printf("digite o segundo valor ");
	scanf("%d", &y); fflush(stdin);
	switch(operacao) {
		case'+':
			printf("%d + %d = %d", x, y, x+y);
			break;
		case'-':
			printf("%d - %d=%d", x, y, x-y);
			break;
		case'*':
			printf("%d * %d=%d", x, y, x*y);
			break;
		case'/':
			printf("%d / %d=%d", x, y, x/y);
			break;
		case'%':
            printf("%d", x % y);
            break;
        case'cos': //cosseno
			r=cos(x*pi/180);
		    printf("o cosseno de %d eh %f", x, r);
		    break;
		case's': //seno
		    r=sin(x*pi/180);
		    printf("o seno de %d eh %f", x, r);
		    break;
	    case't': //tangente
	    	r=tan(x*pi/180);
	    	printf("a tangente de %d eh %f", x, r);
	    	break;
	    case'a': //arccos
	    	r=acos(x)*180.0/pi;
	    	printf("o arc cosseno de %d eh %f", x, r);
	    	break;
	    case'b': //arcsen
	    	r=asin(x)*180.0/pi;
	    	printf("o arc seno de %d eh %f", x, r);
	    	break;
	    case'c': //arctan
	    	r=atan(x)*180.0/pi;
	    	printf("o arc tangente de %d eh %f", x, r);
	    	break;
	    case'e': //exponencial
	        r=exp(x);
			printf("o exponencial de %d eh %f", x, r);
			break;
		case'l': //log
		    r=log(x);
			printf("log(%d) = %f", x, r);
			break;
		case''
	}
	return 0;
}
