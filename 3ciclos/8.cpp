//Construya un algoritmo tal, que dados como datos  N números enteros, determine cuantos de ellos son pares y cuantos impares.

#include <stdio.h>
#include <stdlib.h>

int main(){
int i, numero, contpar=0, contimpar=0, n;

    printf("Cuantos números va a ingresar? ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("#%d: ", i);
        scanf("%d", &numero);
        if(numero%2==0)
            contpar++;
        else
            contimpar++;
    }

    printf("Números pares: %d, Número impares: %d\n\n",contpar, contimpar);

    return 0;
}