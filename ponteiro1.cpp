#include <stdio.h>

main()
{
	int a,b,c;
	int *ptr;
	a=90;
	b=2;
	c=3;
	ptr=&a;
	printf("\nValor de ptr: %i, Conteúdo de ptr: %i",ptr, *ptr);
	printf ("\nB: %i, C: %i",b,c);
}
