#include <stdio.h> // suma m+n recursivo

int suma(int,int);

int main(){
	int m,n;
	printf("ingrese los numeros a sumar: ");
	scanf("%d %d",&m,&n);
	printf("\nLa multiplicacion de %d por %d es: %d",m,n,suma(m,n));
}

int suma(int m, int n){
	int sum;
	if(m==0||n==0){
	if(n==0){
		if(m==0){
		return 0;}	
		return m;}
	if(m==0&&n!=0){
		return n;}}
else{
sum = 1+suma(m,n-1);
	return sum;}
	}
		
