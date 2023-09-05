#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale (LC_ALL,"Portuguese");
	
	int codigo,i;
	float moeda[6],valor,conversor;
	
	printf ("\nDolar = 1");
	printf ("\nPeso Argentino = 2");
	printf ("\nDinar do Bahrein = 3");
	printf ("\nFranco suiço = 4");
	printf ("\nLibra esterlina = 5");
	printf ("\nEuro = 6");
	
	while (valor = 0)
	
{ 
	 
	printf ("\nDigite o codigo da moeda que deseja converter: ");
	scanf ("%i",&codigo);
	
		switch (codigo)
		
		{
			case 1: printf ("\nDolar");
			printf ("Digite o valor que deseja converter:");
			scanf ("%f",&valor);
			conversor = valor * 4.97;
			break;
			
			case 2: printf ("\nPeso");
			printf ("Digite o valor que deseja converter:");
			scanf ("%f",&valor);
			conversor = valor * 0.014;
			break;
			
			case 3: printf ("\nDinar");
			printf ("Digite o valor que deseja converter:");
			scanf ("%f",&valor);
			conversor = valor * 16.10;
			break;
			
			case 4: printf ("\nFranco suiço");
			printf ("Digite o valor que deseja converter:");
			scanf ("%f",&valor);
			conversor = valor * 5.59;
			break;
			
			case 5: printf ("\nLibra esterlina");
			printf ("Digite o valor que deseja converter:");
			scanf ("%f",&valor);
			conversor = valor * 6.24;
			break;
			
			case 6: printf ("\nEuro");
			printf ("Digite o valor que deseja converter:");
			scanf ("%f",&valor);
			conversor = valor * 5.33;
			break;
		}

	printf ("O valor será de $ %.2f",conversor);
	printf ("Os valores digitados foram: %f",valor);
}
}
