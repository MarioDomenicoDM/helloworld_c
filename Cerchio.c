#include<stdio.h>

int main() {

	int r;
	double pi = 3.1415926535;
	double A ;
	double P ;

	printf("inserisci il raggio  \n");
	scanf("%d", &r);

	A = (r*r)*pi;
	P = 2*r*pi;

	printf("Area = %f\n", A);
	printf("Perimetro = %f\n", P);

	return 0;

}
