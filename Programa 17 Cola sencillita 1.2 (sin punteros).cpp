#include <stdio.h>
#include <stdlib.h>

//HACE LO MISMO QUE LA COLA SENCILLITA PERO PUEDE MOSTRAR EL CONTENIDO... IMAGINAR QUE SE ESTA EN UN BANCO QUE CIERRA A LAS 4PM Y SON LAS 3:45PM

struct Cola{
	int arreglo[5];
	int final;
	int turno;
	int muestra;
};

void meterCola(struct Cola *puntero, int dato);
int sacarelemento(struct Cola *puntero);
int colaLlena(struct Cola *puntero);
int colaVacia(struct Cola *puntero);
int mostrar(struct Cola *puntero);

int main(){
	struct Cola Cola;
	struct Cola *ptrP;
	int dato;
	int op;
	ptrP=&Cola;
	ptrP->final=0;
	ptrP->turno=0;
	ptrP->muestra=0;
	
	while(op!=4){
	printf("\n1.Agregar elemento a la cola.\n2.Sacar el elemento\n3.Mostrar Cola.\n4.Salir.\nIngrese la opcion: ");
	scanf("%d",&op);
	 
	 switch(op){
	 	case 1:
	 		if(colaLlena(ptrP)==1){
	 			printf("\nla cola esta llena\n");
			 	break;}
	 		else{
				printf("\nIngrese el dato a meter en cola: ");
	 			scanf("%d",&dato);
	 			meterCola(ptrP,dato);
				break;}
	 		
	 	case 2:
	 		if(colaVacia(ptrP)==1){
	 			printf("\nLa cola esta vacia\n");
			 	break;}
	 		else{
	 			printf("\nEs el turno de %d de salir de la cola\n",sacarelemento(ptrP));
	 			(ptrP->turno)++;
			 	break;}  
			 break;	
		case 3:
			if((colaVacia(ptrP))&&(colaLlena(ptrP))){
				printf("\nYa cerro el banco\n"); //la cola no esta llena ni vacia... simplemente el banco cerró la puerta despues de que pasaron las 5 personas y ya estas se fueron
			break;
			}
			else{
				if(colaVacia(ptrP)){printf("\nLa cola esta vacia!!\n");
				break;}
				else{		
				mostrar(ptrP);
			break;}
			}
	 	case 4:
	 	printf("\n\n\nSaliendo, espere un momento...");
	 	printf("\n\npresione cualquier tecla para cerrar\n\n");
	 	return 0;
	 		break;
	 	default:
	 		printf("\nopcion no valida\n");
	 }
}
	
}

void meterCola(struct Cola *ptrP, int dato){
	ptrP->arreglo[ptrP->final]=dato;
	ptrP->final++;
	}



int sacarelemento(struct Cola *ptrP){
	return ptrP->arreglo[ptrP->turno];
}

int colaLlena(struct Cola *ptrP){
	if (ptrP->final==5)
	return 1;
	else
	return 0;
}

 int colaVacia(struct Cola *ptrP){
	if((ptrP->final==NULL)||(ptrP->turno==ptrP->final)){
	return 1;}
	else
	return 0;

}

int mostrar(struct Cola *ptrP){
	int i;
	printf("\n");
	for(ptrP->muestra=ptrP->turno;ptrP->muestra<ptrP->final;ptrP->muestra++){
		printf("%d\t",ptrP->arreglo[ptrP->muestra]);
}}
