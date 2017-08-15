#include <stdlib.h>
#include <stdio.h>


struct elemento {
	char cadena[20];
	int edad;
	char sexo[20];
};

struct nodo {
	struct elemento arreglo[5];
	int i; //struct elemento
};

int main (){
	struct nodo var1;
	for(var1.i=0;var1.i<5;var1.i++){
		
		printf("Ingresa la cadena: ");
		fflush(stdin);
		gets(var1.arreglo[var1.i].cadena);
		printf("Ingresa edad: ");
		scanf("%d",&var1.arreglo[var1.i].edad);
		printf("Ingresa cadena2: ");
		fflush(stdin);
		gets(var1.arreglo[var1.i].sexo);
		
	}
	for(var1.i=0;var1.i<5;var1.i++){
		printf("En la celda %d esta la cadena %s en la direccion %lu\n ",var1.i,var1.arreglo[var1.i].cadena,&var1.arreglo[var1.i].cadena);
		printf("En la celda %d esta el entero %d en la direccion %lu\n ",var1.i,var1.arreglo[var1.i].edad,&var1.arreglo[var1.i].edad);
		printf("En la celda %d esta la otra cadena %c en la direccion %lu\n ",var1.i,var1.arreglo[var1.i].sexo,&var1.arreglo[var1.i].sexo);


	}

	return 0;
}


