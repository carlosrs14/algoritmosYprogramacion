//Haga un algoritmo que calcule el termino numero N de la secuencia de FIBONACCI,

#include <stdio.h>
#include <stdlib.h>

int main(){
int i, num1=0, num2=1, num3, n;

    printf("Ingresa n para retornar el n fibonacci: ");
    scanf("%d", &n);
    if(n==1)
        printf("El primer fibonacci es 0");
    else if(n==2)
            printf("El segundo fibonacci es 1");
        else{
            for(i=3; i<=n; i++){
                num3=num1+num2;
                num1=num2;
                num2=num3;
            }
            printf("El %d fibonacii es: %d\n\n", n, num3);
        }
    //system("pause");
    return 0;
}