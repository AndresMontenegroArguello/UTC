// Practica_Ejercicio_25
// Descripción: Realice un programa que:
// Lea un número N
// Reporte cantidad de números pares 
// Reporte cantidad de números impares
// Reporte promedio de números pares
// Reporte promedio de números impares
// Reporte promedio general
// Ejemplo Ejercicio 25
// Desarrollado por: Andrés Montenegro
// https://www.amsoftware.co
// https://www.andresmontenegro.co

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <curses.h> // Utilizo la biblioteca curses.h en lugar de conio.h, ya que actualmente desarrollo en Mac OS X
//#include <conio.h> // Utilizo la biblioteca conio.h para compilar en Windows OS
#include <string.h>

// Variables globales
int n, cpares = 0, cimpares = 0, apares = 0, aimpares = 0; // Variables de tipo entero
float ppares = 0, pimpares = 0, pgeneral = 0; // Variables de tipo flotante
char mensaje[25], continuar = 'S'; // Variables de tipo caracter. Inicializo las variables para asegurar la posterior ejecución de los ciclos <<While>>

int main()
{
	while (continuar == 'S' || continuar == 's')
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa Ejercicio 25 ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

		printf("\n\n Ingrese un número entero: "); // Solicitar dato: Primer número
		scanf("%i", &n); // Leer dato: Primer número

		// Calcular datos
		if (n % 2 == 0)
		{
			strcpy(mensaje, "Par");
			cpares++;
			apares += n;
			ppares = float(apares)/float(cpares);
		}
		else
		{
			strcpy(mensaje, "Impar");
			cimpares++;
			aimpares+=n;
			pimpares = float(aimpares)/float(cimpares);
		}

		// Encontrar promedio general
		pgeneral = float(apares + aimpares) / float(cpares + cimpares);

		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa Ejercicio 25 ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** Resultados ***"); // Imprimir encabezado de resultados
		printf("\n\n\t Número ingresado: %i ", n); // Imprimir resultado
		printf("\n\n\t El número correponde a un: %s ", mensaje); // Imprimir resultado
		printf("\n\n\n\t ¿Desea ingresar otro número [S/N]?"); // Imprimir mensaje para continuar
		scanf("%c", &continuar); // Leer dato: Continuar
		while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n') // Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		}
	}

	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa Ejercicio 25 ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas ***"); // Imprimir encabezado de estadísticas
	printf("\n\n\t Cantidad de números pares: %i ", cpares); // Imprimir estadística
	printf("\n\n\t Promedio de números pares: %.2f ", ppares); // Imprimir estadística
	printf("\n\n\t Cantidad de números impares: %i ", cimpares); // Imprimir estadística
	printf("\n\n\t Promedio de números impares: %.2f ", pimpares); // Imprimir estadística
	printf("\n\n\t Promedio de general: %.2f ", ppares); // Imprimir estadística

	printf("\n\t *** Gracias ***\n"); // Imprimir mensaje de salida
	return 0;
}