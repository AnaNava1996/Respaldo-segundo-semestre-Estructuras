#include <stdio.h>
#include <stdlib.h>

struct ana{
	int dato;
	struct ana *ptrSig;
};

struct ana *ptrCab=NULL;
void meterDato(void);
void sacarDato(void);
void mostrarPila(void);


int main() {

	int op=0;
	
while(op!=4){
		  printf("\n1. Meter en Pila\n");
          printf("2. Sacar de Pila\n");
          printf("3. Mostrar el orden de salida\n");
          printf("4. Salir\n");
          printf("Ingresa opcion: ");
          scanf("%d",&op);
          switch(op){
          	case 1:
          		meterDato();
          		break;
          	case 2:
          	
          		sacarDato();
          		break;
          	case 3:
          		mostrarPila();
          		break;
          	case 4:
          		printf("\nSaliendo");
          		break;
}


}}

void meterDato(void){
	struct ana *ptrNew;
	ptrNew=(struct ana *)malloc(sizeof(struct ana));
	printf("ingresa el nuevo dato: ");
	scanf("%d",&ptrNew->dato);
	ptrNew->ptrSig=NULL;
	if (ptrCab==NULL){//si lista vacia
	ptrCab=ptrNew;
}
	else{
	ptrNew->ptrSig=ptrCab;//el ptrNew Siguiente, toma el valor que hay en la cima... 
	ptrCab=ptrNew;	//mientras que ptrCab toma el valor de ptrNew
}
}

void sacarDato(void){
if (ptrCab==NULL){
	printf("\nesta vacio, no puede sacar nada\n");
}
else{
	printf("\nEl dato sacado es: %d",ptrCab->dato);
	ptrCab=ptrCab->ptrSig;
}

}


void mostrarPila(void){
struct ana *ptrAna;
ptrAna=ptrCab;

if (ptrCab==NULL){
	printf("\nesta vacio\n");
}
else{
while(ptrAna!=NULL){
printf("%d\t",ptrAna->dato);
ptrAna=ptrAna->ptrSig;

}}

}









