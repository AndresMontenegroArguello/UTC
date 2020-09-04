// Proyecto03_MacOSX.cpp
// Proyecto 03
// Control de Peaje de Autopista
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
#include <iostream>



//Constantes
const int f=1000, c=1000; // f es la constante para definir el tamaño de la fila y c es la constante para definir el tamaño de la columna

// Arreglos 
int matriz[f][c];

// Variables globales
// Variables globales
int pf = 0, factura, tipo, caseta; // Variables de tipo entero
float pago, pagacon, vuelto; // Variables de tipo flotante
char placa[25], fecha[25], hora[25]; // Variables de tipo caracter. 

// Prototipos
void menu();
void inicializarMatriz();
void nuevoPasoVehicular();
void consultarFactura();
void modificarFactura();
void eliminarFactura();
void reportes();
void reporteTotal();
void reportePlaca();
void reporteCaseta();
void reporteTipo();

// Funciones

// Validar Factura
int facturaValida(int valor)
{
	int i,j,enco=0;
	
	for (i=0; i<f; i++)
	{
		if (valor == matriz[i][0])
		{
			enco=1;
			break;
		}
	}
	
	return enco;
}

// Validar Placa
int facturaPlaca(int valor)
{
	int i,j,enco=0;
	
	for (i=0; i<f; i++)
	{
		if (valor == matriz[i][1])
		{
			enco=1;
			break;
		}
	}
	
	return enco;
}

// Menu
void menu()
{
	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	printf("\n\n\t *** Menu Principal ***"); // Menu Principal
	printf("\n\t ========================"); // Menu Principal
	printf("\n 1- Inicializar Matriz "); // Opción
	printf("\n 2- Ingresar Paso Vehicular "); // Opción
	printf("\n 3- Consultar Paso Vehicular x Número de Factura"); // Opción
	printf("\n 4- Modificar Paso Vehicular x Número de Factura"); // Opción
	printf("\n 5- Eliminar Paso Vehicular x Número de Factura"); // Opción
	printf("\n 6- Reportes"); // Opción
	printf("\n 7- Salir "); // Opción
	printf("\n\t ========================\n\n"); // Menu Principal

	do
	{
		scanf("%i", &opcion); // Leer dato: Opción
	} while (opcion < 1 || opcion > 7);

	switch(opcion)
	{
		case 1:
			inicializarMatriz();
		case 2:
			nuevoPasoVehicular();
		case 3:
			consultarFactura();
		case 5:
			modificarFactura();
		case 6:
			eliminarFactura();
		case 7:
			exit(0);
	}
}

// Inicializar Matriz
void inicializarMatriz() {
	
	// Inicializar
	for (i=0; i<f; i++) // Filas
	{
		for (j=0; j<c; j++)  // Columnas
		{
			matriz[i][j]=0;
		}
	}
	
	//inicializamos los contadores para la posicion
	pf=0;
	pc=0;
}

// Nuevo Paso Vehicular
void nuevoPasoVehicular()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Menu Principal ***"); // Menu Principal
		printf("\n\t ========================"); // Menu Principal
		factura = pf;
		printf("\n Número de Factura: "); // Solicitar dato
		printf("%i", &factura);

		printf("\n Número de Placa: "); // Solicitar dato
		scanf("%s", placa); // Leer dato

		printf("\n\n Fecha: "); // Solicitar dato
		scanf("%s", fecha); // Leer dato

		printf("\n\n Hora: "); // Solicitar dato
		scanf("%s", hora); // Leer dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Solicitar dato
		scanf("%i", &tipo); // Leer dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Solicitar dato
		scanf("%i", &caseta); // Leer dato

		// Calcular Monto a Pagar
		if (tipo == 1)
		{
			pago = 700;
		}
		else if (tipo == 2)
		{
			pago = 2700;
		}
		else if (tipo == 3)
		{
			pago = 500;
		}
		else if (tipo == 4)
		{
			pago = 3700;
		}

		printf("\n\n Monto a Pagar: "); // Solicitar dato
		printf("%i", &pago);

		printf("\n\n Paga con: "); // Solicitar dato
		// Calcular Vuelto
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%i", &pagacon); // Leer dat
			if (pagacon < pago)
			{
				printf("Monto incompleto");
			}
			else
			{
				vuelto = pagacon-pago;
			}
		} while (pagacon < pago);

		printf("\n\n Vuelto: "); // Solicitar dato
		scanf("%i", &vuelto); // Leer dato

		// Guardar
		matriz[pf][0] = factura;
		matriz[pf][1] = placa;
		matriz[pf][2] = fecha;
		matriz[pf][3] = hora;
		matriz[pf][4] = tipo;
		matriz[pf][5] = caseta;
		matriz[pf][6] = pago;
		matriz[pf][7] = pagacon;
		matriz[pf][8] = vuelto;
		//pc=0;
		pf++;
			    
		printf("Factura guardada con número: %i",pf);

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

// Consultar Paso Vehicular x Número de Factura
void consultarFactura()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Consultar x Número de Factura ***"); // Menu Principal
		printf("\n\t ==================================="); // Menu Principal
		printf("\n Número de Factura: "); // Solicitar dato
		scanf("%i", &factura); // Leer Dato
		
		if (facturaValida(factura) == 0)
		{
			printf("Número de factura %i no existe.", factura);
			printf("Pulse cualquier tecla para regresar al menú.");
			getch();
			menu();
		}
		
		printf("\n Número de Placa: "); // Mostrar dato
		printf("%s", placa); // Mostrar dato

		printf("\n Número de Factura: "); // Mostrar dato
		printf("%i", &factura); // Mostrar dato

		printf("\n\n Fecha: "); // Mostrar dato
		printf("%s", fecha); // Mostrar dato

		printf("\n\n Hora: "); // Mostrar dato
		printf("%s", hora); // Mostrar dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
		printf("%i", &tipo); // Mostar dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
		printf("%i", &caseta); // Mostrar dato

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

// Modificar Paso Vehicular x Número de Factura
void modificarFactura()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Modificar x Número de Factura ***"); // Menu Principal
		printf("\n\t ==================================="); // Menu Principal
		printf("\n Número de Factura: "); // Solicitar dato
		scanf("%i", &factura); // Leer Dato

		if (facturaValida() == 0)
		{
			printf("Número de factura %i no existe.", factura);
			printf("Pulse cualquier tecla para regresar al menú.");
			getch();
			menu();
		}

		// Mostrar datos
		printf("\n Número de Factura: "); // Mostrar dato
		printf("%i", &factura); // Mostrar dato

		printf("\n Número de Placa: "); // Mostrar dato
		printf("%s", placa); // Mostrar dato

		printf("\n\n Fecha: "); // Mostrar dato
		printf("%s", fecha); // Mostrar dato

		printf("\n\n Hora: "); // Mostrar dato
		printf("%s", hora); // Mostrar dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
		printf("%i", &tipo); // Mostar dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
		printf("%i", &caseta); // Mostrar dato


		// Menu
		printf("\n\n\t *** Qué dato desea modificar? ***"); // Menu 
		printf("\n\t ========================"); // Menu 
		printf("\n 1- Número de Placa"); // Opción
		printf("\n 2- Fecha"); // Opción
		printf("\n 3- Hora"); // Opción
		printf("\n 4- Tipo de Vehiculo"); // Opción
		printf("\n 5- Tipo de Caseta"); // Opción
		printf("\n\t ========================\n\n"); // Menu

		do
		{
			scanf("%i", &opcion); // Leer dato: Opción
		} while (opcion < 1 || opcion > 5);

		switch(opcion)
		{
			case 1:
			{	
				printf("\n Número de Placa: "); // Solicitar dato
				scanf("%s", placa); // Leer dato
				matriz[factura][1] = placa;
			}
			case 2:
			{
				printf("\n\n Fecha: "); // Solicitar dato
				scanf("%s", fecha); // Leer dato
				matriz[pf][2] = fecha;
			}
			case 3:
			{
				printf("\n\n Hora: "); // Solicitar dato
				scanf("%s", hora); // Leer dato
				matriz[pf][3] = hora;

			}
			case 4:
			{
				printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Solicitar dato
				scanf("%i", &tipo); // Leer dato
				matriz[pf][4] = tipo;

			}
			case 5:
			{
				printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Solicitar dato
				scanf("%i", &caseta); // Leer dato

				// Calcular Monto a Pagar
				if (tipo == 1)
				{
					pago = 700;
				}
				else if (tipo == 2)
				{
					pago = 2700;
				}
				else if (tipo == 3)
				{
					pago = 500;
				}
				else if (tipo == 4)
				{
					pago = 3700;
				}

				printf("\n\n Monto a Pagar: "); // Solicitar dato
				printf("%i", &pago);

				printf("\n\n Paga con: "); // Solicitar dato
				// Calcular Vuelto
				do// Iniciar ciclo de validación para continuar
				{
					scanf("%i", &pagacon); // Leer dat
					if (pagacon < pago)
					{
						printf("Monto incompleto");
					}
					else
					{
						vuelto = pagacon-pago;
					}
				} while (pagacon < pago);

				printf("\n\n Vuelto: "); // Solicitar dato
				scanf("%i", &vuelto); // Leer dato

				matriz[pf][5] = caseta;
				matriz[pf][6] = pago;
				matriz[pf][7] = pagacon;
				matriz[pf][8] = vuelto;
			}
		}
			    
		printf("\n\nFactura con número %i ha sido modificada.", &factura);

		printf("\n\nNuevos datos de la factura número %i", &factura);
		printf("\n\t ========================"); // Menu 

		
		printf("\n\n Número de Factura: "); // Mostrar dato
		printf("%i", &factura); // Mostrar dato

		printf("\n Número de Placa: "); // Mostrar dato
		printf("%s", placa); // Mostrar dato

		printf("\n\n Fecha: "); // Mostrar dato
		printf("%s", fecha); // Mostrar dato

		printf("\n\n Hora: "); // Mostrar dato
		printf("%s", hora); // Mostrar dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
		printf("%i", &tipo); // Mostar dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
		printf("%i", &caseta); // Mostrar dato

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

// Eliminar Paso Vehicular x Número de Factura
void eliminarFactura()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Eliminar x Número de Factura ***"); // Menu Principal
		printf("\n\t ==================================="); // Menu Principal
		printf("\n Número de Factura: "); // Solicitar dato
		scanf("%i", &factura); // Leer Dato

		if (facturaValida() == 0)
		{
			printf("Número de factura %i no existe.", factura);
			printf("Pulse cualquier tecla para regresar al menú.");
			getch();
			menu();
		}
		
		printf("\n Número de Factura: "); // Mostrar dato
		printf("%s", factura); // Mostrar dato

		printf("\n Número de Placa: "); // Mostrar dato
		printf("%s", placa); // Mostrar dato

		printf("\n\n Fecha: "); // Mostrar dato
		printf("%s", fecha); // Mostrar dato

		printf("\n\n Hora: "); // Mostrar dato
		printf("%s", hora); // Mostrar dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
		printf("%i", &tipo); // Mostar dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
		printf("%i", &caseta); // Mostrar dato

		printf("\n\n\t ¿Está seguro que desea eliminar esta factura [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

		if (continuar == 'S' || continuar == 's')
		{
			// Eliminar
			for(i=0; i<9; i++)
			{
				matriz[factura][i] = 0;
			}
			printf("La factura ha sido eliminada.");
		}

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');


	} while (continuar == 'S' || continuar == 's');

	menu();
}

// Reportes
void reportes()
{
	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

	printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
	printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
	printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

	printf("\n\n\t *** Reportes ***"); // Menu Principal
	printf("\n\t ========================"); // Menu Principal
	printf("\n 1- Reporte Total "); // Opción
	printf("\n 2- Reporte x Número de Placa "); // Opción
	printf("\n 3- Reporte x Número de Caseta"); // Opción
	printf("\n 4- Reporte x Tipo de Vehiculo"); // Opción
	printf("\n 5- Regresar al Menú Principal"); // Opción
	printf("\n\t ========================\n\n"); // Menu Principal

	do
	{
		scanf("%i", &opcion); // Leer dato: Opción
	} while (opcion < 1 || opcion > 7);

	switch(opcion)
	{
		case 1:
			reporteTotal();
		case 2:
			reportePlaca();
		case 3:
			reporteCaseta();
		case 5:
			reporteTipo();
		case 6:
			menu();
	}
}

// Reporte Total
void reporteTotal()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Reporte Total ***"); // Menu Principal
		printf("\n\t ==================================="); // Menu Principal
		
		for (i=0; i<pf; i++)
		{
			factura = matriz[i][0];
			placa = matriz[i][1];
			fecha = matriz[i][2];
			hora = matriz[i][3];
			tipo = matriz[i][4];
			caseta = matriz[i][5];
			pago = matriz[i][6];
			pagacon = matriz[i][7];
			vuelto = matriz[i][8];

			printf("\n Número de Placa: "); // Mostrar dato
			printf("%s", placa); // Mostrar dato

			printf("\n Número de Factura: "); // Mostrar dato
			printf("%i", &factura); // Mostrar dato

			printf("\n\n Fecha: "); // Mostrar dato
			printf("%s", fecha); // Mostrar dato

			printf("\n\n Hora: "); // Mostrar dato
			printf("%s", hora); // Mostrar dato

			printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
			printf("%i", &tipo); // Mostar dato

			printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
			printf("%i", &caseta); // Mostrar dato
		}

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

// Reporte x Placa
void reportePlaca()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Reporte x Número de Placa ***"); // Menu Principal
		printf("\n\t ==================================="); // Menu Principal
		printf("\n Número de Placa: "); // Solicitar dato
		scanf("%i", &placa); // Leer Dato
		
		if (placaValida(placa) == 0)
		{
			printf("Número de placa %i no existe.", factura);
			printf("Pulse cualquier tecla para regresar al menú.");
			getch();
			menu();
		}
		
		printf("\n Número de Placa: "); // Mostrar dato
		printf("%s", placa); // Mostrar dato

		printf("\n Número de Factura: "); // Mostrar dato
		printf("%i", &factura); // Mostrar dato

		printf("\n\n Fecha: "); // Mostrar dato
		printf("%s", fecha); // Mostrar dato

		printf("\n\n Hora: "); // Mostrar dato
		printf("%s", hora); // Mostrar dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
		printf("%i", &tipo); // Mostar dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
		printf("%i", &caseta); // Mostrar dato

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}


// Reporte x Caseta
void reporteCaseta()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Reporte x Número de Caseta ***"); // Menu Principal
		printf("\n\t ==================================="); // Menu Principal
		printf("\n Número de Caseta: "); // Solicitar dato
		scanf("%i", &caseta); // Leer Dato
		
		if (tipo < 1 && tipo > 3)
		{
			printf("Tipo de vehiculo %i invalido.", factura);
			printf("Pulse cualquier tecla para regresar al menú.");
			getch();
			menu();
		}
		
		printf("\n Número de Placa: "); // Mostrar dato
		printf("%s", placa); // Mostrar dato

		printf("\n Número de Factura: "); // Mostrar dato
		printf("%i", &factura); // Mostrar dato

		printf("\n\n Fecha: "); // Mostrar dato
		printf("%s", fecha); // Mostrar dato

		printf("\n\n Hora: "); // Mostrar dato
		printf("%s", hora); // Mostrar dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
		printf("%i", &tipo); // Mostar dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
		printf("%i", &caseta); // Mostrar dato

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

// Reporte x Tipo
void reporteTipo()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Control de Peaje de Autopista ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		
		printf("\n\n\t *** Reporte x Número de Placa ***"); // Menu Principal
		printf("\n\t ==================================="); // Menu Principal
		printf("\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Solicitar dato
		scanf("%i", &tipo); // Leer Dato
		
		if (tipo < 1 && tipo > 4)
		{
			printf("Tipo de vehiculo %i invalido.", tipo);
			printf("Pulse cualquier tecla para regresar al menú.");
			getch();
			menu();
		}
		
		printf("\n Número de Placa: "); // Mostrar dato
		printf("%s", placa); // Mostrar dato

		printf("\n Número de Factura: "); // Mostrar dato
		printf("%i", &factura); // Mostrar dato

		printf("\n\n Fecha: "); // Mostrar dato
		printf("%s", fecha); // Mostrar dato

		printf("\n\n Hora: "); // Mostrar dato
		printf("%s", hora); // Mostrar dato

		printf("\n\n Tipo de Vehiculo [1 = Moto, 2 = Vehiculo Liviano, 3 = Camion o Pesado, 4 = Autobus]: "); // Mostrar dato
		printf("%i", &tipo); // Mostar dato

		printf("\n\n Tipo de Caseta [1 = Caseta 1, 2 = Caseta 2, 3 = Caseta 3]: "); // Mostrar dato
		printf("%i", &caseta); // Mostrar dato

		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	menu();
}

// Función Principal

int main()
{
	menu();

	return 0;
}