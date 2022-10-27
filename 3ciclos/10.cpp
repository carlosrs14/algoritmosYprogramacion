//Construya un programa en C++ tal que dado como dato un número entero,  muestre  la tabla de multiplicar (del 1 al 10) de dicho número ingresado.

#include <stdio.h>
#include <stdlib.h>

int main(){
int i, numero, n;

    printf("Tabla de multiplicar de n\n");
    printf("Ingresa n: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
        printf("%d x %d = %d\n", n, i, i*n );
    //system("pause");
    return 0;
}