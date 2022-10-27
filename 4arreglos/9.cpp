//Se tiene el vector A con 100 elementos almacenados. Diseñe un algoritmo y programa que escriba 
//“SI” si el vector esta ordenado ascendentemente o 
//“NO” si el vector no esta ordenado


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tam=10;
    int vec[tam]={5,6,7,8,10,20,21,50,78,100};
    //int vec[tam]={5,6,7,8,3,-8,0,-10,20,1};
    for(i=0; i<tam; i++){
        if(i>0){
            if(vec[i]<=vec[i-1]){
                printf("No está ordenado\n\n");
                //system("pause");
                return 0;
            }    
        }
    }
    printf("SI, están ordenados\n\n");
    return 0;
}