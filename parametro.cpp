#include <stdio.h>
#include <locale.h>

int somad(int a,int b)
{
	int s;
	printf ("\n a = %i e b = %i",a,b);
	a = 2*a;
	b = 2*b;
	printf ("\n a = %i e b = %i",a,b);
	s = a + b;
	return s;
}
main()
{
	setlocale (LC_ALL,"Portuguese");
	int x,y,res;
	printf ("\nDigite um número:");
	scanf ("%i",&x);
	printf ("\nDigite o segundo número:");
	scanf ("%i",&y);
	res = somad (x,y);
	printf ("\nDobro de x + dobro de y = %i",res);
	printf ("\n x = %i e y = %i",x,y);
}
