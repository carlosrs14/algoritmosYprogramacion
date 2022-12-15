//Construya un algoritmo tal, que dados como datos dos variables de tipo entero
//(V, NUM), obtenga el resultado de la siguiente función:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int v, num;
    float resultado;
    printf("Ingrese un valor para v: ");
    scanf("%d", &v);
    printf("Ingrese un valor para num: ");
    scanf("%d", &num);

    if(num==1){
        resultado=100*v;
    }else
        if(num==2){
            resultado=(float)pow(100, v);
        }else
            if(num==3){
                if(v==0){
                    printf("No se puede divir por 0\n\n");
                    return 0;
                }else{
                    resultado=(float)10/v;
                }
            }else{
                resultado=0;
            }
    printf("El resultado fue %.2f\n\n", resultado);
    return 0;
}