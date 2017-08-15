#include <stdio.h>
#include <stdlib.h>

//se debe crear una cadena en un arreglo y el programa debe decir la longitud de la cadena pero de forma recursiva.
int cuenta(char *);


int main() {
	int i;
	char arre[20];
	printf("ingrese la cadena: ");
	gets(arre);
	i=cuenta(arre);
	printf("\nla longitud de la cadena: %d",i);
	
	return 0;
}

int cuenta(char *arre){
if(arre[0]=='\0')
	 return 0;
else
	return (1+cuenta(&arre[1]));
}


//escribir la cadena al revés
