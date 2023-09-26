#include <stdio.h>
#include <locale.h>

bool par(int x)
{
	bool p;
	if(x%2==0)
	{
		p = true;
	}
	else{p = false;
	}
	return p;
}
int soma (int a, int b)
{
	int s;
	s = a + b;
	return s;
}
main()
{
	setlocale (LC_ALL,"Portuguese");
	int num,num2,res;
	printf ("\nDigite um número:");
	scanf ("%i",&num);
	if(par(num))
	{
		printf ("\nPAR!!!");
	}
	else{printf ("\nIMPAR!!!");
	}
	printf("\nDigite outro número:");
	scanf ("%i",&num2);
	res = soma(num,num2);
	printf ("\nA soma é: %i",res);
	
}
