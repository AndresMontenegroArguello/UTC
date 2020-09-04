// Proyecto01_Ejercicio01_MacOSX.cpp
// Proyecto 01: Ejercicio 01
// Cálculo de Notas
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
#include<ctype.h>

// Variables globales
int nota_q1, nota_q2, nota_p1, nota_p2, nota_p3, nota_e1, nota_e2, nota_e3, ctotal, caprobados, caplazados, creprobados; // Variables de tipo entero
float pq, pp, pe, pf, ptotal, paprobados, paplazados, preprobados; // Variables de tipo flotante
char carnet[25], nombre[25], condicion[25], continuar; // Variables de tipo caracter. 

int main()
{
	do
	{
		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		//system("color 5f"); // Configurar color de pantalla: Utilizo el comando de sistema "color 5f" para compilar en Windows OS

		printf("\n\t *** Programa de Cálculo de Notas ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador

		printf("\n\n Ingrese el número de carnet: "); // Solicitar dato: Carnet
		scanf("%s", &carnet); // Leer dato: Carnet

		printf("\n\n Ingrese el nombre del estudiante: "); // Solicitar dato: Nombre
		scanf("%s", &nombre); // Leer dato: Nombre

		printf("\n\n Ingrese la nota del primer quiz: "); // Solicitar dato: Nota Primer Quiz
		scanf("%i", &nota_q1); // Leer dato: Nota Primer Quiz

		printf("\n\n Ingrese la nota del segundo quiz: "); // Solicitar dato: Nota Segundo Quiz
		scanf("%i", &nota_q2); // Leer dato: Nota Segundo Quiz

		printf("\n\n Ingrese la nota del primer proyecto: "); // Solicitar dato: Nota Primer Proyecto
		scanf("%i", &nota_p1); // Leer dato:  Nota Primer Proyecto

		printf("\n\n Ingrese la nota del segundo proyecto: "); // Solicitar dato: Nota Segundo Proyecto
		scanf("%i", &nota_p2); // Leer dato:  Nota Segundo Proyecto

		printf("\n\n Ingrese la nota del tercer proyecto: "); // Solicitar dato: Nota Tercer Proyecto
		scanf("%i", &nota_p3); // Leer dato:  Nota Tercer Proyecto

		printf("\n\n Ingrese la nota del primer examen: "); // Solicitar dato: Nota Primer Examen
		scanf("%i", &nota_e1); // Leer dato:  Nota Primer Examen

		printf("\n\n Ingrese la nota del segundo examen: "); // Solicitar dato: Nota Segundo Examen
		scanf("%i", &nota_e2); // Leer dato:  Nota Segundo Examen

		printf("\n\n Ingrese la nota del tercer examen:Tercer "); // Solicitar dato: Nota Tercer Examen
		scanf("%i", &nota_e3); // Leer dato:  Nota Primer Examen

		// Calcular Promedios

		pq = (float)(nota_q1 + nota_q2) / 200 * 10.0
		pp = (float)(nota_p1 + nota_p2 + nota_p3) / 300 * 30.0
		pe = (float)(nota_e1 + nota_e2 + nota_e3) / 300 * 60.0
		pf = pq + pp + pe

		// Generar condición
		if (pf >= 70)
			condicion = 'Aprobado';
		else if (pf >= 60 && pf <70)
			condicion = 'Aplazado';
		else if (pf < 60)
			condicion = 'Reprobado';

		system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
		//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
		
		printf("\n\t *** Programa de Cálculo de Notas ***"); // Imprimir mensaje de Bienvenida
		printf("\n\t *** Desarrollado por Andrés Montenegro ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.amsoftware.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** https://www.andresmontenegro.co ***"); // Imprimir mensaje de Desarrollador
		printf("\n\t *** Resultados del Estudiante ***"); // Imprimir mensaje
		printf("\n\n\t Carnet: %s", carnet); // Imprimir resultado
		printf("\n\t Nombre: %s", nombre); // Imprimir resultado
		printf("\n\t Nota - Quiz 1: %i", nota_q1); // Imprimir resultado
		printf("\n\t Nota - Quiz 2: %i", nota_q2); // Imprimir resultado
		printf("\n\t Nota - Proyecto 1: %i", nota_p1); // Imprimir resultado
		printf("\n\t Nota - Proyecto 2: %i", nota_p2); // Imprimir resultado
		printf("\n\t Nota - Proyecto 3: %i", nota_p3); // Imprimir resultado
		printf("\n\t Nota - Examen 1: %i", nota_e1); // Imprimir resultado
		printf("\n\t Nota - Examen 2: %i", nota_e2); // Imprimir resultado
		printf("\n\t Nota - Examen 3: %i", nota_e3); // Imprimir resultado
		printf("\n\t Porcentaje - Quizes: %.2f", pq); // Imprimir resultado
		printf("\n\t Porcentaje - Proyectos: %.2f", pp); // Imprimir resultado
		printf("\n\t Porcentaje - Examenes: %.2f", pe); // Imprimir resultado
		printf("\n\t Promedio final: %.2f", pf); // Imprimir resultado
		printf("\n\t Condición: %s", condicion); // Imprimir resultado
		printf("\n\n\t ¿Desea continuar [S/N]?"); // Imprimir mensaje para continuar
		do// Iniciar ciclo de validación para continuar
		{
			scanf("%c", &continuar); // Leer dato: Continuar
		} while (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n');

	} while (continuar == 'S' || continuar == 's');

	system("clear"); // Borrar la pantalla: Utilizo el comando de sistema "clear" para compilar en Mac OS X
	//system("cls"); // Borrar la pantalla: Utilizo el comando de sistema "cls" para compilar en Windows OS
	return 0;
}