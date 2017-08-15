#include <stdlib.h>
#include <stdio.h>

struct Cola{
     int arreglo[10];
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
     int op=0;
     int dat;
     while (op!=3){
     	  printf("\n********************");
          printf("\n* 1. Meter en Cola *\n");
          printf("* 2. Sacar de Cola *\n");
          printf("* 3. Salir         *\n");
          printf("********************\n");
		  printf("Ingresa opcion: ");
        
          scanf("%d",&op);
          switch(op){
              case 1:
              	if((colaVacia(ptrP)==1)&&(colallena(ptrP)==1)){
				  printf("\nNo se puede introducir mas datos!\n");
				  break;}
					  else{
              				if(colallena(ptrP)==1){
              					printf("\nLa Cola esta llena!\n"); break;}
              				else{
              					printf("introduce el dato: ");
              					scanf("%d",&dat);
              					meterCola(ptrP,dat);
              					break;
              				}}
              case 2:
              	if((colaVacia(ptrP)==1)&&(colallena(ptrP)==1)){
              		printf("\nNo se pueden sacar mas datos!\n");
				  break;}
				  else{
              				if(colaVacia(ptrP)==1){
              					printf("\nLa Cola esta vacia! \n"); break;}
              				else{
              					printf("\nEl dato sacado es %d\n",sacarCola(ptrP));
              					break;
              				}}
              case 3: 
			  		printf("\n\nSaliendo...\n\nPresione cualquier tecla para cerrar.\n"); break;
			  		
              default: 
			  		printf("Opcion no valida, ingresa opcion de 1-3: \n"); break;
         }
     }
     return 0;
}

void meterCola(struct Cola *ptrP, int dato){
	ptrP->arreglo[ptrP->ptrC-ptrP->arreglo]=dato;
	ptrP->ptrC++;
}

int sacarCola(struct Cola *ptrP){
	ptrP->ptrT++;
	return ptrP->arreglo[(ptrP->ptrT-1)-ptrP->arreglo];
}

int colallena(struct Cola *ptrP){
	if(ptrP->ptrC==&ptrP->arreglo[10])
		return 1;
	else
		return 0;
}

int colaVacia(struct Cola *ptrP){
	if((ptrP->ptrC==ptrP->arreglo)||(ptrP->ptrT==ptrP->ptrC))
		return 1;
	else
		return 0;
}










