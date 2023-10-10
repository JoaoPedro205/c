#include <stdio.h>

main()
{
	int valor;
	int *ptr;
	printf ("Digite um valor:");
	scanf ("%f",&valor);
	ptr = &valor;
	printf ("\nUtilizando ponteiros");
	printf ("\nConteúdo da variavel valor %i",valor);
	printf ("\nEndereço da variavel valor %p",&valor);
	printf ("\nConteúdo da variavel ponteiro ptr: %p",ptr);
}
