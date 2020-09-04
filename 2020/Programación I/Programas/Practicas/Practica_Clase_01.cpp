// Practica_Clase_01
// Ejemplo Tarea 5 (23/06/20)
// Andrés Montenegro

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
//#include <conio.h>
//#include <iostream>
//using namespace std;

// Variables globales
int n1, n2, mayor, menor;
float resultado;
char operador, continuar;

int main()
{
	do
	{
		system("cls");
		system("color 5f");

		printf("\n\t *** Programa de Cálculo de Operaciones ***");
		printf("\n\t *** Desarrollado por Andrés Montenegro ***");

		printf("\n\n Ingrese el primer número entero: ");
		scanf("%i", &n1);

		printf("\n\n Ingrese el primer número entero: ");
		scanf("%i", &n1);
		
		printf("\n\n Ingrese el operador matemático (+, -, *, /): ");
		do
		{
			//fflush(stdin);
			//scanf("%c", &operador);
			operador = getch();
		} while (operador != '+' && operador != '-' && operador != '*' && operador != '/');

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

		if (operador == '+')
			resultado = mayor + menor;
		else if (operador == '-')
			resultado = mayor - menor;
		else if (operador == '*')
			resultado = mayor * menor;
		else if (operador == '/')
			resultado = mayor / menor;

		system("cls");
		printf("\n\t *** Programa de Cálculo de Operaciones ***");
		printf("\n\n %i %c %i = %f", mayor, operador, menor, resultado);
		printf("\n\n\n\t Desea realizar otra operación (S/N)?");
		do
		{
			continuar = getch();
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}