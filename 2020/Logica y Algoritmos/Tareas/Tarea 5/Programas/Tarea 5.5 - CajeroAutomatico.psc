Algoritmo CajeroAutomatico
	// Introducción
	Escribir 'Logica y Algoritmos'
	Escribir 'Andres Montenegro'
	Escribir '22/Marzo/2020'
	Escribir 'Tarea 5.5'
	Escribir 'Clase #10 - Cajero Automatico'
	Escribir '**********'
	
	Definir op, saldo, dep, giro Como Entero
	saldo <- 0
	dep <- 0
	Repetir
		Escribir "Bienvenido"
		Escribir "Cajero Automatico"
		Escribir "Seleccione opcion"
		Escribir "1: Depositar efectivo"
		Escribir "2: Verificar deposito"
		Escribir "3: Retirar efectivo"
		Escribir "4: Saldo"
		Escribir "5: Salir"
		Leer op
		Limpiar Pantalla
		Segun op Hacer
			1:
				Escribir "Ingrese la cantidad a depositar"
				Leer dep
				saldo <- saldo + dep
				Escribir "Deposito: ", dep, ". Gracias,"
			2:
				Si dep > 0 Entonces
					Escribir "Su deposito fue: ", dep
				SiNo
					Escribir "No ha realizado deposito."
				FinSi
			3:
				Escribir "Escriba cuanto desea girar"
				Leer giro
				Si giro < saldo Entonces
					saldo <- (saldo - giro)
					Escribir "Usted giro: ", giro
					Escribir "Su nuevo saldo es: ", saldo
				SiNo
					Escribir "Ingrese un valor inferior a ", saldo
				FinSi
			4:
				Escribir "Saldo: ", saldo
			5:
				Escribir "Adios. Gracias."
			De Otro Modo:
				Escribir "Ingrese una opcion valida"
		FinSegun
		Esperar Tecla
		Limpiar Pantalla
	Hasta Que op=5
	Esperar Tecla
	Limpiar Pantalla
	
FinAlgoritmo
