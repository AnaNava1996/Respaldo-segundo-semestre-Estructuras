#include <stdio.h> //el programa calcula MCD mediante el algoritmo de Euclides... con recursividad
#include <cmath>   //funciona con negativos 

int euclidito(int a,int b);

int main(){
	int a,b;
	printf("introduzca los numeros: ");
	scanf("%d %d",&a,&b);
	printf("\nEl MCD de %d y %d es: %d",a,b,euclidito(a,b));
}

int euclidito(int a,int b){
	int c,d,e;
	if(a<0||b<0){
		a=abs(a);
		b=abs(b);
	}
	
	if (a>b){
		c=a;
		d=b;}
	else{
		if(a==b){
			return a;}
			else
			d=a;
			c=b;}
		
		
		if(d==0)
			return c;
			else{
				if(c==d){
				return c;}
					else 		
					if(d==1){
					return 1;}
						else
							e=c%d;
								if(e==0){
								return d;}
								else if(e==1){
								return 1;}
										else{
									c=d;
									d=e;
									a=c;
									b=d;
									euclidito(a,b);}
									}}


