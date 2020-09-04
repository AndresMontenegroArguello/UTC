// Proyecto01_Ejercicio03_Windows.cpp
// Proyecto 01: Ejercicio 03
// Cálculo de Potencia de un Número
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
#include <math.h>

// Variables globales
int base, exponente; // Variables de tipo entero
float resultado; // Variables de tipo flotante
char codigo[25], nombre[25], tipo[25], continuar; // Variables de tipo caracter. 

int main()
{

	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Cálculo Potencia de un Número ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	printf("\n\n Ingrese el número base: "); // Solicitar dato: Base
	scanf("%i", &base); // Leer dato: Base

	printf("\n\n Ingrese el número exponente: "); // Solicitar dato: Exponente
	scanf("%i", &exponente); // Leer dato: Exponente

	// Calcular Exponente
	resultado = pow(base, exponente);

	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	
	printf("\n\t *** Programa de Cálculo de Potencia de un Número ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Resultado ***"); // Imprimir mensaje
	printf("\n\n\t %i Elevado al exponente %i es igual a: %.2f", base, exponente, resultado); // Imprimir resultado
	
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	return 0;
}