#include <stdio.h>

main()
{
	int valor;
	int *ptr;
	printf ("Digite um valor:");
	scanf ("%f",&valor);
	ptr = &valor;
	printf ("\nUtilizando ponteiros");
	printf ("\nConte�do da variavel valor %i",valor);
	printf ("\nEndere�o da variavel valor %p",&valor);
	printf ("\nConte�do da variavel ponteiro ptr: %p",ptr);
}
