/*
 ============================================================================
 Name        : PUNTEROS.c
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



/* tipoDeRetorno nombre parametros*/
void modif(uint32_t punt){ //paso por valor
	punt += 10;
}

void modificar(uint32_t *punt){//paso por referencia
	*punt += 10;
}
int main(void) {

//	uint32_t a;
	uint32_t *p;
	uint32_t a[5] = {1,2,3,4,5};

//	puts("!!!MANEJO DE PUNTEROS!!!"); /* prints !!!MANEJO DE PUNTEROS!!! */
//	a = 10;
//	pA = &a;
//	printf("el valor de a ->%d\n",a);
//	modificar(&a);
////	*pA = 25;
//	printf("el valor de a ->%d\n",a);
//	printf("la direccion de memoria es->%p\n",pA);

	for(int i = 0;i<5;i++){
		printf("a[%d]->%d\n",i,a[i]);
	}
	p = a;
	for(int i = 0;i<5;i++){
		(*p++) +=10;
	}
	puts("el valor de a modificado");
	for(int i = 0;i<5;i++){
		printf("a[%d]->%d\n",i,a[i]);
	}
	getch();
	return EXIT_SUCCESS;
}
