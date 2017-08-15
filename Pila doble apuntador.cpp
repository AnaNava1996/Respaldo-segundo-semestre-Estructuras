#include <stdio.h>      //Pila con doble apuntador
#include <stdlib.h>

struct Nodo {
  int dato;
  struct Nodo *ptrSig;
};


void meter(struct Nodo **ptrCima,int dato);
int  sacarUltimo(struct Nodo **ptrCima);
void mostrarLista(struct Nodo *ptrRec);
int pilaVacia(struct Nodo *ptrCima);
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
        if(pilaVacia(ptrRef)==1){
        printf("La pila está vacia\n" );
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

int  sacarUltimo(struct Nodo **ptrCima){
  struct Nodo *ptrTemp;
  int valor;
  ptrTemp=*ptrCima;
  //valor=(* ptrCima)->dato;
  valor=ptrTemp->dato;
  //*ptrCima=(* ptrCima)->ptrSig;
  *ptrCima=ptrTemp->ptrSig;
  free(ptrTemp);
  return valor;
}

int pilaVacia(struct Nodo *ptrCima){
  if (ptrCima==NULL)
    return 1;
  else
    return 0;
}

void mostrarLista(struct Nodo *ptrRec){
  if (ptrRec==NULL) {
    printf("Lista vacia\n" );
    getchar();
  }
  else{
    while (ptrRec!=NULL) {
      printf("%d\t",ptrRec->dato);
      ptrRec=ptrRec->ptrSig;
    }
  }
}


int menu(){
  int op;
  printf("1. Meter dato entero\n" );
  printf("2. Sacar de pila\n" );
  printf("3. Mostrar pila\n" );
  printf("4. Salir\n" );
  printf("Elige una opcion: ");
  scanf("%d",&op );
  return op;
}

