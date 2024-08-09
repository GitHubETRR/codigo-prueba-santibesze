Algoritmo polarcartesiana
	Escribir 'Elijí: Forma cartesiana (1) - Forma polar (2) '
	Leer forma
	Si forma==1 Entonces
		Escribir 'La forma cartesiana es a+b*j'
		Escribir "Donde a es la parte real y b es la parte imaginaria."
		Escribir '¿Cuanto vale a?'
		Leer a
		Escribir '¿Cuanto vale b?'
		Leer b
		Si a<0 Entonces
			Si b>0 Entonces
				ANGULO <- 180+ATAN(b/a)*(180/PI)
			SiNo
				ANGULO <- 270-ATAN(b/a)*(180/PI)
			FinSi
		SiNo
			Si b<0 Entonces
				ANGULO <- 360+ATAN(b/a)*(180/PI)
			SiNo
				ANGULO <- ATAN(b/a)*(180/PI)
			FinSi
		FinSi
		MODULO <- Raiz(a*a+b*b)
		Escribir 'El valor del angulo es: ',ANGULO
		Escribir 'Y el valor del modulo es: ',MODULO
	SiNo
		Si forma==2 Entonces
			Escribir 'la forma que polar es h*e^a'
			Escribir "Donde H es el modulo y a es el angulo del modulo"
			Escribir '¿Cuanto vale h?'
			Leer h
			Escribir '¿Cuanto vale a?'
			Leer a
			ejex <- COS(a/180*PI)*h
			ejey <- SEN(a/180*PI)*h
			Escribir 'El valor del eje x es: ',ejex
			Escribir 'El valor del eje y es: ',ejey
			Escribir "Su numero en forma rectangular es ", ejex, " + ", ejey, "j"
		SiNo
			Escribir "No, 1 o 2. Imbecil..."
		FinSi
	FinSi
FinAlgoritmo
