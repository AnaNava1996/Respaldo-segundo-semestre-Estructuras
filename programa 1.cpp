#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,n;
	float c;
	char d;
	int *ptrA;
	n=printf("hola\n"); //regresa el tamaño de la cadena que imprime
	printf("El tamaño de la cadena es %d\n",n);
	//a=5;
	printf("La variable a contiene %d y esta en la direccion %lu\n",a,&a);
	a=5;
	printf("La variable a contiene %d y esta en la direccion %lu\n",a,&a);
	printf("El entero ocupa %d bytes\n",sizeof(int));
	printf("El long ocupa %d bytes\n",sizeof(float));
	printf("El float ocupa %d bytes\n",sizeof(double));
	printf("El double ocupa %d bytes\n",sizeof(long));
	printf("El char ocupa %d bytes\n",sizeof(char));
	ptrA=&a;
	printf("La variable apuntador prtA tiene el valor %lu y está en la direccion %lu, y el contenido al que apunta es %d\n", ptrA, &ptrA, *ptrA);
	return 0;
}

