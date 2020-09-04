// Tarea01_Ejercicio05_MacOSX.cpp
// Tarea 01: Ejercicio 05
// Cálculo de Operaciones + Mayor/Menor
// Desarrollado por: Andrés Montenegro
// https://www.amsoftware.co
// https://www.andresmontenegro.co
// Plataforma: Mac OS X

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <curses.h> // Utilizo la biblioteca curses.h en lugar de conio.h, ya que actualmente desarrollo en Mac OS X
//#include <conio.h> // Utilizo la biblioteca conio.h para compilar en Windows OS

// Variables globales
int n1, n2, mayor, menor; // Variables de tipo entero
float resultado; // Resultado de tipo flotante
char operador = '#', continuar = 'S'; // Variables de tipo caracter. Inicializo las variables para asegurar la posterior ejecución de los ciclos <<While>>

int main()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Cálculo de Operaciones ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

		printf("\n\n Ingrese el primer número entero: "); // Solicitar dato: Primer número
		scanf("%i", &n1); // Leer dato: Primer número

		printf("\n\n Ingrese el segundo número entero: "); // Solicitar dato: Segundo número
		scanf("%i", &n2); // Leer dato: Segundo número
		
		do // Iniciar ciclo de validación de operador matemático (Para evitar el ingreso de valores fuera al rango permitido [+, -, *, /])
		{
			printf("\n\n Ingrese el operador matemático [+, -, *, /]: "); // Solicitar dato: Operador matemático
			scanf("%c", &operador); // Leer dato: Operador matemático
		} while (operador != '+' && operador != '-' && operador != '*' && operador != '/');

		// Encontrar valores: Mayor/Menor
		if (n1 >= n2) 
		{
			mayor = n1;
			menor = n2;
		}
		else
		{
			mayor = n2;
			menor = n1;
		}

		// Realizar operación seleccionada
		if (operador == '+')
			resultado = mayor + menor;
		else if (operador == '-')
			resultado = mayor - menor;
		else if (operador == '*')
			resultado = mayor * menor;
		else if (operador == '/')
			resultado = mayor / menor;

		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa de Cálculo de Operaciones ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\n\t %i %c %i = %.2f", mayor, operador, menor, resultado); // Imprimir resultado
		printf("\n\n\n\t ¿Desea realizar otra operación [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	return 0;
}