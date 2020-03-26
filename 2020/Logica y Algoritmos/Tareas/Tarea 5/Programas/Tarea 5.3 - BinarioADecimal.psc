Algoritmo BinarioADecimal
	// Introducción
	Escribir 'Logica y Algoritmos'
	Escribir 'Andres Montenegro'
	Escribir '22/Marzo/2020'
	Escribir 'Tarea 5.3'
	Escribir 'Clase #10 - Binario A Decimal'
	Escribir '**********'
	
	Definir num, coci, decimal, re Como Real
	Escribir "Ingrese Binario"
	Leer num
	Mientras num > 0 Hacer
		Si num > 0 Entonces
			coci <- num
			re <- 1
			decimal <- 0
			Mientras coci <> 1 Hacer
				decimal <- decimal + (coci mod 10) * re 
				coci <- trunc (coci/10)
				re <- (re * 2)
			FinMientras
			decimal <- decimal + ((coci mod 10) * re)
			Escribir "El numero en decimal es ", decimal
		FinSi
		Escribir " "
		Escribir "Ingrese Numero Binario y para finalizar pulse ENTER"
		Leer num
	FinMientras
	
FinAlgoritmo
