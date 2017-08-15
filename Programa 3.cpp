#include <stdio.h>
#include <stdlib.h>

int main(){
	char cad[50], *ptr;
	FILE *ptr1=fopen("basura.txt","r");
	FILE *ptr2=fopen("basura1.txt","w");
	printf("Ingresa cadena: ");
	gets(cad);
	ptr=&cad[3];
	printf("Cadena con cad: %s\n",cad);
	printf("Cadena con apuntador: %s\n",ptr);

	printf("Ingresa cadena: ");
	fgets(cad,50,stdin); //pointer to file or standard input
	ptr=&cad[3];
	printf("Cadena con cad: %s\n",cad);
	fprintf(ptr2,"Cadena con apuntador: %s",cad);
	return 0;
}

