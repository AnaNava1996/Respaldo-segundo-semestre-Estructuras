#include <stdlib.h> //cadena invertida
#include <stdio.h>

char reves(char *);

int main(){

	char cad[10];
	
	printf("ingrese cadena 10 caracteres por favor: ");
	gets(cad);
	printf("\n%s\n",cad);
	reves(cad);
	
}



char reves(char *cad){
	if(cad[0]!='\0'){
		reves(&cad[1]);
		putchar(cad[0]);
	}	
}
