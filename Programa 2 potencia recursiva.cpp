#include <stdio.h> //este programa calcula la potencia de m a la n
#include <stdlib.h>

int potencia(int,int);

int main(){
	int m,n;
	printf("m y n: ");
	scanf("%d %d",&m,&n);
	printf("%d",potencia(m,n));
}


int potencia(int m,int n){
	if(n==0){
		return 1;}
	else{
		if(n==1){
			return m;}
			else{
 return m*potencia(m,n-1);}}}



//TAREA

// hacer mxn recursivo
// hacer el MCD con euclides pero recursivamente
