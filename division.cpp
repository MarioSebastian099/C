#include <stdio.h>
int main ()
{
	int a,b;
	double c;
	printf("Ingrese dos numeros, primero numerador y despues denominador:\n");
	scanf("%d\n %d",&a, &b);
	if(b==0){
		printf("Error, no se puede dividir entre 0\n");
	}
	else{
		c=(double)a/b;
		printf("El cociente de dividir %d/%d es: \t%lf",a,b,c);
	}
	
}
