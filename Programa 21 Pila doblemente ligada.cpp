#include <stdio.h>
#include <stdlib.h>

struct ana{
	int dato;
	struct ana *ptrSig;
	struct ana *ptrAnt;
};

void meterDatoFin(struct ana*,struct ana *, int);
void sacarDatoFin(struct ana *,struct ana*);
void mostrarListaFin(struct ana*,struct ana*); 
struct ana * crearNodo(int dato); //el retorno es un puntero... eso no lo dice el cairo :(

int main() {
	int dato;
	int op=0;
struct ana *ptrAlfa=crearNodo(-1);

struct ana *ptrOmega=crearNodo(-1);


while(op!=4){
		  printf("\n************************************\n");
          printf("* 1. Meter Dato                    *\n");
          printf("* 2. Sacar Dato                    *\n");
          printf("* 3. Mostrar Lista desde el tope   *\n");
          printf("* 4. Salir                         *\n");
		  printf("************************************\n");
		  printf("      Ingresa opcion:    ");
          scanf("%d",&op);
          
          switch(op){

          	case 1:
          		printf("\nDATO: ");
          		scanf("%d",&dato);
          		meterDatoFin(ptrAlfa,ptrOmega,dato);
          		break;          		
          	case 2:
          		sacarDatoFin(ptrAlfa,ptrOmega);
          		break;
          	case 3:
          		mostrarListaFin(ptrAlfa,ptrOmega);
			    break;  	
          	case 4:
          		printf("\nSaliendo");
          		break;
}
}}

struct ana * crearNodo(int dato){
struct ana *ptrNew;

ptrNew=(struct ana *)malloc(sizeof(struct ana));
ptrNew->dato=dato;
ptrNew->ptrAnt=	NULL;
ptrNew->ptrSig= NULL;

return ptrNew;		
}



void meterDatoFin(struct ana *ptrAlfa,struct ana *ptrOmega,int dato){
	struct ana *ptrNew;
	ptrNew=crearNodo(dato);
	if(ptrOmega->ptrAnt==NULL){ 
		ptrAlfa->ptrSig=ptrNew;
		ptrOmega->ptrAnt=ptrNew;
		ptrNew->ptrSig=ptrAlfa->ptrSig;
		ptrNew->ptrAnt=ptrAlfa;
	}
	else{
		ptrNew->ptrAnt=ptrOmega->ptrAnt;
		ptrOmega->ptrAnt->ptrSig=ptrNew;
		ptrOmega->ptrAnt=ptrNew;
		ptrNew->ptrSig=ptrAlfa->ptrSig;}}
		
		
void sacarDatoFin(struct ana *ptrAlfa,struct ana *ptrOmega){
	struct ana *ptrAna;
	ptrAna=ptrOmega->ptrAnt;
if (ptrAlfa->ptrSig==NULL){
	printf("\nesta vacio, no puede sacar nada\n");
}
else
	if(ptrAlfa->ptrSig->ptrSig==ptrAlfa->ptrSig){
	printf("\nEl dato sacado es: %d",ptrAlfa->ptrSig->dato);
	ptrAlfa->ptrSig=NULL;
	ptrOmega->ptrAnt=NULL;
	}
	else{
	printf("El dato sacado es %d",ptrAna->dato);

	ptrOmega->ptrAnt=ptrAna->ptrAnt;
	ptrOmega->ptrAnt->ptrSig=ptrAlfa->ptrSig;
	}
	}





void mostrarListaFin(struct ana *ptrAlfa, struct ana *ptrOmega){
struct ana *ptrAna;
ptrAna=ptrOmega->ptrAnt;

if (ptrAlfa->ptrSig==NULL){
	printf("\nesta vacia\n");
}
else{
printf("\n\t%d\t",ptrOmega->ptrAnt->dato);
while(ptrAna->ptrAnt!=ptrAlfa){
ptrAna=ptrAna->ptrAnt;
printf("%d\t",ptrAna->dato);}
printf("\n");
}}




/*

void mostrarListaFin(struct ana *ptrAlfa, struct ana *ptrOmega){
struct ana *ptrAna;
ptrAna=ptrAlfa->ptrSig;

if (ptrAlfa->ptrSig==NULL){
	printf("\nesta vacia\n");
}
else{
printf("%d\t",ptrOmega->ptrAnt->dato);
while(ptrAna->ptrSig!=ptrAlfa->ptrSig){
printf("%d\t",ptrAna->dato);
ptrAna=ptrAna->ptrSig;}
}}



*/
