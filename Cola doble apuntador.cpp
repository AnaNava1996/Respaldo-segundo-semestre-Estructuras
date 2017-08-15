#include <stdio.h>      //Cola con doble apuntador
#include <stdlib.h>

struct Nodo {
  int dato;
  struct Nodo *ptrSig;
};


void meter(struct Nodo **ptrCima,int dato);
void mostrarCola(struct Nodo *ptrRec);
int  sacarFinal(struct Nodo **ptrCima);
int colaVacia(struct Nodo *ptrCima);
int menu();

 int main(){
   int dato, selection;
   struct Nodo *ptrRef=NULL;
   for(;;){
     int selection=menu();
     switch (selection) {
       case 1:
        printf("Ingrese un dato entero: ");
        scanf("%d",&dato );
        meter(&ptrRef,dato);
        break;
      case 2:
        mostrarCola(ptrRef);
        printf("\n");
        break;
      case 3:
        if(colaVacia(ptrRef)==1){
        printf("La cola esta vacia\n" );
        printf("\n" );
        }else {
          printf("El dato recuperado es: %d\n", sacarFinal(&ptrRef));
          printf("\n" );
        }
        break;
	case 4:
        return 0;
        break;
      default:
        printf("ERRRRR\nintenta de nuevo :v\n" );
        break;

      }
    }
  return 0;
}

void meter(struct Nodo **ptrCima,int dato){
  struct Nodo *ptrNuevo;
  ptrNuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
  if (ptrNuevo!=NULL) {
    ptrNuevo->dato=dato;
    ptrNuevo->ptrSig=*ptrCima;
    *ptrCima=ptrNuevo;
  }
  else {
    printf("%d no se ingreso, no hay memoria :(\n",dato );
  }
}


int  sacarFinal(struct Nodo **ptrCima){
  struct Nodo *ptrTemp;
  struct Nodo *ptrTemp2;
  int valor;
if(*ptrCima==NULL){
printf("blablabla vacio");
}
else{
if((*ptrCima)->ptrSig==NULL){
valor= (*ptrCima)->dato;
*ptrCima=NULL;
}
else{
ptrTemp=*ptrCima;
ptrTemp2=ptrTemp->ptrSig;
while(ptrTemp2->ptrSig!=NULL){ 
ptrTemp2=ptrTemp2->ptrSig;
ptrTemp=ptrTemp->ptrSig;
}
valor=ptrTemp2->dato;
ptrTemp->ptrSig=NULL;
free(ptrTemp2);
}}
return valor;
}



int colaVacia(struct Nodo *ptrCima){
  if (ptrCima==NULL)
    return 1;
  else
    return 0;
}

void mostrarCola(struct Nodo *ptrRec){
  if (ptrRec==NULL) {
    printf("\nCola vacia\n" );
    getchar();
  }
  else{
    while (ptrRec!=NULL) {
      printf("\n\t%d\t",ptrRec->dato);
      ptrRec=ptrRec->ptrSig;
    }
  }
}


int menu(){
  int op;
  printf("\n1. Meter dato entero\n" );

  printf("2. Mostrar Cola\n" );
	printf("3. Sacar dato \n");
  printf("4. Salir\n" );
  printf("Elige una opcion: ");
  scanf("%d",&op );
  return op;
}
