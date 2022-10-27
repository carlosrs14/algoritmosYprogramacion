//Escriba un algoritmo  que obtenga la suma e imprima los términos de la siguiente serie: 2,5,7,10,12,15,17,……1800
//+3, +2 apartir del 2

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=1, n, nserie=2;
    
    printf("Imprimiŕe la serie +2, +3, +2...");
    printf("La serie no pasará del número que ingreses(que sea alto): ");
    scanf("%d", &n);
    printf("%d  ", nserie);
    while(nserie<=n){
        if(i%2==0)
            nserie+=2;
        else
            nserie+=3;
        i++;
        printf("%d  ", nserie);
    }
    printf("\n\n");
    return 0;
}