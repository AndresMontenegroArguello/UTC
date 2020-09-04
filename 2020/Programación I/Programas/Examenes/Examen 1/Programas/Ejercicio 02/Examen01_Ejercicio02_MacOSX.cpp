// Examen01_Ejercicio02_MacOSX.cpp
// Examen 01: Ejercicio 02
// Entradas Teatro
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
int ntipo_cliente, ntipo_ticket, cantidad, cventas = 0, cgaleria = 0, cpalco = 0; // Variables de tipo entero
float precio, subtotal, total, descuento = 0, iva = 0 , aventas = 0, agaleria = 0, apalco = 0, pventas = 0; // Variables de tipo flotante
char cedula[25], nombre[25], tipo_cliente[25], tipo_ticket[25], continuar; // Variables de tipo caracter. 

int main()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Entradas de Teatro ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\n Ingrese el número de cédula: "); // Solicitar dato: Carnet
		scanf("%s", cedula); // Leer dato: Carnet

		printf("\n\n Ingrese el nombre del cliente: "); // Solicitar dato: Nombre
		scanf("%s", nombre); // Leer dato: Nombre

		printf("\n\n Ingrese el tipo de cliente [1 = niño o adulto mayor, 2 = adulto]: "); // Solicitar dato: Tipo
		scanf("%i", &ntipo_cliente); // Leer dato: Tipo

		printf("\n\n Ingrese el tipo de ticket [1 = galería, 2 = palco]: "); // Solicitar dato: Tipo
		scanf("%i", &ntipo_ticket); // Leer dato: Tipo

		printf("\n\n Ingrese la cantidad de tickets a comprar: "); // Solicitar dato: Cantidad
		scanf("%i", &cantidad); // Leer dato: Cantidad

		// Calcular Descuento
		if (ntipo_ticket == 1)
			precio = 6000;
		if (ntipo_ticket == 2)
			precio = 12000;

		subtotal = precio * cantidad;

		if (ntipo_cliente == 1)
		{	
			strcpy(tipo_cliente, "Niño o Adulto Mayor");
			descuento = 0.30;
		}
		else if (ntipo_cliente == 2)
		{
			strcpy(tipo_cliente, "Adulto");
			descuento  = 0;
		}
		
		// Calcular Venta
		iva = subtotal * 0.13;

		total = (subtotal - descuento) + iva;

		if (ntipo_ticket == 1)
		{
			strcpy(tipo_ticket, "Galería");
			precio = 6000;
			cgaleria++;
			agaleria += total;
		}
		else if (ntipo_ticket == 2)
		{
			strcpy(tipo_ticket, "Palco");
			precio = 12000;
			cpalco++;
			apalco += total;
		}

		cventas++;
		aventas += total;
		pventas = aventas/cventas;

		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa de Cálculo de Ventas ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** Gracias por su compra ***"); // Imprimir mensaje
		printf("\n\n\t Cédula: %s", cedula); // Imprimir resultado
		printf("\n\t Cliente: %s", nombre); // Imprimir resultado
		printf("\n\t Tipo de Cliente: %s", tipo_cliente); // Imprimir resultado
		printf("\n\t Tipo de Ticket: %s", tipo_ticket); // Imprimir resultado
		printf("\n\t Cantidad de Tickets: %i", cantidad); // Imprimir resultado
		printf("\n\n\t Precio Unitario Ticket: %.2f", precio); // Imprimir resultado
		printf("\n\t Subtotal: %.2f", subtotal); // Imprimir resultado
		printf("\n\t Descuento: %.2f", descuento); // Imprimir resultado
		printf("\n\t IVA: %.2f", iva); // Imprimir resultado
		printf("\n\t Total a Pagar: %.2f", total); // Imprimir resultado
		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Cálculo de Ventas ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas Generales ***"); // Imprimir mensaje
	printf("\n\n\t Cantidad de Entradas Tipo Galería: %i", cgaleria); // Imprimir resultado
	printf("\n\t Acumulado de Ventas Tipo Galería: %.2f", agaleria); // Imprimir resultado
	printf("\n\n\t Cantidad de Entradas Tipo Palco: %i", cpalco); // Imprimir resultado
	printf("\n\t Acumulado de Ventas Tipo Palco: %.2f", apalco); // Imprimir resultado
	printf("\n\n\t Cantidad General de Entradas: %i", cventas); // Imprimir resultado
	printf("\n\t Acumulado General de Ventas: %.2f", aventas); // Imprimir resultado
	printf("\n\t Promedio General de Ventas: %.2f", pventas); // Imprimir resultado
	
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	return 0;
}
