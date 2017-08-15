#include <stdio.h>
#include <stdlib.h>

struct Pila{
	int arreglo[5];
	int cima;
};

int pilallena(struct Pila *puntero); //no hace falta especificar el nombre del puntero esta vez... solo el tipo de dato que trabajara la funcion
int pilaVacia(struct Pila *puntero);
void meterPila(struct Pila *puntero,int dato);
int sacarPila(struct Pila *puntero);


int main(){
	struct Pila Pila;
	struct Pila *ptrP;
	ptrP=&Pila;
	ptrP->cima=0;
	
	int op;
	int dato;
	while(op!=3){
		printf("\n\n1.Meter dato en la Pila.\n2.Sacar dato de la Pila.\n3.Salir.\nIntroduzca una opcion: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				if (pilallena(ptrP)==1){
					printf("\n\nla pila esta llena");
					break;}
				else{
				printf("\nIntroduzca el dato a meter en pila: ");
				scanf("%d",&dato);
				meterPila(ptrP,dato);
				break;}
			
			case 2:
				if (pilaVacia(ptrP)==1){
					printf("\n\nla pila esta vacia\n\n");
				break;
				}
				else{
				printf("el dato que sale de la pila es %d",sacarPila(ptrP));
				break;}
			
			case 3:
				printf("\n\n...Saliendo\n\npresione cualquier tecla para cerrar");
				break;
			default:
			printf("\nopcion invalida\n");	
		}
	}
	
}


void meterPila(struct Pila *ptrP, int dato){
	ptrP->arreglo[ptrP->cima]=dato;
	ptrP->cima++;
}

int sacarPila(struct Pila *ptrP){
	ptrP->cima--;
	return ptrP->arreglo[ptrP->cima];
}

int pilallena(struct Pila *ptrP){
	if (ptrP->cima==5)
	return 1;
	else
	return 0;
}

int pilaVacia(struct Pila *ptrP){
	if (ptrP->cima==0)
	return 1;
	else
	return 0;
}
