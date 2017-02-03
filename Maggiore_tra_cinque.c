#include<stdio.h>

int main() {

	int a;
	int b;
	int c;
	int d;
	int e;
	int max = 0;

	printf("Inserisci a \n");
	scanf("%d", &a);
        printf("Inserisci b \n");
        scanf("%d", &b);
        printf("Inserisci c \n");
        scanf("%d", &c);
        printf("Inserisci d \n");
        scanf("%d", &d);
        printf("Inserisci e \n");
        scanf("%d", &e);

	if(a>max) max = a;
        if(b>max) max = b;
        if(c>max) max = c;
        if(d>max) max = d;
        if(e>max) max = e;

	if(a==b && b==c && c==d && d==e){
		printf("i numeri sono uguali! \n");
	}

	else{
		printf("il maggiore e' %d\n", max);
	}


	return 0;

}

