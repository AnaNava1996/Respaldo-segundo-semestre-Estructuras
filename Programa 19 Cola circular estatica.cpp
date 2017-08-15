#include <stdlib.h>
#include <stdio.h> //FALTA UNA SEGUNDA CONDICION PARA COLAVACIA() ... AL DAR LA SEGUNDA VUELTA, 
//SI ptrP->ptrC=ptrP->ptrT entonces está llena (sólo al dar la segunda vuelta)

struct Cola{
     int arreglo[5];
     int *ptrC;
     int *ptrT;
};

void meterCola(struct Cola *ptrP, int dato);
int sacarCola(struct Cola *ptrP);
int colallena(struct Cola *ptrP);
int colaVacia(struct Cola *ptrP);

int main(){
     struct Cola Cola;
     struct Cola *ptrP;
     ptrP=&Cola;
     ptrP->ptrC=ptrP->arreglo;
     ptrP->ptrT=ptrP->arreglo;
     ptrP->ptrA=ptrP->arreglo;
     int op=0;
     int dat;
     while (op!=3){
          printf("\n1. Meter en Cola\n");
          printf("2. Sacar de Cola\n");
          printf("3. Salir\n");
          printf("Ingresa opcion: ");
          scanf("%d",&op);
          switch(op){
              case 1:
              				if(colallena(ptrP)==1){
              					printf("\nLa Cola esta llena!\n"); break;}
              				else{
              					printf("introduce el dato: ");
              					scanf("%d",&dat);
              					meterCola(ptrP,dat);
              					break;
              				}
              case 2:

              				if(colaVacia(ptrP)==1){
              					printf("\nLa Cola esta vacia! \n"); break;}
              				else{
              					printf("\nEl dato sacado es %d\n",sacarCola(ptrP));
              					break;
              				}
              case 3: 
			  		printf("\n\nSaliendo...\n\nPresione cualquier tecla para cerrar.\n"); break;
			  		
              default: 
			  		printf("Opcion no valida, ingresa opcion de 1-3: \n"); break;
         }
     }
     return 0;
}

void meterCola(struct Cola *ptrP, int dato){
	
	if(ptrP->ptrC==&ptrP->arreglo[5]){/*cuando el puntero apunta a la posicion 11 del arreglo significa que se lleno 10*/
		ptrP->ptrC==ptrP->arreglo;
		ptrP->arreglo[ptrP->ptrC-ptrP->arreglo]=dato;
		ptrP->ptrC++;
	}
	else{
	ptrP->arreglo[ptrP->ptrC-ptrP->arreglo]=dato;
	ptrP->ptrC++;}

}

int sacarCola(struct Cola *ptrP){
	if(ptrP->ptrT==&ptrP->arreglo[5]/*ya saco el quinto valor*/){
		ptrP->ptrT=&ptrP->arreglo[1];
		return ptrP->arreglo[0];
	}
	else{
	ptrP->ptrT++;
	return ptrP->arreglo[(ptrP->ptrT-1)-ptrP->arreglo];
}
}

int colallena(struct Cola *ptrP){
	if(  ((ptrP->ptrC==&ptrP->arreglo[5])&&(ptrP->ptrT==ptrP->arreglo))  ||  ((ptrP->ptrT-ptrP->ptrC==1)))
		return 1;
	else
		return 0;
}

int colaVacia(struct Cola *ptrP){
	if(ptrP->ptrC==ptrP->ptrT)
		return 1;
	else
		return 0;
}


/*

	if(ptrP->ptrC==ptrP->ptrT-1){
		ptrP->arreglo[ptrP->ptrC-ptrP->arreglo]=dato;
		ptrP->ptrC++;
		return colallena(ptrP)=1;
	}
*/


