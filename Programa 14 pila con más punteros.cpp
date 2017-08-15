#include <stdlib.h>
#include <stdio.h>

struct Pila{
     int arreglo[10];
     int *ptrC;
};

void meterPila(struct Pila *ptrP, int dato);//Last in First out --> LIFO
int sacarPila(struct Pila *ptrP);
int pilallena(struct Pila *ptrP);
int pilaVacia(struct Pila *ptrP);

int main(){
     struct Pila Pila;
     struct Pila *ptrP;
     ptrP=&Pila;
     ptrP->ptrC=ptrP->arreglo;
     int op=0;
     int dat;
     while (op!=3){
          printf("1. Meter en Pila\n");
          printf("2. Sacar de Pila\n");
          printf("3. Salir\n");
          printf("Ingresa opcion: ");
          scanf("%d",&op);
          switch(op){
              case 1:
              		if(pilallena(ptrP)==1){
              			printf("La pila está llena\n"); break;}
              		else{
              			printf("introduce dato a meter en la pila: ");
              			scanf("%d",&dat);
              			meterPila(ptrP,dat);
              			break;
              		}
              case 2:
              		if(pilaVacia(ptrP)==1){
              			printf("La pila está vacia \n"); break;}
              		else{
              			
              			printf("El dato es %d\n",sacarPila(ptrP));
              			break;
              		}
              case 3: 
			  		printf("Elegiste opcion %d\n",op); break;
			  		
              default: 
			  		printf("Opcion no valida, ingresa opcion de 1-3: \n"); break;
         }
     }
     return 0;
}

void meterPila(struct Pila *ptrP, int dato){
	ptrP->arreglo[ptrP->ptrC-ptrP->arreglo]=dato;
	ptrP->ptrC++;
}

int sacarPila(struct Pila *ptrP){
	ptrP->ptrC--;
	return ptrP->arreglo[ptrP->ptrC-ptrP->arreglo];
}

int pilallena(struct Pila *ptrP){
	if(ptrP->ptrC==&ptrP->arreglo[10])
		return 1;
	else
		return 0;
}

int pilaVacia(struct Pila *ptrP){
	if(ptrP->ptrC==ptrP->arreglo)
		return 1;
	else
		return 0;
}

