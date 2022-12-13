//La tangente de un ángulo se define como  el cociente entre el seno y el coseno de dicho ángulo (tan(x)=sen(x)/cos(x))
//construya un algoritmo que permita calcular la tangente de un ángulo, considerando que
//se conoce el valor del seno y del coseno del mismo. (cos x <> 0)

#include <stdio.h>
#include <stdlib.h>

int main(){
    float tangente, coseno, seno;

    printf("Tangente\n");
    printf("Ingrese el coseno de un angulo: ");
    scanf("%f", &coseno);
    printf("Ingrese el seno de ese mismo angulo: ");
    scanf("%f", &seno);
    if(coseno==0){
        printf("No se puede dividir entre 0\n\n");
    }else{
        tangente = (float)seno/coseno;
        printf("La tangente de dicho angulo es: %.2f", tangente);
    }
    return 0;
}