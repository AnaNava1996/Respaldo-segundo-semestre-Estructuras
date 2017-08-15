#include <stdio.h>
#include <stdlib.h>

struct ana{
	int dato;
	struct ana *ptrSig;
	struct ana *ptrAnt;
};


void sacarDato(struct ana *, struct ana *);
void mostrarFila(struct ana*,struct ana *);
void meterDato(struct ana*,struct ana *, int);
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
          printf("* 3. Mostrar la Fila               *\n");
          printf("* 4. Salir                         *\n");
		  printf("************************************\n");
		  printf("      Ingresa opcion:    ");
          scanf("%d",&op);
          
          switch(op){

          	case 1:
          		printf("\nDATO: ");
          		scanf("%d",&dato);
          		meterDato(ptrAlfa,ptrOmega,dato);
          		break;
          	case 2:
          		sacarDato(ptrAlfa,ptrOmega);
          		break;
          	case 3:
          		mostrarFila(ptrAlfa,ptrOmega);
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


void meterDato(struct ana *ptrAlfa,struct ana *ptrOmega,int dato){
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
		



void sacarDato(struct ana *ptrAlfa,struct ana *ptrOmega){
if (ptrAlfa->ptrSig==NULL){
	printf("\nesta vacio, no puede sacar nada!!\n");
}
else
	if(ptrAlfa->ptrSig->ptrSig==ptrAlfa->ptrSig){
	printf("\nEl dato sacado es: %d\n",ptrAlfa->ptrSig->dato);
	ptrAlfa->ptrSig=NULL;
	ptrOmega->ptrAnt=NULL;
	}
	else{
	printf("El dato sacado es %d\n",ptrAlfa->ptrSig->dato);
	ptrOmega->ptrAnt->ptrSig=ptrAlfa->ptrSig->ptrSig;
	ptrAlfa->ptrSig=ptrAlfa->ptrSig->ptrSig;}
	}




void mostrarFila(struct ana *ptrAlfa, struct ana *ptrOmega){
struct ana *ptrAna;
ptrAna=ptrAlfa->ptrSig;

if (ptrAlfa->ptrSig==NULL){
	printf("\nesta vacia\n");
}
else{
while(ptrAna->ptrSig!=ptrAlfa->ptrSig){
printf("%d\t",ptrAna->dato);
ptrAna=ptrAna->ptrSig;} printf("%d",ptrAna->dato);
}}






