#include<stdio.h>

int main() {

	int a;
	int b;

	printf("Inserisci a\n");
	scanf("%d", &a);
	printf("Inserisci b \n");
	scanf("%d", &b);

	if(a > b){
		printf("il maggiore e' %d\n", a);
	}
	else if(a==b){
                printf("i numeri sono uguali\n");
	}
	
	else{
		printf("il maggiore e' %d\n", b);
	}

	return 0;

}
