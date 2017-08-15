#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr1[10];
	int *ptr,i;
	ptr= arr1;
	printf("La direccion de inicio del arreglo es %lu",arr1);
	printf("o tambien %lu\n", &arr1[0]);
	for (i=0; i<10;i++){
		printf("Ingresa un entero: ");
		scanf("%d",&arr1[i]);
	}
	for (i=0; i<10;i++){
		printf("La celda %d contiene el valor %d y esta en la direccion %lu \n",i,arr1[i],&arr1[i]);
		//scanf("%d",&arr1[i]);
	}

	return 0;
}

