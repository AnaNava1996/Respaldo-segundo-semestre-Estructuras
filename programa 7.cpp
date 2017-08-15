#include <stdio.h>   /*caso 4  puntero a estructura con puntero a arreglo*/
#include <stdlib.h>
struct nodo{
	int arreglo[5];
	int *ptr;
};

int main(){
	struct nodo var1,*ptrs;
	ptrs=&var1;
	for(ptrs->ptr=ptrs->arreglo;ptrs->ptr<&ptrs->arreglo[5];ptrs->ptr++){
		printf("Ingresa un entero: ");
		scanf("%d", ptrs->ptr);
	}

	for(ptrs->ptr=ptrs->arreglo;ptrs->ptr<&ptrs->arreglo[5];ptrs->ptr++){
		printf("En la posicion %d esta el valor %d en la direccion %lu \n",(int)(ptrs->ptr-ptrs->arreglo),*ptrs->ptr,ptrs->ptr);
		//scanf("%d", ptrs->ptr);
	}

}

