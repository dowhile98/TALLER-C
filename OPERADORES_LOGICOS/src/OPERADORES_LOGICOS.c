/*
 ============================================================================
 Name        : OPERADORES_LOGICOS.c
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

//	if(/*operacion logica*/ num1 > num2){ //then
//		puts("el numero 1 es mayor que el numero 2");
//	}
//	else if(num1 == num2){
//		puts("el numero 1  es igual que el numero 2");
//	}
//
//
//	else {
//		puts("el numero 2 es mayor que el numero 1");
//	}
///*otra sentencia de decision*/
//	switch(num1){
//	case 1:
//		puts("el numero ingresado es 1");
//		break;
//	case 2:
//		puts("el numero ingresado es 2");
//		break;
//	default:
//		puts("la condicion no se cumple");
//	}
	/*saber si la suma esta entre 100 y 1000*/
	res = num1 + num2;
	if(res>100 && res<1000){
		puts("la suma esta en el rango de 100 a 1000");
	}
	getch();
	return 0;
}
