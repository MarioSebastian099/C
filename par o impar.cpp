#include <stdio.h>
int main ()
{
	int a;
	printf("Ingrese un numero natural");
	scanf("%d", &a);
	if(a%2==0){
		printf("%d es par",a);
	}
	else{
		printf("%d es impar",a);
	}
}

