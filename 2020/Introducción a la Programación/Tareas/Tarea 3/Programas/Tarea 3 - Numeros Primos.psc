Algoritmo NumerosPrimos
	// Introducción
	Escribir 'Introduccion a la Programacion'
	Escribir 'Andres Montenegro'
	Escribir '22/Marzo/2020'
	Escribir 'Tarea 3'
	Escribir 'Numeros Primos'
	Escribir '**********'
	
	//Programa
	Escribir "Ingrese Numero: "
	Leer n
	
	Para i<-1 Hasta n Con Paso 1 Hacer
		Si a % 1 = 0 Entonces
			c <- c + 1
		FinSi
	Fin Para
	
	Si c = 2 Entonces
		Escribir n, " Es Numero Primo"
	SiNo
		Escribir n, " No Es Numero Primo"
	FinSi
FinAlgoritmo
