Algoritmo SumaMatrices
	// Introducción
	Escribir 'Logica y Algoritmos'
	Escribir 'Andres Montenegro'
	Escribir '22/Marzo/2020'
	Escribir 'Tarea 4'
	Escribir 'Suma de Matrices'
	Escribir '**********'
	// Definición de variables
	
	// Ingreso de datos por el usuario + Procesamiento de datos
	Escribir 'Numero de Filas:'
	Escribir '**********'
	Leer x
	Escribir 'Numero de Columnas:'
	Escribir '**********'
	Leer h
	Dimension MatrizA(x,h)
	Dimension MatrizB(x,h)
	
	Escribir 'Matriz A:'
	Para m<-1 Hasta x Con Paso 1 Hacer
		Para n<-1 Hasta h Con Paso 1 Hacer
			Escribir 'Fila #', m, ', Columna #', n, ': '
			Leer MatrizA(m,n)
		Fin Para
	Fin Para
	
	Escribir 'Matriz B:'
	Para m<-1 Hasta x Con Paso 1 Hacer
		Para n<-1 Hasta h Con Paso 1 Hacer
			Escribir 'Fila #', m, ', Columna #', n, ': '
			Leer MatrizB(m,n)
		Fin Para
	Fin Para
	
	Escribir 'Resultado de Suma de Matrices: '
	Escribir '**********'
	Dimension Resultado(x,h)
	Para m<-1 Hasta x Con Paso 1 Hacer
		Para n<-1 Hasta h Con Paso 1 Hacer
			Resultado(m,n) <- MatrizA(m,n) + MatrizB(m,n)
			Imprimir 'Fila #', m, ', Columna #', n, '( ', MatrizA(m,n), ' + ', MatrizB(m,n) , ') : ', Resultado(m, n)
		Fin Para
	Fin Para
	
	
FinAlgoritmo
