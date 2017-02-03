#include<stdio.h>

int main() {

	int n;
	int a;
	int b;
	int c;
	int somma = 0;

	printf("Inserisci un numero di tre cifre \n");
	scanf("%d", &n);

	if(n > 99 && n<1000){        

		a = n/100;
		b = (n-(a*100))/10;
		c = n-(a*100)-(b*10);

		somma = a+b+c;
		
		printf("la somma e' %d\n", somma);

		}


	else{
		printf("il numero non ha tre cifre \n");
	}


	return 0; 
}
