Algoritmo Fibonacci
	// Introducción
	Escribir 'Logica y Algoritmos'
	Escribir 'Andres Montenegro'
	Escribir '22/Marzo/2020'
	Escribir 'Tarea 5.4'
	Escribir 'Clase #10 - Fibonacci'
	Escribir '**********'
	
	Definir m, x, t, num, i Como Entero
	n <- 0 
	x <- 1
	Escribir "Ingrese numero: "
	Leer num
	Para i <- 1 Hasta num Con Paso 1 Hacer
		Escribir n
		t <- x + n
		n <- x
		x <- t
	FinPara
	
FinAlgoritmo
