#include<stdio.h>

int main() {
	
	int a;
	int b;
	int somma = 0;
	int differenza = 0;
	int prodotto = 0;
	int divisione = 0;
	int resto = 0;

	printf("inserisci a \n");
	scanf("%d", &a);
	printf("inserisci b \n");
	scanf("%d", &b);

	somma = a+b;
	differenza = a-b;
	prodotto = a*b;
	divisione = a/b;
	resto = a%b;
	printf("Somma = %d\n", somma);
	printf("Differenza = %d\n", differenza);
	printf("Prodotto = %d\n", prodotto);
	printf("Divisione = %d", divisione);
	printf(" resto = %d\n", resto);



	return 0;

}
