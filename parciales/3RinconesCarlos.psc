Algoritmo parcial2
	//Carlos David Rincones Solano 
	// Codigo: 2022114043
	
	definir valory como real;
	definir valorx como real;
	
	escribir"Ubicando puntos en el plano cartesiano con respecto al valor (y) que ingreses.";
	escribir"Ingresa tu valor para Y.";
	leer valory;
	
	Si valory > -10 y valory <= 0 Entonces
		valorx = 3*valory+13;
	SiNo
		Si valory > 0 y valory <= 15 Entonces
			valorx = valory^4 - 10;
		SiNo
			Si valory > 15 y valory <= 30 Entonces
				valorx = valory^5 + valory^2- 1;
			SiNo
				Si valory > 30 y valory <= 44 Entonces
					valorx = (2/valory) + (valory^(1/2))^3;
				SiNo
					valorx = 0;
					
				FinSi
			FinSi
		FinSi
	FinSi
	
	Escribir "Tu punto está en la posición(x,y) y es (",valorx,",",valory,")";
	
	Si valorx=0 Entonces
		Escribir "Y el punto está ubicado sobre el eje x";
	SiNo
		Si valory=0 Entonces
			Escribir "Y el punto está ubicado sobre el eje y";
		SiNo
			Si valorx>0 Entonces
				Si valory>0 Entonces
					Escribir "Y el punto está ubicado en el cuadrante I";
				SiNo
					Escribir "Y el punto está ubicado en el cuadrante IV";
				FinSi
			SiNo
				Si valorx<0 Entonces   // sobra condicion 
					Si valory>0 Entonces
						Escribir "Y el punto está ubicado en el cuadrante II";
					SiNo
						Escribir "Y el punto está ubicado en el cuadrante III";
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
