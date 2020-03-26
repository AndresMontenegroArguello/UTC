Algoritmo AdivinarNumero
	// Introducción
	Escribir 'Logica y Algoritmos'
	Escribir 'Andres Montenegro'
	Escribir '22/Marzo/2020'
	Escribir 'Tarea 5.2'
	Escribir 'Clase #10 - Adivinar Numero'
	Escribir '**********'
	
	Definir nose, n, nu Como Entero
	n <- 10
	nose <- azar(100)+1
	
	Escribir "Adivine el numero (1 - 100):"
	Leer nu
	Mientras nose <> nu Y n>1 Hacer
		Si nose > nu Entonces
			Escribir "Muy bajo"
		SiNo
			Escribir "Muy Alto"
		FinSi
		n <- n - 1
		Escribir "Le quedan ", n, "intentos"
		Leer nu
	FinMientras
	
	Si nose = nu Entonces
		Escribir "Exacto: Usted adivino en ", 11 - n, " intentos,"
	SiNo
		Escribir "El numero era: ", nose
	FinSi
	
FinAlgoritmo
