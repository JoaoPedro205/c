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
main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	printf ("\nDigite um número:");
	scanf ("%i",&num);
	if(par(num))
	{
		printf ("\nPAR!!!");
	}
	else{printf ("\nIMPAR!!!");
	}
}
