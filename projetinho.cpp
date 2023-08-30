#include <stdio.h>

#include <conio.h>

#include <math.h>

#include <locale.h>

main()

{setlocale(LC_ALL,"Portuguese");

int nasc,pessoas,anoexp,quantm,cinq,exp,percm;

quantm = 0;

cinq = 0;

pessoas = 0;

exp = 0;

printf ("\nDigite o ano que voce nasceu: ");

	scanf ("%i",&nasc);

while(nasc < 2010)

{	

	printf ("\nDigite o número 1 se for homem e 2 se for mulher: ");

	scanf ("%i",&pessoas);

	pessoas = pessoas + 1;

	if (quantm == '2')

	{	

		quantm = quantm + 1;

     }

	printf ("\nDigite quantos anos tem de experiencia: ");

	scanf ("%i",&anoexp);

	if (anoexp >= 5)

	{

	exp = exp + 1;

}

	if (nasc <=1973)

	{

		cinq =cinq + 1;

	}

	printf ("\nDigite o ano que voce nasceu: ");

	scanf ("%i",&nasc);

}

percm = quantm*100/pessoas;

printf ("\nA quantidade de pessoas com mais de 5 anos de experiencia será de:%i ",exp);

printf ("\nO percentual de mulheres será de %i",percm);

printf ("\nA quantidade de pessoas que participaram foi de %i",pessoas);

printf ("\nA quantidade de pessoas com mais de 50 anos foi de %i",cinq);

}
