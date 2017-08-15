#include <stdlib.h>
#include <stdio.h>

struct datos{
	char nombre [30];
	int edad;
	char sexo;
};

struct agenda{
	struct datos arreglo[5];
	struct datos *ptr;
};

int main(){
	struct agenda var1;
	for(var1.ptr=var1.arreglo;var1.ptr<&var1.arreglo[5];var1.ptr++){
		setbuf(stdin,NULL);
		printf("ingrese nombre(cadena): ");
		setbuf(stdin,NULL);
		gets(var1.ptr->nombre);
		setbuf(stdin,NULL);
		printf("Ingrese la edad(int): ");
		setbuf(stdin,NULL);
		scanf("%d",&var1.ptr->edad);
		setbuf(stdin,NULL);
		printf("ingrese el el sexo(caracter): ");
		setbuf(stdin,NULL);
		var1.ptr->sexo=getchar(); getchar();
		setbuf(stdin,NULL);	
	}
	for(var1.ptr=var1.arreglo;var1.ptr<&var1.arreglo[5];var1.ptr++){
		printf("\n\nen la celda %d esta la cadena %s en la direccion %lu",(int)(var1.ptr-var1.arreglo),var1.ptr->nombre,&var1.ptr->nombre);
		printf("\nen la celda %d esta el entero %d en la direccion %lu",(int)(var1.ptr-var1.arreglo),var1.ptr->edad,&var1.ptr->edad);		
		printf("\nen la celda %d esta el caracter %c en la direccion %lu",(int)(var1.ptr-var1.arreglo),var1.ptr->sexo,&var1.ptr->sexo);
	
	}
	return 0;
}
