#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1=0, num2=0;
	printf("inserisci il primo numero da sommare: ");
	scanf("%D", &num1);
	printf("inserisci il secondo numero da sommare: ");
        scanf("%D", &num2);
	printf("La somma e' uguale a: %d", (num1+num2));
	return 0;

}
