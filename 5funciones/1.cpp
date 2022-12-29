#include<stdio.h>


//prototipo de funcion
void funcion(float x);

int main()
{
    float numero;
    printf("Ingrese un número para calcularle el cubo: ");
    scanf("%f", &numero);
    funcion(numero);

    return 0;
}

void funcion(float x){
    float cubo;
    cubo=x*x*x;    
    printf("El cubo del número %.2f es: %.2f", x, cubo);

}
