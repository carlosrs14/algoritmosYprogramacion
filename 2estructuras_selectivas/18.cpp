//Construya un algoritmo tal, que dados como datos los valores enteros P y Q,
//determine si los mismos satisfacen la siguiente expresión: P3 + Q4 – 2*p2  < 680,
//en caso afirmativo  debe imprimir los valores P y Q.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int p, q;
    float resultado;
    printf("P^3 + q^4 - 2*p^2 < 680?\n");
    printf("Ingrese el valor de p: ");
    scanf("%d", &p);
    printf("Ingrese el valor de q: ");
    scanf("%d", &q);

    resultado=(float)pow(p,3) + pow(q,4) - 2* pow(p,2);
    if(resultado<680){
        printf("El resultado es menor para P=%d y Q=%d\n", p, q);
        printf("El resultado fue: %.2f", resultado);
    }
    else
        printf("El resultado NO fue menor que 680");
    return 0;
}