#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elemento{
	char nombre[30];
	int edad;
	float est;
	char sexo[15];
};

int main(){
	struct elemento var1;
	fflush(stdin);
	printf("Ingresa el nombre: ");
	gets(var1.nombre);

	printf("Ingresa la edad: ");
	scanf("%d",&var1.edad);

	printf("Ingresa la estatura: ");
	scanf("%f",&var1.est);
	fflush(stdin);  //limpiar el bufer antes de ingresar un caracter
	printf("Ingresa el sexo: ");
	gets(var1.sexo);

printf("\n\nLa persona se llama: %s, tiene %d agnos, mide %.2f metros y es del sexo %s",var1.nombre,var1.edad,var1.est,var1.sexo);
	return 0;
}

