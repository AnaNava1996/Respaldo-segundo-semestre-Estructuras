#include <stdio.h> //calcula el factorial de un numero n de manera recursiva

int factorial(int);

int main(){
	
	int n;
	printf("introduzca el numero n: ");
	scanf("%d",&n);
		printf("\n   %d! = %d",n,factorial(n));
		
		
	}

int factorial(int n){
	if(n==0){
		return 1;}
	else{
return n*factorial(n-1);}
}

