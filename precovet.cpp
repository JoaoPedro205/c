#include <stdio.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL,"Portuguese");
	float precos[12],media,soma = 0,caro=0;
	int i;
	for (i=0;i<12;i++)
	{
		printf ("\nDigite o pre�o ");
		scanf ("%f",&precos[i]);
		if(precos[i] > caro)
		{
			caro = precos[i];
		}
		soma = soma + precos[i];
	}
	media = soma/12;
	printf ("\nO maior valor ser� %.2f",caro);
	printf ("\nA media dos pre�os ser� %.2f",media);
}
