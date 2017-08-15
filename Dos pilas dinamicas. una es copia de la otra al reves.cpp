#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ana{
	char cad[5]; //acepta numeros de hasta 5 caracteres
	struct ana *ptrSig;
};

struct ana *ptrCab=NULL;
struct ana *ptrAux=NULL;
struct ana *ptrCab2=NULL;
void meterDato(void);
void sacarDato(void);
void mostrarPila1(void);


int main() {

	int op=0;
	
while(op!=4){
		  printf("\n1. Meter en Pila\n");
          printf("2. Sacar de Pila\n");
          printf("3. Mostrar datos pila 1 orden de salida\n");
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
          		mostrarPila1();
          		break;
          	case 4:
          		printf("\nSaliendo");
          		break;
          	default:
          		printf("ingrese opcion del 1 al : ");
          	break;
}}}

void meterDato(void){
	struct ana *ptrNew;
	ptrNew=(struct ana *)malloc(sizeof(struct ana));
	fflush(stdin);
	printf("ingresa el nuevo dato: ");
	gets(ptrNew->cad);
	ptrNew->ptrSig=NULL;
	if (ptrCab==NULL){//si lista vacia
	ptrCab=ptrNew;
	ptrAux=ptrCab;}
	else{
	ptrNew->ptrSig=ptrCab;
	ptrCab=ptrNew;	
}}


void sacarDato(void){
if (ptrCab==NULL){
	printf("\nesta vacio, no puede sacar nada\n");
}
else{
	printf("\nEl dato sacado es: %s",ptrCab->cad);
	ptrCab=ptrCab->ptrSig;}}


void mostrarPila1(void){
struct ana *ptrAna;
ptrAna=ptrCab;
if (ptrCab==NULL){
	printf("\nesta vacio\n");}
else{
while(ptrAna!=NULL){
printf("%s\t",ptrAna->cad);
ptrAna=ptrAna->ptrSig;
}}}









/////////////////// funciones de la segunda pila:

void NuevaPila(struct ana *ptrCad){
	struct ana *ptrNew2;
	ptrNew2=(struct ana *)malloc(sizeof(struct ana));
	ptrNew2->cad=ptrCab->cad;

while(ptrNew2!=NULL){

	ptrCab2=ptrNew2;
	
	ptrNew2->ptrSig=ptrCab2;
	ptrCab2=ptrNew2;}
}


while(){
	
}


