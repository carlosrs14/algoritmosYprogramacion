//dado N números enteros como datos, haga un algoritmo que: obtenga cuantos números leídos fueron mayores que cero,
//calcule el promedio de los números negativos pares y obtenga el promedio de todos los números.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,num, suma, suma_neg_par=0, cont_neg_par=0, cont_pos=0;
    float promedio_neg_par, promedio;
    printf("Ingrese el número de datos que va a digitar: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Digite un número(%d): ",i);
        scanf("%d", &num);
        if(num>0){
            cont_pos++;
        }
        else
            if(num<0 && num%2==0){
                cont_neg_par++;
                suma_neg_par+=num;
                
            }

    suma+=num;
    }
    promedio=(float)suma/n;
    promedio_neg_par=(float)suma_neg_par/cont_neg_par;
    printf("Hubo %d número(s) positivo(s)\n", cont_pos);
    printf("El promedio de los números ingresados fue: %.2f\n", promedio);
    printf("El promedio de los pares negativos fue: %.2f\n\n", promedio_neg_par);
    return 0;
}