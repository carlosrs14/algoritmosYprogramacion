//Dados los datos A, B y C que representan números enteros diferentes
//construya un algoritmo para escribir estos números en forma descendente.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, mayor, medio, menor;
    printf("Ordenando números de mayor a menor\n");
    printf("Ingrese el número a: ");
    scanf("%d", &a);
    printf("Ingrese el número b: ");
    scanf("%d", &b);
    printf("Ingrese el número c: ");
    scanf("%d", &c);

    if(a>=b && a>=c){
        if(b>=c){
            //orden a,b,c
            mayor=a;
            medio=b;
            menor=c;

        }else{
            //orden a,c,b
            mayor=a;
            medio=c;
            menor=b;
        }

    }else
        if(b>=c && b>=a){
            if(a>=c){
            //orden b,a,c
            mayor=b;
            medio=a;
            menor=c;

            }else{
                //orden b,c,a
                mayor=b;
                medio=c;
                menor=a;
            }        
        }else
            if(a>=b){
                //orden c,a,b
                mayor=c;
                medio=a;
                menor=b;
            }else{
                //orden c,b,a
                mayor=c;
                medio=b;
                menor=a;
            }
    printf("Organizados de mayor a menor los números serían: %d, %d, %d\n\n", mayor, medio, menor);
    return 0;
}