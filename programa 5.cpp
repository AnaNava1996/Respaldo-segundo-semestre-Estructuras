#include <stdio.h>
#include <stdlib.h> 


int main (){
	char cad1[30],cad2[30], * ptr1, *ptr2; //los apuntadores se declaran * x o *x...
	printf("Ingresa cadena 1: ");
	gets(cad1);
	printf("Ingresa cadena 2: ");
	gets(cad2);
	printf("La cadena uno es cad1= %s\nLa cadena dos es cad2= %s\n",cad1,cad2);

	ptr1=cad1;
	ptr2=cad2;

	printf("Concatenacion, ptr1&ptr2: %s%s\n",ptr1,ptr2);
	int i;

	for(ptr1=cad1;ptr1<&cad1[30];ptr1++){ //aritmetica de apuntadores, !!modifica el valor de cad1 accediendo directamente a su contenido a través de apuntadores
		if(*ptr1!='\0') //   \0 significa el final de una cadena...¿¿¿es como un valor nulo de cadena???
			continue;    //el programa tiene 30 celdas...alterminar de llenarlas con los caracteres de la cadena 1 continua llenando con la cadena 2... y si hay muchas letras las corta al llegar a 30
		else{
			*ptr1=*ptr2;
			ptr2++;
		}

	}

	printf("Concatencacion 2, solo con cad1 : %s\n",cad1);

	printf("Ingresa cad1: ");
	for(ptr1=cad1;ptr1<&cad1[30];ptr1++){  //ingresar cadena caracter por caracter y pegar el \0 al final de la cadena
		*ptr1=getchar();
		if(*ptr1=='\n'){
			*ptr1='\0';
			break;
		}
	}

	i=printf("%s\n",cad1);
	printf("%d\n",i);

	i=printf("Banana");
	printf("\n%d\n",i);

	return 0;

}

