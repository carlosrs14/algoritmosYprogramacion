//Crear una función que Calcule el área y el perímetro de un rectángulo dada la base y la altura.

#include <stdio.h>
#include <stdlib.h>

float area(float, float), perimetro(float, float);

int main(){
    float base, altura, perim, ar;
    printf("Ingrese la altura y la base de un rectangulo: ");
    scanf("%f %f", &base, &altura);
    perim= perimetro(base, altura);
    ar = area(base, altura);
    printf("El perimetro del rectangulo es: %.2f y el area es: %.2f\n\n", perim, ar);
    return 0;
}

float perimetro(float base, float altura){
    return base*2 + altura*2;
}

float area(float base, float altura){
    return base*altura;
}
