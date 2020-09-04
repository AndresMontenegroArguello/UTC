// Tarea01_Ejercicio08_MacOSX.cpp
// Tarea 01: Ejercicio 08
// Clasificación de Triangulos
// Desarrollado por: Andrés Montenegro
// https://www.amsoftware.co
// https://www.andresmontenegro.co
// Plataforma: Mac OS X

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <curses.h> // Utilizo la biblioteca curses.h en lugar de conio.h, ya que actualmente desarrollo en Mac OS X
//#include <conio.h> // Utilizo la biblioteca conio.h para compilar en Windows OS
#include <string.h>

// Variables globales
int l1, l2, l3; // Variables de tipo entero (Lados)
char clasificacion[25]; // Variable de tipo string (Clasificación)

int main()
{
	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Clasificación de Triangulos ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	do // Iniciar ciclo de validación de lado (Para evitar el ingreso de valores negativos)
	{
		printf("\n\n Ingrese el primer lado: "); // Solicitar dato: Lado
		scanf("%i", &l1); // Leer dato: Lado
	} while (l1 < 1);

	do // Iniciar ciclo de validación de lado (Para evitar el ingreso de valores negativos)
	{
		printf("\n\n Ingrese el segundo lado: "); // Solicitar dato: Lado
		scanf("%i", &l2); // Leer dato: Lado
	} while (l2 < 1);

	do // Iniciar ciclo de validación de lado (Para evitar el ingreso de valores negativos)
	{
		printf("\n\n Ingrese el tercer lado: "); // Solicitar dato: Lado
		scanf("%i", &l3); // Leer dato: Lado
	} while (l3 < 1);

	// Generar clasificación de triangulo basado en los lados
	if (l1 == l2 && l1 == l3) 
		strcpy(clasificacion, "Equilatero");
	else if (l1 == l2 || l2 == l3 || l1 == l3)
		strcpy(clasificacion, "Isóceles");
	else
		strcpy(clasificacion, "Escaleno");
	
	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	
	printf("\n\t *** Programa de Clasificación de Triangulos ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\n El triangulo es %s", clasificacion); // Imprimir resultado
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar
	
	return 0;
}