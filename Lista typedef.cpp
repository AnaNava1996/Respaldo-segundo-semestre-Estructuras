#include <stdio.h>      //Lista con doble apuntador
#include <stdlib.h>

struct Nodo {
  int dato;
  struct Nodo *ptrSig;
};

typedef  struct Nodo * Pnodo;
void meter(Pnodo *ptrCima,int dato);
int  sacarUltimo(Pnodo *ptrCima);
void mostrarLista(Pnodo ptrRec);
int  sacarFinal(Pnodo *ptrCima);
int listaVacia(Pnodo ptrCima);
int menu();

 int main(){
   int dato, selection;
   Pnodo ptrRef=NULL;
   for(;;){
     int selection=menu();
     switch (selection) {
       case 1:
        printf("Ingrese un dato entero: ");
        scanf("%d",&dato );
        meter(&ptrRef,dato);
        break;
      case 2:
        if(listaVacia(ptrRef)==1){
        printf("La Lista esta vacia\n" );
        printf("\n" );
        }else {
          printf("El dato recuperado es: %d\n", sacarUltimo(&ptrRef));
          printf("\n" );
        }
        break;
      case 3:
        mostrarLista(ptrRef);
        printf("\n");
        break;
      case 4:
        if(listaVacia(ptrRef)==1){
        printf("La lista esta vacia\n" );
        printf("\n" );
        }else {
          printf("El dato recuperado es: %d\n", sacarFinal(&ptrRef));
          printf("\n" );
        }
        break;
	case 5:
        return 0;
        break;
      default:
        printf("ERRRRR\nintenta de nuevo :v\n" );
        break;

      }
    }
  return 0;
}

void meter(Pnodo *ptrCima,int dato){
  Pnodo ptrNuevo;
  ptrNuevo=(Pnodo )malloc(sizeof(struct Nodo));
  if (ptrNuevo!=NULL) {
    ptrNuevo->dato=dato;
    ptrNuevo->ptrSig=*ptrCima;
    *ptrCima=ptrNuevo;
  }
  else {
    printf("%d no se ingreso, no hay memoria :(\n",dato );
  }
}

int  sacarUltimo(Pnodo *ptrCima){
  Pnodo ptrTemp;
  int valor;
  ptrTemp=*ptrCima;
  //valor=(* ptrCima)->dato;
  valor=ptrTemp->dato;
  //*ptrCima=(* ptrCima)->ptrSig;
  *ptrCima=ptrTemp->ptrSig;
  free(ptrTemp);
  return valor;
}



int listaVacia(Pnodo ptrCima){
  if (ptrCima==NULL)
    return 1;
  else
    return 0;
}



int  sacarFinal(Pnodo *ptrCima){
	  Pnodo ptrTemp;
  	  Pnodo ptrTemp2;
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


void mostrarLista(Pnodo ptrRec){
  if (ptrRec==NULL) {
    printf("\nLista vacia\n" );
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
  printf("2. Sacar ultimo dato de Lista\n" );
  printf("3. Mostrar Lista\n" );
	printf("4. Sacar Final (primer dato)\n");
  printf("5. Salir\n" );
  printf("Elige una opcion: ");
  scanf("%d",&op );
  return op;
}
