//haga un algoritmo que calcule e imprima el producto de los N primeros números naturales.

//factorial
#include <stdio.h>
#include <stdlib.h>

int main(){
int i, numero, factor=1, n;

    printf("Factorial de n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        factor*=i;
    printf("El factorial de %d es: %d\n\n", n,factor);
    //system("pause");
    return 0;
}