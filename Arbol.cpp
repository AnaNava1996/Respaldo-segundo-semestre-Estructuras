#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
  int dato;
  struct nodo *ptrIzq;
  struct nodo *ptrDer;
};


void insertar(struct nodo **ptrRaiz, int miDato1);
struct nodo *nuevoNodo(int dato1);
void imprimirArbol(struct nodo *ptrRaiz, int contador);
int maxProfundidad(struct nodo *ptrRaiz);
void preorden(struct nodo * ptrRaiz);
void postorden(struct nodo *ptrRaiz);
void inorden(struct nodo * ptrRaiz);
void eliminar(struct nodo **ptrRaiz,int miDato1);
int menu(void);

int main(){
  char opcion;
  struct nodo *miPtrRaiz;
  miPtrRaiz=NULL;
  int clave;
  int maxi;
  int numnodos=0;
  for (;;) {
    int selection=menu();
    switch (selection) {
      case 1:
        printf("Ingresa dato entero:  " );
        scanf("%d",&clave );
        insertar(&miPtrRaiz,clave);
        printf("\n" );
        break;
      case 2:
        imprimirArbol(miPtrRaiz,1);
        printf("\n" );
        break;
      case 3:
        printf("preorden: ");
        preorden(miPtrRaiz);
        printf("\n" );
        break;
      case 4:
        printf("inorden: ");
        inorden(miPtrRaiz);
        printf("\n" );
        break;
      case 5:
        printf("postorden: ");
        postorden(miPtrRaiz);
        printf("\n" );
        break;
      case 6:
        printf("%d\n", maxProfundidad(miPtrRaiz) );
        getchar();
        break;
      case 7:
        printf("Eliminar un valor entero:  " );
          scanf("%d",&clave );
          getchar();
          eliminar(&miPtrRaiz,clave);
          printf("\n" );
          imprimirArbol(miPtrRaiz,1);
          printf("\n" );
          printf("Preorden \n" );
          preorden(miPtrRaiz);
          printf("inorden \n" );
          inorden(miPtrRaiz);
          printf("postorden \n" );
          postorden(miPtrRaiz);
          maxi=maxProfundidad(miPtrRaiz);
          printf("Profundidad: %d\n",maxi );
          getchar();
          break;
      case 8:
        return 0;
      default:
          printf("\nLa cagaste, opcion no valida, de nuevo\n");
          getchar();

    }
  }

}
void preorden(struct nodo * ptrRaiz){
  if(ptrRaiz!=NULL){
    printf("%d\t",ptrRaiz->dato);
    preorden(ptrRaiz->ptrIzq);
    preorden(ptrRaiz->ptrDer);
  }
}

void postorden(struct nodo *ptrRaiz){
  if (ptrRaiz!=NULL) {
    postorden(ptrRaiz->ptrIzq);
    postorden(ptrRaiz->ptrDer);
    printf("%d\t",ptrRaiz->dato);
  }
}

void inorden(struct nodo * ptrRaiz){
  if (ptrRaiz!=NULL) {
    inorden(ptrRaiz->ptrIzq);
    printf("%d\t",ptrRaiz->dato );
    inorden(ptrRaiz->ptrDer);
  }
}

void insertar(struct nodo **ptrRaiz, int miDato1){
  if (*ptrRaiz==NULL)
    *ptrRaiz=nuevoNodo(miDato1);
  else if (miDato1<(*ptrRaiz)->dato)
    insertar(&((*ptrRaiz)->ptrIzq),miDato1);
  else
    insertar(&((*ptrRaiz)->ptrDer),miDato1);
}

struct nodo *nuevoNodo(int dato1){
  struct nodo * ptrAux;
  ptrAux=(struct nodo *) malloc (sizeof(struct nodo));
  ptrAux->dato=dato1;
  ptrAux->ptrIzq=ptrAux->ptrDer=NULL;
  return ptrAux;
}

void imprimirArbol(struct nodo *ptrRaiz, int contador) {
  int i,j;
  i=contador;
  if (ptrRaiz!=NULL) {
    imprimirArbol(ptrRaiz->ptrDer,i+1);
    printf("\n" );
    for (j=1;j<i;j++)
      printf(" - " );
    printf("%d",ptrRaiz->dato );
    imprimirArbol(ptrRaiz->ptrIzq,i+1);
  }
}

int menu(){
  int op;
  printf("1. Meter dato entero\n" );
  printf("2. imprimir arbol\n" );
  printf("3. Imprimir preorden\n" );
  printf("4. Imprimir inorden\n" );
  printf("5. Imprimir postorden\n" );
  printf("6. Imprimir maxProfundidad\n" );
  printf("7. Eliminar valor entero\n" );
  printf("8. Salir\n" );
  printf("Elige una opcion: ");
  scanf("%d",&op );
  return op;
}

int maxProfundidad(struct nodo *ptrRaiz){
  if (ptrRaiz!=NULL) {
    int profIzq, profDer;
    profIzq=maxProfundidad(ptrRaiz->ptrIzq);
    profDer=maxProfundidad(ptrRaiz->ptrDer);
    if (profIzq>profDer) {
      return (profIzq+1);
    }else
      return(profDer+1);
  }
  else
    return 0;
}

void eliminar(struct nodo **ptrRaiz,int miDato1){
  return;
}

