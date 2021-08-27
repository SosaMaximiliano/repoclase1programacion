/*
 ============================================================================
 Name        : PROGRAMACION.c
 Author      : Max
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAYOR_DE_EDAD 18 //MACRO

int main(void)
{

	//WINDOWS (sin esto, probablemente no muestre el codigo en consola)
	setbuf(stdout, NULL);

	//TIPO NOMBRE;
	int a; // numeros enteros

	float f; // numeros con decimales

	char c; // un solo caracter

	printf("Ingresame tu edad:");

	fflush(stdin); //limpiar el buffer antes de leer
	scanf("%d",&a); // El & indica la direccion de la variable para reescribir
	printf("la edad es: %d",a);

	if (a>MAYOR_DE_EDAD)
	{
		printf("\n Mayor de edad");
	}

	//BUCLES
	//while
	//for
	//do while

	/*
	Si sé cuántas veces voy a iterar -> for
	Si no sé, -> while
	Si primero quiero ejecutar y despues generar la condición -> do while
	*/

	char respuesta;

	do
	{

		printf("Continua? s/n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta=="s");

	return EXIT_SUCCESS;
}

