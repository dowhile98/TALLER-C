/*
 ============================================================================
 Name        : OPERADORES_BIT_A_BIT.c
 Author      : QUINO B. JEFFRY
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>


/*variable global*/
uint8_t PORTA;
void delay(uint32_t x){


}
int main(void) {
	puts("!!!OPERADOREES BINARIOS!!!"); /* prints !!!OPERADOREES BINARIOS!!! */

//	printf("el valor de a->%d\n",a);
//	a = a | 0x4;						//0100
//	printf("el valor de a->%d\n",a);
//	a |= 1<<2;							//0100
//	printf("el valor de a->%d\n",a);
//
//	a = a & ~(1<<2);					    // 0100 * (1011)
//	printf("el valor de a->%08x\n",a);
//	a |= 1<<6 | 1<< 2;						//01000100 <> 0x44
//	printf("el valor de a->%08x\n",a);
//
//	a ^= 1<<6 | 1<<5;
//	printf("el valor de a->%08x\n",a);		//0x24 <> 0010 0100
//
//	if( a & 1<<6){
//		printf("el bit de la posicion 5 es 1");
//	}
//	else
//		printf("el bit de la posicion 5 es 0");

	PORTA |= 0xFF;			//1111 1111

	printf("el valor de a->%08x\n",PORTA);
	delay(100);
	PORTA &=~(1<<1 | 1<< 3 | 1<<7);        //0111 0101 <> 75
	printf("el valor de a->%08x\n",PORTA);
	getch();
	return EXIT_SUCCESS;
}
