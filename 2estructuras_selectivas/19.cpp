//Construya un algoritmo tal, que dados como datos la categoría y el sueldo de un trabajador,
//calcule el aumento correspondiente teniendo en cuenta la siguiente tabla.
//cat aum
//1   15%
//2   10%
//3   8%
//4   7%
//Imprima la categoría del trabajador y su nuevo sueldo   

#include <stdio.h>
#include <stdlib.h>

int main(){
    int cat;
    float sueldo, nuevo_sueldo;
    printf("Empresa\nAumento de sueldo dependiendo de la categoria(varía desde 1 hasta 4)\n");
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    printf("Ingrese la categoria: ");
    scanf("%d", &cat);

    if(cat==1){
        nuevo_sueldo=(float)sueldo + sueldo*15/100;
    }else
        if(cat==2){
            nuevo_sueldo=(float)sueldo + sueldo*10/100;
        }else
            if(cat==3){
                nuevo_sueldo=(float)sueldo + sueldo*8/100;
            }else 
                if(cat==4){
                    nuevo_sueldo=(float)sueldo + sueldo*7/100;

                }else{
                    printf("Categoria no disponible\n\n");
                    return 0;
                }
    printf("El nuevo sueldo del trabajador es: %.2f\n\n", nuevo_sueldo);
    return 0;
}