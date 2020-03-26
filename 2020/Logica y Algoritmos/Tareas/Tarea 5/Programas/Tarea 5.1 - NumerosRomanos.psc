Algoritmo NumerosRomanos
	// Introducción
	Escribir 'Logica y Algoritmos'
	Escribir 'Andres Montenegro'
	Escribir '22/Marzo/2020'
	Escribir 'Tarea 5.1'
	Escribir 'Clase #10 - Numeros Romanos'
	Escribir '**********'
	
	Escribir "Ingrese un numero entero entre 1 al 100"
	Leer dec
	
	unidad <- dec mod 10
	dec <- dec - unidad
	dec <- dec/10
	
	decena <- dec mod 10
	dec <- dec - decena
	dec <- dec/10
	
	centena <- dec mod 10
	dec <- dec - centena
	dec <- dec/10
	
	romano <- ""
	Segun unidad Hacer
		1: romano <- "I"
		2: romano <- "II"
		3: romano <- "III"
		4: romano <- "IV"
		5: romano <- "V"
		6: romano <- "VI"
		7: romano <- "VII"
		8: romano <- "VIII"
		9: romano <- "IX"			
	FinSegun
	
	Segun decena Hacer
		1: romano <- "X" + romano
		2: romano <- "XX" + romano
		3: romano <- "XXX" + romano
		4: romano <- "XL" + romano
		5: romano <- "L" + romano
		6: romano <- "LX" + romano
		7: romano <- "LXX" + romano
		8: romano <- "LXXX" + romano
		9: romano <- "XC" + romano
	FinSegun
	
	Segun centena Hacer
		1: romano <- "C" + romano
	FinSegun
	
	Escribir romano
	
FinAlgoritmo
