//En una granja llevan el registro de los kilos producidos y entregados mensualmente al mercado de una ciudad;
//esta consiste de tomates ($4 el kilo), zanahorias ($5 el kilo), lechugas ($6 el kilo) y cebollas ($7 el kilo).
//Haga un programa que calcule lo siguiente: 
//cuál es el producto  con más kilos vendidos al final del año?
//cual fue la producción total de tomates, lechugas, zanahorias  y cebollas? y cuál fue el dinero que estos productos produjeron? 
//cuál es el producto que más dinero produjo al final del año?
//que pago mensual se recibió en la granja por los productos entregados al mercado?

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, mayor;
    float kilo, kilo_tomate=0, kilo_zanahoria=0, kilo_lechuga=0, kilo_cebolla=0;
    float dinero_total, dinero_mes, dinero_tomate=0, dinero_zanahoria=0, dinero_lechuga=0, dinero_cebolla=0;
    printf("Producción de verduras\n");
    for(i=1; i<=3; i++){
        
        dinero_mes=0;

        printf("Ingrese los kilos producidos de tomate: ");
        scanf("%f", &kilo);
        dinero_tomate+=kilo*4;
        kilo_tomate+=kilo;
        
        printf("Ingrese los kilos producidos de zanahoria: ");
        scanf("%f", &kilo);
        dinero_zanahoria+=kilo*5;
        kilo_zanahoria+=kilo;

        printf("Ingrese los kilos producidos de lechuga: ");
        scanf("%f", &kilo);
        dinero_lechuga+=kilo*6;
        kilo_lechuga+=kilo;

        printf("Ingrese los kilos producidos de cebolla: ");
        scanf("%f", &kilo);
        dinero_cebolla+=kilo*7;
        kilo_cebolla+=kilo;


        dinero_mes=dinero_cebolla+dinero_lechuga+dinero_tomate+dinero_zanahoria;
        printf("\nEl dinero producido en el mes #%d fue: $%.2f\n\n", i, dinero_mes);
    }
    //max kilos
    if(kilo_tomate>=kilo_cebolla && kilo_tomate>=kilo_lechuga && kilo_tomate>=kilo_zanahoria){
        printf("El producto que más kilos vendió fueron los tomates con: %.2f kilos", kilo_tomate);
    }
    if(kilo_cebolla>=kilo_tomate && kilo_cebolla>=kilo_lechuga && kilo_cebolla>=kilo_zanahoria){
        printf("El producto que más kilos vendió fueron las cebollas con: %.2f kilos", kilo_cebolla);
    }
    if(kilo_lechuga>=kilo_cebolla && kilo_lechuga>=kilo_tomate && kilo_lechuga>=kilo_zanahoria){     
        printf("El producto que más kilos vendió fueron las lechugas con: %.2f kilos", kilo_lechuga);
    }
    if(kilo_zanahoria>=kilo_cebolla && kilo_zanahoria>=kilo_lechuga && kilo_zanahoria>=kilo_tomate){
        printf("El producto que más kilos vendió fueron las zanahorias con: %.2f kilos", kilo_zanahoria);
    }
    //max dinero
    printf("\n\n");
    if(dinero_tomate>=dinero_cebolla && dinero_tomate>=dinero_lechuga && dinero_tomate>=dinero_zanahoria){
        printf("El producto que más dinero produjo fueron los tomates con: $%.2f", dinero_tomate);
    }
    if(dinero_cebolla>=dinero_tomate && dinero_cebolla>=dinero_lechuga && dinero_cebolla>=dinero_zanahoria){
        printf("El producto que más dinero produjo fueron las cebollas con: $%.2f", dinero_cebolla);
    }
    if(dinero_lechuga>=dinero_cebolla && dinero_lechuga>=dinero_tomate && kilo_lechuga>=kilo_zanahoria){     
        printf("El producto que más dinero produjo fueron las lechugas con: $%.2f", kilo_lechuga);
    }
    if(dinero_zanahoria>=dinero_cebolla && dinero_zanahoria>=dinero_lechuga && dinero_zanahoria>=dinero_tomate){
        printf("El producto que más dinero produjo fueron las zanahorias con: $%.2f", dinero_zanahoria);
    }



    printf("\n\nLa producción total de tomate fue: %.2f kilos y generó: $%.2f\n", kilo_tomate, dinero_tomate);
    printf("La producción total de lechuga fue: %.2f kilos y generó: $%.2f\n", kilo_lechuga, dinero_lechuga);
    printf("La producción total de cebolla fue: %.2f kilos y generó: $%.2f\n", kilo_cebolla, dinero_cebolla);
    printf("La producción total de zanahoria fue: %.2f kilos y generó: $%.2f\n\n", kilo_zanahoria, dinero_zanahoria);

    return 0;
}