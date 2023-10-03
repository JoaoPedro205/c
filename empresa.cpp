#include <stdio.h>
#include <locale.h>

float lucpre (float a,float b)
{
	float s;
	s = a - b;
	return s;
}
main()
{
	setlocale(LC_ALL,"Portuguese");
	float l,p,saldo;
	printf ("\nDigite o lucro da empresa:");
	scanf ("%f",&l);
	printf ("\nDigite a despesa da empresa:");
	scanf ("%f",&p);
	saldo = lucpre (l,p);
	printf ("\nO saldo da empresa será %.2f",saldo);
	if (saldo >= 500000)
	{
		printf ("\nO lucro foi superior ou igual a R$500.000");
	}
	else
	{
		printf ("\nA empresa não atingiu a meta de R$500.000");
	}
}
