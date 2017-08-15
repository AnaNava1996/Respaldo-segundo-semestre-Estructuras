#include <stdlib.h>
#include <stdio.h>

struct nodo{
	char cad1[20];
	char cad2[10];

	char *ptr1;
	char *ptr2;

};

int main(){

	struct nodo var;
	printf("Ingresa cadena 1: ");
	fflush(stdin);
	scanf("%s",&var.cad1);               
	printf("Ingresa cadena 2: ");
	fflush(stdin);
	gets(var.cad2);

	printf("cad1: %s\ncad2: %s\n",var.cad1,var.cad2);

	var.ptr2=var.cad2;
	for(var.ptr1=var.cad1;var.ptr1<&var.cad1[20];var.ptr1++){
		if(*var.ptr1!='\0')
			continue;
		else{
			*var.ptr1=*var.ptr2;
			var.ptr2++;
		}
	}

	printf("La cadena completa es: %s\n",var.cad1); // simbolos raros D:
	return 0;
}

