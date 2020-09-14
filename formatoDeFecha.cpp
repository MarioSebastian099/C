#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	int n, anio, mes, dia;
	printf("Ingrese un numero de 8 digitos");
	scanf("%d",&n);
	anio=n/10000;
	mes=(n%10000)/100;
	dia=(n%10000)%100;
	printf("dia: %d\nmes: %d\naño: %d\n ", dia, mes, anio);
}
