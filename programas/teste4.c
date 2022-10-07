#include <stdio.h>
#include <math.h>
int main() { //EXERCICIO DE AULA
    int x,z=1,n,soma=0, menor=0,maior=0;
    long int prod=1;
    //printf("Prod %ld\n", prod);
    printf("digite o valor de n:\n");
    scanf("%d", &n);
    //printf("digite um valor:\n");
    scanf("%d", &x);
    menor = x;
    maior = x;
    //prod=x;
    do {
        if (x%2!=0) {
            soma=x+soma;
            if (x<menor){
                menor=x;
            }
        };
        if (x%2==0 && x!=0) {
            prod = prod%n ;
            //printf("Prod %d | %ld \t\n", x, prod);
         };
         
        if (x>maior && x%2==0){
            maior = x;
           }
        z++;
        //printf("digite um valor:\n");
        scanf("%d", &x);
    } while (n > z);
    printf("a soma dos impares vale %d\n",soma);
    printf("o produto dos pares vale %ld\n", prod);
    printf("o maior valor par eh %d\n",maior);
    printf("o menor valor impar eh %d\n",menor);
    return 0;
}

