//Permita introducir una medida expresada en centímetros la convierta en pulgadas (1pulgada = 2,54centímetros).

#include <stdio.h>
#include <stdlib.h>

float conversion(float);

int main(){
    float cm, pl;
    printf("Ingrese una longitud en cm: ");
    scanf("%f", &cm);
    pl = conversion(cm);
    printf("%.2f cm equivale a %.2f pulgadas", cm, pl);
    return 0;
}

float conversion(float cm){
    return cm/2.54;
}
