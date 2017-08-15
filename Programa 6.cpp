#include <stdio.h>
#include <stdlib.h>
struct nodo{
	int arreglo[5];
	int i;
};

struct nodo2{
	int arreglo[5];
	int *ptr;
};



int main(){
	struct nodo var1;
	for (var1.i=0;var1.i<5;var1.i++){
		printf("Ingresa un entero: ");
		scanf("%d",&var1.arreglo[var1.i]);
		printf("En la posicion %d esta el valor %d en la direccion %lu\n",var1.i,var1.arreglo[var1.i],&var1.arreglo[var1.i]);
	}


	struct nodo2 var2;
	for (var2.ptr=var2.arreglo;var2.ptr<&var2.arreglo[5];var2.ptr++){  //for(ptrs->i=0;ptr.i<5;ptrs->i++) con puntero a estructura
		printf("Ingresa un entero: ");
		scanf("%d",var2.ptr);
		printf("En la posicion %d esta el valor %d en la direccion %lu\n", (int )(var2.ptr-var2.arreglo),*var2.ptr,var2.ptr);
	}



}

