#include<stdio.h>


//prototipo de funcion
void funcion();

int main()
{
    funcion();
    return 0;
}

void funcion(){
    float kilometro, metro;
    printf("Ingrese un una distacia en kilometros: ");
    scanf("%f", &kilometro);
    metro=kilometro*1000; 
    printf("Tu distacia en metros es; %.2f", metro);

}
