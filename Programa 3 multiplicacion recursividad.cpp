#include <stdio.h> // mutipliacion mxn recursivo

int multiplicacion(int,int);

int main(){
	int m,n;
	printf("ingrese los numeros a multiplicar: ");
	scanf("%d %d",&m,&n);
	printf("\nLa multiplicacion de %d por %d es: %d",m,n,multiplicacion(m,n));
}

int multiplicacion(int m, int n){
	if(n==0){return 0;}
		else{
			if(n==1){return m;}
			else{
			return m+multiplicacion(m,n-1);}}	
				}
