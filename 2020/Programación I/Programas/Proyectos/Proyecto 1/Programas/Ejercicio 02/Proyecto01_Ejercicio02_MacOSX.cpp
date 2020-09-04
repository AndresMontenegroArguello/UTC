// Proyecto01_Ejercicio02_MacOSX.cpp
// Proyecto 01: Ejercicio 02
// Cálculo de Ventas
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
int ntipo, cantidad, cventas = 0, ccontado = 0, ccredito = 0; // Variables de tipo entero
float precio_unit, subtotal, total, descuento = 0, iva = 0 , aventas = 0, acontado = 0, acredito = 0, pventas = 0, pcontado = 0, pcredito = 0; // Variables de tipo flotante
char codigo[25], nombre[25], tipo[25], continuar; // Variables de tipo caracter. 

int main()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Cálculo de Ventas ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

		printf("\n\n Ingrese el código del producto: "); // Solicitar dato: Producto
		scanf("%s", codigo); // Leer dato: Producto

		printf("\n\n Ingrese el nombre del producto: "); // Solicitar dato: Nombre
		scanf("%s", nombre); // Leer dato: Nombre

		printf("\n\n Ingrese el tipo de venta [1 = contado/2 = crédito]: "); // Solicitar dato: Tipo
		scanf("%i", &ntipo); // Leer dato: Tipo

		printf("\n\n Ingrese el precio unitario: "); // Solicitar dato: Precio Unitario
		scanf("%f", &precio_unit); // Leer dato: Precio Unitario

		printf("\n\n Ingrese la cantidad a comprar: "); // Solicitar dato: Cantidad
		scanf("%i", &cantidad); // Leer dato: Cantidad

		// Calcular Descuentos
		subtotal = precio_unit * cantidad;

		if (subtotal >= 50000 && subtotal < 100000)
			descuento = 0.06;
		else if (subtotal >= 100000 && subtotal < 250000)
			descuento = 0.075;
		else if (subtotal >= 250000)
			descuento = 0.10;
		
		// Calcular Venta
		iva = subtotal * 0.13;

		total = (subtotal - descuento) + iva;

		if (ntipo == 1)
		{
			strcpy(tipo, "Contado");
			ccontado++;
			acontado += total;
			pcontado = acontado/ccontado;
		}
		else if (ntipo == 2)
		{
			strcpy(tipo, "Crédito");
			ccredito++;
			acredito += total;
			pcredito = acredito/ccredito;
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
		printf("\n\n\t Código: %s", codigo); // Imprimir resultado
		printf("\n\t Producto: %s", nombre); // Imprimir resultado
		printf("\n\t Tipo de Venta: %s", tipo); // Imprimir resultado
		printf("\n\t Precio Unitario: %.2f", precio_unit); // Imprimir resultado
		printf("\n\t Cantidad: %i", cantidad); // Imprimir resultado
		printf("\n\n\t Subtotal: %.2f", subtotal); // Imprimir resultado
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

	printf("\n\t *** Programa de Cálculo de Notas ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas Generales ***"); // Imprimir mensaje
	printf("\n\n\t Cantidad de Ventas Tipo Crédito: %i", ccredito); // Imprimir resultado
	printf("\n\t Acumulado de Ventas Tipo Crédito: %.2f", acredito); // Imprimir resultado
	printf("\n\t Promedio de Ventas Tipo Crédito: %.2f", pcredito); // Imprimir resultado
	printf("\n\n\t Cantidad de Ventas Tipo Contado: %i", ccontado); // Imprimir resultado
	printf("\n\t Acumulado de Ventas Tipo Contado: %.2f", acontado); // Imprimir resultado
	printf("\n\t Promedio de Ventas Tipo Contado: %.2f", pcontado); // Imprimir resultado
	printf("\n\n\t Cantidad de Ventas: %i", cventas); // Imprimir resultado
	printf("\n\t Acumulado de Ventas: %.2f", aventas); // Imprimir resultado
	printf("\n\t Promedio de Ventas: %.2f", pventas); // Imprimir resultado
	
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	return 0;
}