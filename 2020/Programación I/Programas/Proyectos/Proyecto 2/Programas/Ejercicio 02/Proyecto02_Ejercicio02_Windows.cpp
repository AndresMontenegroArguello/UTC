// Proyecto02_Ejercicio02_Windows.cpp
// Proyecto 02: Ejercicio 02
// Transacciones Financieras
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
#include <iostream>

// Variables globales
int opcion, tipo, cantidad, dolar, cventas = 0, c1 = 0, c2 = 0; // Variables de tipo entero
float comision, giro, subtotal, total, iva = 0 , aventas = 0, pventas = 0, a1 = 0, a2 = 0, p1 = 0, p2 = 0; // Variables de tipo flotante
char cedula[25], nombre[25], fecha[25], continuar, tecla; // Variables de tipo caracter. 

// Prototipos
void menu();
void transacciones();
void estadisticas();
void graficos();

// Funciones

// Menu
void menu()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Transacciones Financieras ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	printf("\n\n\t *** Menu Principal ***"); // Menu Principal
	printf("\n\t ========================"); // Menu Principal
	printf("\n 1- Realizar Transacción "); // Opción
	printf("\n 2- Ver Estadísticas "); // Opción
	printf("\n 3- Ver Gráficos"); // Opción
	printf("\n 4- Salir "); // Opción
	printf("\n\t ========================\n\n"); // Menu Principal

	do
	{
		scanf("%i", &opcion); // Leer dato: Opción
	} while (opcion < 1 || opcion > 6);

	switch(opcion)
	{
		case 1:
			transacciones();
		case 2:
			estadisticas();
		case 3:
			graficos();
		case 4:
			exit(0);
	}
}

// Ingresar Venta
void transacciones()
{
	do
	{
		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Transacciones Financieras ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t ========================"); // Menu Principal
		printf("\n\n Ingrese el número de cédula: "); // Solicitar dato
		scanf("%s", cedula); // Leer dato

		printf("\n\n Ingrese el nombre del cliente: "); // Solicitar dato
		scanf("%s", nombre); // Leer dato

		printf("\n\n Ingrese la fecha: "); // Solicitar dato
		scanf("%s", fecha); // Leer dato

		printf("\n\n Ingrese el tipo de cambio [1 = Colones, 2 = Dólares]: "); // Solicitar dato
		scanf("%i", &tipo); // Leer dato

		printf("\n\n Ingrese el valor del dólar: "); // Solicitar dato
		scanf("%f", &dolar); // Leer dato

		printf("\n\n Ingrese la cantidad a cambiar: "); // Solicitar dato
		scanf("%i", &cantidad); // Leer dato

		// Calcular
		if (tipo == 1)
		{
			comision = 0.03;
			giro  = cantidad/dolar;
			c1++;
			a1 += cantidad;
			p1 = a1/c1;
		}
		if (tipo == 2)
		{
			comision = 0.05;
			giro = cantidad*dolar;
			c2++;
			a2 += cantidad;
			p2 = a2/c2;
		}

		subtotal = cantidad - comision;

		cventas++;
		aventas += subtotal;
		pventas = aventas/cventas;

		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa de Transacciones Financieras ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** Gracias por su compra ***"); // Imprimir mensaje
		printf("\n\n\t Cédula: %s", cedula); // Imprimir resultado
		printf("\n\t Nombre: %s", nombre); // Imprimir resultado
		printf("\n\t Fecha: %s", fecha); // Imprimir resultado
		printf("\n\t Tipo de Cambio: %i", tipo); // Imprimir resultado
		printf("\n\t Valor del Dólar: %.2f", dolar); // Imprimir resultado		
		printf("\n\t Cantidad a Cambiar: %.2f", cantidad); // Imprimir resultado
		printf("\n\t Comisión: %.2f", comision); // Imprimir resultado
		printf("\n\t Subtotal: %.2f", subtotal); // Imprimir resultado
		printf("\n\t Total a Girar: %.2f", total); // Imprimir resultado
		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

void estadisticas()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Transacciones Financieras ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas ***"); // Imprimir mensaje
	printf("\n\n\t Cantidad de Transacciones Colones a Dólares: %i", c1); // Imprimir resultado
	printf("\n\t Monto Cambiado Colones a Dólares: %.2f", a1); // Imprimir resultado
	printf("\n\t Promedio Cambiado Colones a Dólares: %.2f", p1); // Imprimir resultado
	printf("\n\n\t Cantidad de Transacciones Dólares a Colones: %i", c2); // Imprimir resultado
	printf("\n\t Monto Cambiado Dólares a Colones: %.2f", a2); // Imprimir resultado
	printf("\n\t Promedio Cambiado Dólares a Colones: %.2f", p2); // Imprimir resultado
	
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	printf("\n\t Presione cualquier tecla para continuar\n"); // Imprimir resultado
	printf("\n\n\t ¿Desea volver al menú pricinal [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's');

	
	menu();

}

void graficos()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Transacciones Financieras ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Gráficos por Tipo de Lavado ***"); // Imprimir mensaje
	printf("\n\n\t Colones a Dólares: %s",std::string(c1,'=').c_str()); // Imprimir resultado
	printf("\n\t Dólares a Colones: %s",std::string(c2,'=').c_str()); // Imprimir resultado
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	printf("\n\t Presione cualquier tecla para continuar\n"); // Imprimir resultado
	printf("\n\n\t ¿Desea volver al menú pricinal [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's');


	menu();

}


// Función Principal

int main()
{
	menu();

	return 0;
}