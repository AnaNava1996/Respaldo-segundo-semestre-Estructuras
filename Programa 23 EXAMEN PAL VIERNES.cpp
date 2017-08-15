#include <stdio.h>
#include <stdlib.h>

struct ana{
	int dato;
	struct ana *ptrSig;
	struct ana *ptrAnt;
};


void meterDatoIni(struct ana *,struct ana *,int); //el cairo dice que solo es necesario declarar el tipo de dato
void sacarDatoIni(struct ana *, struct ana *);
void mostrarListaIni(struct ana*,struct ana *);
void meterDatoFin(struct ana*,struct ana *, int);
void sacarDatoFin(struct ana *,struct ana*);
void mostrarListaFin(struct ana*,struct ana*); 
struct ana * crearNodo(int dato); //el retorno es un puntero... eso no lo dice el cairo :(

int main() {
	int dato;
	int op=0;
struct ana *ptrAlfa=crearNodo(-1);

struct ana *ptrOmega=crearNodo(-1);


while(op!=7){
		  printf("\n************************************\n");
		  printf("* 1. Meter al inicio               *\n");
          printf("* 2. Sacar del inicio              *\n");
          printf("* 3. Mostrar Lista desde el inicio *\n");
          printf("* 4. Meter al Final                *\n");
          printf("* 5. Sacar del final               *\n");
          printf("* 6. Mostrar Lista desde el final  *\n");
          printf("* 7. Salir                         *\n");
		  printf("************************************\n");
		  printf("      Ingresa opcion:    ");
          scanf("%d",&op);
          
          switch(op){
          	case 1:
          		printf("\nDATO: ");
				scanf("%d",&dato);
				meterDatoIni(ptrAlfa,ptrOmega,dato);
          		break;
          	case 2:
          		sacarDatoIni(ptrAlfa,ptrOmega);
          		break;
          	case 3:
          		mostrarListaIni(ptrAlfa,ptrOmega);
          		break;
          	case 4:
          		printf("\nDATO: ");
          		scanf("%d",&dato);
          		meterDatoFin(ptrAlfa,ptrOmega,dato);
          		break;
          	case 5:
          		sacarDatoFin(ptrAlfa,ptrOmega);
          		break;
          	case 6:
          		mostrarListaFin(ptrAlfa,ptrOmega);
			    break;  	
          	case 7:
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

void meterDatoIni(struct ana *ptrAlfa,struct ana *ptrOmega,int dato){
	struct ana *ptrNew;
	ptrNew=crearNodo(dato);
	if(ptrAlfa->ptrSig==NULL){
		ptrAlfa->ptrSig=ptrNew;
		ptrOmega->ptrAnt=ptrNew;
		ptrNew->ptrSig=ptrAlfa->ptrSig;
		ptrNew->ptrAnt=ptrAlfa;
	}
	else{
		ptrNew->ptrSig=ptrAlfa->ptrSig;
		ptrAlfa->ptrSig->ptrAnt=ptrNew;
		ptrAlfa->ptrSig=ptrNew;
		ptrNew->ptrAnt=ptrAlfa;
		ptrOmega->ptrAnt->ptrSig=ptrNew;
	}

}

void sacarDatoIni(struct ana *ptrAlfa,struct ana *ptrOmega){
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




void mostrarListaIni(struct ana *ptrAlfa, struct ana *ptrOmega){
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

/**/



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


