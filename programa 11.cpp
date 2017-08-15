#include <stdio.h>
#include <stdlib.h>

struct dato{
	char nombre[30];
	int edad;
	char sexo;
};

struct agenda{
	struct dato arreglo[5];
	struct dato *ptr;
};

int main(){
	struct agenda var1;
	struct agenda *ptrs;
	ptrs=&var1;
	
	for(ptrs->ptr=ptrs->arreglo;ptrs->ptr<&ptrs->arreglo[5];ptrs->ptr++){
		setbuf(stdin,NULL);
		printf("Ingrese el nombre(la cadena): ");
		setbuf(stdin,NULL);
		gets(ptrs->ptr->nombre);
		setbuf(stdin,NULL);
		printf("Ingrese la edad (entero): ");
		setbuf(stdin,NULL);
		scanf("%d",&ptrs->ptr->edad);
		setbuf(stdin,NULL);
		printf("ingrese el sexo(caracter): ");
		setbuf(stdin,NULL);
		ptrs->ptr->sexo=getchar(); getchar();
		setbuf(stdin,NULL);
	}

	for(ptrs->ptr=ptrs->arreglo;ptrs->ptr<&ptrs->arreglo[5];ptrs->ptr++){
		printf("\n\nEn la celda %d, esta la cadena %s en la direccion %lu",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->nombre,&ptrs->ptr->nombre);
		printf("\nEn la celda %d, esta el entero %d en la direccion %lu",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->edad,&ptrs->ptr->edad);
		printf("\nEn la celda %d, esta el caracter %c en la direccion %lu",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->sexo,&ptrs->ptr->sexo);
		
	}	

}
