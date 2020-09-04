// Tarea01_Ejercicio03_Windows.cpp
// Tarea 01: Ejercicio 03
// Edad
// Desarrollado por: Andrés Montenegro
// https://www.amsoftware.co
// https://www.andresmontenegro.co
// Plataforma: Windows

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
//#include <curses.h> // Utilizo la biblioteca curses.h en lugar de conio.h, ya que actualmente desarrollo en Mac OS X
#include <conio.h> // Utilizo la biblioteca conio.h para compilar en Windows OS
#include <string.h>

// Variables globales
int edad; // Variable de tipo entero (Edad)
char mensaje[25]; // Variable de tipo string (Mensaje)

int main()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Edad ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	do // Iniciar ciclo de validación de edad (Para evitar el ingreso de valores negativos)
	{
		printf("\n\n Ingrese su edad: "); // Solicitar dato: Edad
		scanf("%i", &edad); // Leer dato: Edad
	} while (edad < 1);

	// Generar mensaje basado en la edad obtenida
	if (edad < 15) 
		strcpy(mensaje, "Soy un niño");
	else if (edad < 20)
		strcpy(mensaje, "Soy un adolescente");
	else if (edad < 30)
		strcpy(mensaje, "Soy un adulto");
	else
		strcpy(mensaje, "Soy un viejo");

	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	
	printf("\n\t *** Programa de Edad ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\n %s", mensaje); // Imprimir resultado
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar
	
	return 0;
}