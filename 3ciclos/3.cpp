//construya un algoritmo que lea 100  números reales y cuente cuantos de ellos son positivos, negativos o nulos.

//modificar numeros para el número de datos
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, numero, ceros=0, pos=0, neg=0, numeros=15;

    printf("Número de positivos, negeativos o ceros\n\n");

    for(i=1; i<=numeros; i++){
        printf("Ingresa el %d número entero: ", i);
        scanf("%d", &numero);
        if(numero>0)
            pos++;
        else
            if(numero<0)
                neg++;
            else
                ceros++;
    }

    printf("Positivos: %d, Negativos: %d, Ceros: %d\n\n",pos,neg, ceros);
    //system("pause");
    return 0;
}