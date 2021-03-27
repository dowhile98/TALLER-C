/*
 ============================================================================
 Name        : VARIABLES.c
 Author      : QUINO B. JEFFRY
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <conio.h>
#include <stdint.h> /*integer types->  	int8_t
										int16_t
										int32_t
										uint8_t
										uint16_t
										uint32_t*/

/*variables globales*/

//el uint8_t  reemplaza-> unsigned char
uint8_t age = 10;  		/*tipo identificador valorInicial*/
char ch = 'c';			/*representacion de un caracter*/
char *str = "ANSI C";	/*forma de declarar una cadena*/
int main(void) {

	/*variables locales*/
	float pi = 3.141592; 	/*en punto flotante se usa el punto para separar el punto decimal*/
	printf("********PRIMER PROGRAMA EN C*****\n\n");
	printf("mi edad es->%d\n",age);
	printf("el valor de pi->%.3f\n",pi);/*Como se puede observar estoy haciendo uso de cuantos
	 	 	 	 	 	 	 	 	 	 decimales quiero que se muestren y uso el indentificador
	 	 	 	 	 	 	 	 	 	 'f' el cual indica que es un numero flotante*/
	printf("esto es una letra->%c\n",ch);
	printf("esto es un texto->%s\n",str);
	getch();
	return 0;
}
