// Examen01_Ejercicio01_Windows.cpp
// Examen 01: Ejercicio 01
// Cálculo de Aumento Salarial
// Desarrollado por: Andrés Montenegro
// https://www.amsoftware.co
// https://www.andresmontenegro.co
// Plataforma: Windows

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <curses.h> // Utilizo la biblioteca curses.h en lugar de conio.h, ya que actualmente desarrollo en Mac OS X
//#include <conio.h> // Utilizo la biblioteca conio.h para compilar en Windows OS
#include <string.h>

// Variables globales
int ntipo, horas, cope = 0, ctec = 0, cpro = 0; // Variables de tipo entero
float precio_hora, salario, aumento, deduc, bruto, neto, aope = 0, atec = 0, apro = 0, pope = 0, ptec = 0, ppro = 0; // Variables de tipo flotante
char cedula[25], nombre[25], tipo[25], continuar; // Variables de tipo caracter. 

int main()
{
	do
	{
		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Cálculo de Aumento Salarial ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

		printf("\n\n Ingrese el número de cédula: "); // Solicitar dato: Cédula
		scanf("%s", cedula); // Leer dato: Cédula

		printf("\n\n Ingrese el nombre del empleado: "); // Solicitar dato: Nombre
		scanf("%s", nombre); // Leer dato: Nombre

		printf("\n\n Ingrese el tipo de empleado [1 = operario, 2 = técnico, 3 = profesional]: "); // Solicitar dato: Tipo
		scanf("%i", &ntipo); // Leer dato: Tipo

		printf("\n\n Ingrese la cantidad de horas trabajadas: "); // Solicitar dato: Horas
		scanf("%i", &horas); // Leer dato: Horas

		printf("\n\n Ingrese el precio por hora: "); // Solicitar dato: Precio Hora
		scanf("%f", &precio_hora); // Leer dato: Precio Hora

		// Calcular Aumentos
		salario = horas * precio_hora;
		
		if (ntipo == 1)
		{
			strcpy(tipo, "Operario");
			cope++;
			aope += salario;
			pope = aope/cope;
			aumento = 0.15;
		}
		else if (ntipo == 2)
		{
			strcpy(tipo, "Técnico");
			ctec++;
			atec += salario;
			ptec = atec/ctec;
			aumento = 0.10;
		}
		else if (ntipo == 3)
		{
			strcpy(tipo, "Profesional");
			cpro++;
			apro += salario;
			ppro = apro/cpro;
			aumento = 0.05;
		}

		// Calcular Salario Bruto
		bruto = salario + (salario * aumento);
		deduc = bruto * 0.0917;
		neto = bruto - deduc;

		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa de Cálculo de Aumento Salarial ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** Resultados ***"); // Imprimir mensaje
		printf("\n\n\t Cédula: %s", cedula); // Imprimir resultado
		printf("\n\t Nombre de Empleado: %s", nombre); // Imprimir resultado
		printf("\n\t Tipo de Empleado: %s", tipo); // Imprimir resultado
		printf("\n\t Horas Trabajadas: %i", horas); // Imprimir resultado
		printf("\n\t Precio/Hora: %.2f", precio_hora); // Imprimir resultado
		printf("\n\n\t Salario Ordinario: %.2f", salario); // Imprimir resultado
		printf("\n\t Aumento: %.2f", aumento); // Imprimir resultado
		printf("\n\t Salario Bruto: %.2f", bruto); // Imprimir resultado
		printf("\n\t Deducción CCSS: %.2f", deduc); // Imprimir resultado
		printf("\n\t Salario Neto: %.2f", neto); // Imprimir resultado
		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Cálculo de Aumento Salarial ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas Generales ***"); // Imprimir mensaje
	printf("\n\n\t Cantidad de Empleados Tipo Operarios: %i", cope); // Imprimir resultado
	printf("\n\t Acumulado de Salario Neto Tipo Operarios: %.2f", aope); // Imprimir resultado
	printf("\n\t Promedio de Salario Neto Tipo Operarios: %.2f", pope); // Imprimir resultado
	printf("\n\n\t Cantidad de Empleados Tipo Técnicos: %i", ctec); // Imprimir resultado
	printf("\n\t Acumulado de Salario Neto Tipo Técnicos: %.2f", atec); // Imprimir resultado
	printf("\n\t Promedio de Salario Neto Tipo Técnicos: %.2f", ptec); // Imprimir resultado
	printf("\n\n\t Cantidad de Empleados Tipo Profesionales: %i", cpro); // Imprimir resultado
	printf("\n\t Acumulado de Salario Neto Tipo Profesionales: %.2f", apro); // Imprimir resultado
	printf("\n\t Promedio de Salario Neto Tipo Profesionales: %.2f", ppro); // Imprimir resultado
	
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	return 0;
}