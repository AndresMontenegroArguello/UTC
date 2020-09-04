// Examen02_Ejercicio01_Windows.cpp
// Examen 02: Ejercicio 01
// Lavacar
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
int opcion, ntipo_vehiculo, ntipo_lavado, cantidad, cventas = 0, csencillo = 0, c44 = 0, cbus = 0, clavado1 = 0, clavado2 = 0; // Variables de tipo entero
float precio, subtotal, total, descuento = 0, iva = 0 , aventas = 0, asencillo = 0, a44 = 0, abus = 0, alavado1 = 0, alavado2 = 0, pventas = 0, psencillo = 0, p44 = 0, pbus = 0, plavado1 = 0, plavado2 = 0; // Variables de tipo flotante
char placa[25], marca[25], modelo[25], tipo_vehiculo[25], tipo_lavado[25], continuar, tecla; // Variables de tipo caracter. 

// Prototipos
void menu();
void ingresarDatosVehiculos();
void estadisticasTipoLavado();
void estadisticasTipoVehiculo();
void graficosTipoLavado();
void graficosTipoVehiculo();

// Funciones

// Menu
void menu()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Lavacar ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	printf("\n\n\t *** Menu Principal ***"); // Menu Principal
	printf("\n\t ========================"); // Menu Principal
	printf("\n 1- Ingresar Datos Vehículos "); // Opción
	printf("\n 2- Ver Estadísticas Vehículos Lavados según tipo de Lavado "); // Opción
	printf("\n 3- Ver Estadísticas Vehículos Lavados por tipo de Vehículo "); // Opción
	printf("\n 4- Ver Gráfico Vehículos Lavados por Tipo de Lavado "); // Opción
	printf("\n 5- Ver Gráfico Vehículos Lavados por Tipo de Vehículo "); // Opción
	printf("\n 6- Salir "); // Opción
	printf("\n\t ========================\n\n"); // Menu Principal

	do
	{
		scanf("%i", &opcion); // Leer dato: Opción
	} while (opcion < 1 || opcion > 6);

	switch(opcion)
	{
		case 1:
			ingresarDatosVehiculos();
		case 2:
			estadisticasTipoLavado();
		case 3:
			estadisticasTipoVehiculo();
		case 4:
			graficosTipoLavado();
		case 5:
			graficosTipoVehiculo();
		case 6:
			exit(0);
	}
}

// Ingresar Datos Vehiculos
void ingresarDatosVehiculos()
{
	do
	{
		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Lavacar ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t ========================"); // Menu Principal
		printf("\n\n Ingrese el número de placa: "); // Solicitar dato
		scanf("%s", placa); // Leer dato

		printf("\n\n Ingrese la marca del vehículo: "); // Solicitar dato
		scanf("%s", marca); // Leer dato

		printf("\n\n Ingrese el modelo del vehículo: "); // Solicitar dato
		scanf("%s", modelo); // Leer dato

		printf("\n\n Ingrese el tipo de vehículo [1 = Sencillo, 2 = 4x4, 3 = Microbus o Camión]: "); // Solicitar dato
		scanf("%i", &ntipo_vehiculo); // Leer dato

		printf("\n\n Ingrese el tipo de lavado [1 = Solo lavado, 2 = Lavado, Aspirado y Encerado]: "); // Solicitar dato
		scanf("%i", &ntipo_lavado); // Leer dato

		// Calcular Descuentos
		subtotal = precio * cantidad;

		if (subtotal >= 50000 && subtotal < 100000)
			descuento = 0.06;
		else if (subtotal >= 100000 && subtotal < 250000)
			descuento = 0.075;
		else if (subtotal >= 250000)
			descuento = 0.10;
		
		// Calcular Precio
		iva = subtotal * 0.13;

		total = (subtotal - descuento) + iva;

		if (ntipo_vehiculo == 1)
		{
			if (ntipo_lavado == 1)
			{
				precio = 3000;
				strcpy(tipo_lavado, "Solo Lavado");
				clavado1++;
				alavado1 += precio;
				plavado1 = alavado1/clavado1;
			}
			else if (ntipo_lavado == 2)
			{

				precio = 5000;
				strcpy(tipo_lavado, "Lavado, Aspirado y Encerado");
				clavado2++;
				alavado2 += precio;
				plavado2 = alavado2/clavado2;
			}
			strcpy(tipo_vehiculo, "Sencillo");
			csencillo++;
			asencillo += precio;
			psencillo = asencillo/csencillo;
		}
		else if (ntipo_vehiculo == 2)
		{
			if (ntipo_lavado == 1)
			{	
				precio = 5000;
				strcpy(tipo_lavado, "Solo Lavado");	
				clavado1++;
				alavado1 += precio;
				plavado1 = alavado1/clavado1;
			}
			else if (ntipo_lavado == 2)
			{
				precio = 7000;
				strcpy(tipo_lavado, "Lavado, Aspirado y Encerado");
				clavado2++;
				alavado2 += precio;
				plavado2 = alavado2/clavado2;
			}
			strcpy(tipo_vehiculo, "4x4");
			c44++;
			a44 += precio;
			p44 = a44/c44;
		}
		else if (ntipo_vehiculo == 3)
		{
			if (ntipo_lavado == 1)
			{
				precio = 5000;
				strcpy(tipo_lavado, "Solo Lavado");
				clavado1++;
				alavado1 += precio;
				plavado1 = alavado1/clavado1;
			}	
			else if (ntipo_lavado == 2)
			{
				precio = 7000;
				strcpy(tipo_lavado, "Lavado, Aspirado y Encerado");
				clavado2++;
				alavado2 += precio;
				plavado2 = alavado2/clavado2;
			}
			strcpy(tipo_vehiculo, "Microbus o Camión");
			cbus++;
			abus += precio;
			pbus = abus/cbus;
		}				

		cventas++;
		aventas += precio;
		pventas = aventas/cventas;


		//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa de Lavacar ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** Gracias por su compra ***"); // Imprimir mensaje
		printf("\n\n\t Placa: %s", placa); // Imprimir resultado
		printf("\n\t Marca: %s", marca); // Imprimir resultado
		printf("\n\t Modelo: %s", modelo); // Imprimir resultado
		printf("\n\t Tipo de Vehículo: %s", tipo_vehiculo); // Imprimir resultado
		printf("\n\t Tipo de Lavado: %s", tipo_lavado); // Imprimir resultado
		printf("\n\t Precio a Pagar: %.2f", precio); // Imprimir resultado
		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

void estadisticasTipoVehiculo()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Lavacar ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas por Tipo de Vehículo ***"); // Imprimir mensaje
	printf("\n\n\t Cantidad de Vehículos Tipo Sencillo: %i", csencillo); // Imprimir resultado
	printf("\n\t Dinero Acumulado de Vehículos Tipo Sencillo: %.2f", asencillo); // Imprimir resultado
	printf("\n\n\t Cantidad de Vehículos Tipo 4x4: %i", c44); // Imprimir resultado
	printf("\n\t Dinero Acumulado de Vehículos Tipo 4x4: %.2f", a44); // Imprimir resultado
	printf("\n\n\t Cantidad de Vehículos Tipo Microbus o Camión: %i", cbus); // Imprimir resultado
	printf("\n\t Dinero Acumulado de Vehículos Tipo Microbus o Camión: %.2f", abus); // Imprimir resultado
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	printf("\n\t Presione cualquier tecla para continuar\n"); // Imprimir resultado
	printf("\n\n\t ¿Desea volver al menú pricinal [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's');

	
	menu();

}


void estadisticasTipoLavado()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Lavacar ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Estadísticas por Tipo de Lavado ***"); // Imprimir mensaje
	printf("\n\n\t Cantidad de Vehículos Solo Lavado: %i", clavado1); // Imprimir resultado
	printf("\n\t Dinero Acumulado de Vehículos Solo Lavado: %.2f", alavado1); // Imprimir resultado
	printf("\n\t Promedio Acumulado de Vehículos Solo Lavado: %.2f", plavado1); // Imprimir resultado
	printf("\n\n\t Cantidad de Vehículos Lavado, Aspirado y Encerado: %i", clavado2); // Imprimir resultado
	printf("\n\t Dinero Acumulado de Vehículos Lavado, Aspirado y Encerado: %.2f", alavado2); // Imprimir resultado
	printf("\n\t Promedio Acumulado de Vehículos Lavado, Aspirado y Encerado: %.2f", plavado2); // Imprimir resultado
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	printf("\n\t Presione cualquier tecla para continuar\n"); // Imprimir resultado
	printf("\n\n\t ¿Desea volver al menú pricinal [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's');


	menu();

}

void graficosTipoVehiculo()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Lavacar ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Gráficos por Tipo de Vehículo ***"); // Imprimir mensaje
	printf("\n\n\t Sencillo: %s",std::string(csencillo,'=').c_str());
	printf("\n\t 4x4: %s",std::string(c44,'=').c_str()); // Imprimir resultado
	printf("\n\t Microbus o Camión: %s",std::string(cbus,'=').c_str()); // Imprimir resultado
	printf("\n\n\t *** Gracias ***\n"); // Imprimir mensaje para continuar

	printf("\n\t Presione cualquier tecla para continuar\n"); // Imprimir resultado
	printf("\n\n\t ¿Desea volver al menú pricinal [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's');


	menu();

}

void graficosTipoLavado()
{
	//system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS

	printf("\n\t *** Programa de Lavacar ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** Gráficos por Tipo de Lavado ***"); // Imprimir mensaje
	printf("\n\n\t Solo Lavado: %s",std::string(clavado1,'=').c_str()); // Imprimir resultado
	printf("\n\t Lavado, Aspirado y Encerado: %s",std::string(clavado2,'=').c_str()); // Imprimir resultado
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