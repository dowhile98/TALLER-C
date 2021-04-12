/*
 ============================================================================
 Name        : OPERADORES_ARITMETICOS.c
 Author      : QUINO B. JEFFRY
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*variables globales*/
int num1, num2; 			//para los operadores
int res;					//para el resultado
int main(void) {
	puts("!!!INGRESE NUMEROS!!!"); /* prints !!!OPERADOREES ARITMETICOS!!! */
	printf("numero 1-> ");
	scanf("%d",&num1);
	printf("numero 2-> ");
	scanf("%d",&num2);

	/*suma*/
	res = num1 + num2;
	puts("SE MUESTRAN LOS RESULTADOS!!!!");
	printf("suma->%d\n",res);
	/*resta*/
	res = num1 - num2;
	printf("resta->%d\n",res);
	/*multiplicacion*/
	res = num1 * num2;
	printf("mult->%d\n",res);

	/*division*/

	float resDiv = (float)num1 / num2;;
	printf("div->%f\n",resDiv);

	/*resto*/
	res = num1 % num2;
	printf("modulo->%d\n",res);
	getch();
	return EXIT_SUCCESS;
}
