/*
 ============================================================================
 Name        : TP-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/* TP#1: Imprimir Tabla Celsius a Fahrenheit
 * Autor: Nadia E. Gutierrez
 * Fecha: 12/04/2015 */

#include <stdio.h>

 int main(void) {
	 int cel;	/*Variable para grados Celsius*/

	 printf("%10s %13s\n","Celsius","Fahrenheit");	/*Imprime Encabezado Tabla*/

	 for (cel=-100; cel<=300;cel = cel + 20)		/*Imprime Tabla de Valores Celsius-Fahrenheit */
		 printf("%8d %12.0f\n",cel,(cel*(9.0/5.0)+32));

	 return 0;
}
