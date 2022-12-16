//14. Escriba un algoritmo que lea un numero entero N y calcule el resultado de la siguiente serie:
//1 - 1/2 + 1/3 - 1/4 +...+1/N 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    float resultado=0;
    printf("Secuencia\n");
    printf("1 - 1/2 + 1/3 - 1/4 +...+1/n\n");
    printf("Ingrese el valor n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(i%2==0){
            resultado=resultado-(float)1/i;
        }else{
            resultado=resultado+(float)1/i;
        }
    }
    printf("El resultado es: %.3f", resultado);
    return 0;
}
