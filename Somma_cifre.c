#include<stdio.h>

int main() {

	int n;
	int c;
	int d;
	int u;
	int somma = 0;

	printf("Inserisci un numero di tre cifre \n");
	scanf("%d", &n);

	if(n > 99 && n<1000){        

	   u = n%10;     
       n = n/10;
      d = n%10;
       n = n/10;
      c = n%10;

		somma = c+d+u;
		
		printf("la somma e' %d\n", somma);

		}


	else{
		printf("il numero non ha tre cifre \n");
	}


	return 0; 
}
