/*
 ============================================================================
 Name        : OPEREDORES_BINARIOS.c
 Author      : QUINO B. JEFFRY
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>


uint32_t reg; /*0x0000000*/  /*0x0 -> 0b0000*/


int main(void) {
	puts("!!!OPERADOREES BINARIOS!!!"); /* prints !!!OPERADOREES BINARIOS!!! */
	printf("ingrese un numero->");
	scanf("%d",&reg);

	if(reg & 0b10000000){
		printf("el bit de la pocision 7 es 1\n");
	}
	else{
		printf("el bit de la posicion 7 no es 1\n");
	}

	getch();
	return EXIT_SUCCESS;
}
