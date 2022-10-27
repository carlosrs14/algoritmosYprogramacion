#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
int main(){
	
	int npartidos, i=1, golesfavor, golescontra, puntos=0, maxgoles_partidoganado;
	int contpganado=0, sumagolescontrapempatado=0, contpempatado=0;
	float promedio;
	//recibe numero de partidos tambien
	//recibe goles a favor y goles en contra
	
	printf("Este programa revisa y calcula ciertas estadisticas de los partidos del Union magdalena y Atletico Guainia\n");
	system("pause");
	printf("Ingrese el numero de partidos que jugo el Union magdalena: ");
	scanf("%d", &npartidos);
	
	while(i<=npartidos){
		printf("\nIngrese los goles a favor del partido numero %d: ", i);
		scanf("%d", &golesfavor);
		
		printf("Ingrese los goles del contrario del partido numero %d: ", i);
		scanf("%d", &golescontra);
		
		if(golesfavor==golescontra){
			//empat�
			puntos++;
			contpempatado++;
			sumagolescontrapempatado=sumagolescontrapempatado+golescontra;		
		}
		else
			if(golesfavor>golescontra){
				//gan�
				puntos= puntos+3;
				contpganado++;
				if(contpganado==0){
					maxgoles_partidoganado=golesfavor;
				}
				else
					if(golesfavor>maxgoles_partidoganado)
						maxgoles_partidoganado=golesfavor;				
			}		
		printf("\n");
		i++;
	}
		
	//#1  puntos totales
	printf("el total de puntos obtenido fue %d\n", puntos);
	
	//#2   mayor cantidad de goles en un partido ganado
	if(contpganado>0){
		printf("La maxima cantidad de goles que anoto en un partido ganado fue: %d\n", maxgoles_partidoganado);
	}else{
		printf("No gano ningun partido, entonces no se puede calcular este valor\n");
	}
	//#3   promedio de goles en contra en los partidos empatados
	if(contpempatado>0){
	promedio=(float)sumagolescontrapempatado/contpempatado;
	printf("El promedio de goles que le anotan al uninion en partidos que empato es: %.2f\n", promedio);
	}else
		printf("No empato ningun partido, entonces no se puede calcular este valor\n");

	return 0;
}
