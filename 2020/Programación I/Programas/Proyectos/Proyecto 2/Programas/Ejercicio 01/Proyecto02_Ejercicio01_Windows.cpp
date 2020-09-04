// Proyecto02_Ejercicio01_Windows.cpp
// Proyecto 02: Ejercicio 01
// Mall Paseo Las Flores
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
int opcion, sala, cantidad, cventas = 0, csala1 = 0, csala2 = 0, csala3 = 0; // Variables de tipo entero
float precio, subtotal, total, descuento = 0, iva = 0 , aventas = 0, asala1 = 0, asala2 = 0, asala3 = 0; // Variables de tipo flotante
char cedula[25], nombre[25], continuar, tecla; // Variables de tipo caracter. 

// Prototipos
void menu();
void venta();
void estadisticas();
void graficos();

// Funciones

// Menu
void menu()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Mall Paseo Las Flores ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	printf("\n\n\t *** Menu Principal ***"); // Menu Principal
	printf("\n\t ========================"); // Menu Principal
	printf("\n 1- Ingresar Venta "); // Opción
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
			venta();
		case 2:
			estadisticas();
		case 3:
			graficos();
		case 4:
			exit(0);
	}
}

// Ingresar Venta
void venta()
{
	do
	{
		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Mall Paseo Las Flores ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t ========================"); // Menu Principal
		printf("\n\n Ingrese el número de cédula: "); // Solicitar dato
		scanf("%s", cedula); // Leer dato

		printf("\n\n Ingrese el nombre del cliente: "); // Solicitar dato
		scanf("%s", nombre); // Leer dato

		printf("\n\n Ingrese el número de sala [1, 2, 3]: "); // Solicitar dato
		scanf("%i", &sala); // Leer dato

		printf("\n\n Ingrese la cantidad de tickets: "); // Solicitar dato
		scanf("%i", &cantidad); // Leer dato

		printf("\n\n Ingrese el precio de tickets: "); // Solicitar dato
		scanf("%f", &precio); // Leer dato

		// Calcular
		subtotal = precio * cantidad;

		iva = subtotal * 0.13;

		total = subtotal + iva;

		cventas++;
		aventas += precio;

		if (sala == 1)
		{
			csala1++;
			asala1 += precio;
		}
		else if (sala == 2)
		{
			csala2++;
			asala2 += precio;
		}
		else if (sala == 3)
		{
			csala3++;
			asala3 += precio;
		}

		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa de Mall Paseo Las Flores ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** Gracias por su compra ***"); // Imprimir mensaje
		printf("\n\n\t Cédula: %s", cedula); // Imprimir resultado
		printf("\n\t Nombre: %s", nombre); // Imprimir resultado
		printf("\n\t Número de Sala: %i", sala); // Imprimir resultado
		printf("\n\t Cantidad de Tickets: %i", cantidad); // Imprimir resultado
		printf("\n\t Precio de Tickets: %.2f", precio); // Imprimir resultado		
		printf("\n\t Subtotal a Pagar: %.2f", subtotal); // Imprimir resultado
		printf("\n\t IVA: %.2f", iva); // Imprimir resultado
		printf("\n\t Precio a Pagar: %.2f", total); // Imprimir resultado
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

	printf("\n\t *** Programa de Mall Paseo Las Flores ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas ***"); // Imprimir mensaje
	printf("\n\n\t Cantidad de Entradas Vendidas Sala 1: %i", csala1); // Imprimir resultado
	printf("\n\t Dinero Acumulado Sala 1: %.2f", asala1); // Imprimir resultado
	printf("\n\n\t Cantidad de Entradas Vendidas Sala 2: %i", csala2); // Imprimir resultado
	printf("\n\t Dinero Acumulado Sala 2: %.2f", asala2); // Imprimir resultado
	printf("\n\n\t Cantidad de Entradas Vendidas Sala 3: %i", csala3); // Imprimir resultado
	printf("\n\t Dinero Acumulado Sala 3: %.2f", asala3); // Imprimir resultado
	printf("\n\n\t Cantidad de Entradas Vendidas Total: %i", cventas); // Imprimir resultado
	printf("\n\t Dinero Acumulado Total: %.2f", aventas); // Imprimir resultado
	
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

	printf("\n\t *** Programa de Mall Paseo Las Flores ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Gráficos por Tipo de Lavado ***"); // Imprimir mensaje
	printf("\n\n\t Sala 1: %s",std::string(csala1,'=').c_str()); // Imprimir resultado
	printf("\n\t Sala 2: %s",std::string(csala2,'=').c_str()); // Imprimir resultado
	printf("\n\t Sala 3: %s",std::string(csala3,'=').c_str()); // Imprimir resultado
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