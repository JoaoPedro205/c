#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()

{setlocale (LC_ALL,"Portuguese");
float tempm[12],maiort=-99,menort=99;
int i,posmenor,posmaior;
for (i=0;i<12;i++)
{printf ("Digite a média de temperatura de cada mes: ");
scanf ("%f",&tempm[i]);
}
for (i=0;i<12;i++)
{if (tempm[i] > maiort)
     {maiort = tempm[i];
     posmaior = i;
	}

	if (tempm[i] < menort)
     {menort = tempm[i];
     posmenor = i;
	}
	}
switch (posmaior)
{ case 0:printf("\nMes com maior temperatura:Janeiro");

break;
 case 1:printf("\nMes com maior temperatura:Fevereiro");

break;
 case 2:printf("\nMes com maior temperatura:Março");

break;
 case 3:printf("\nMes com maior temperatura:Abril");

break;
 case 4:printf("\nMes com maior temperatura:Maio");

break;
 case 5:printf("\nMes com maior temperatura:Junho");

break;
 case 6:printf("\nMes com maior temperatura:Julho");

break;
 case 7:printf("\nMes com maior temperatura:Agosto");

break;
 case 8:printf("\nMes com maior temperatura:Setembro");

break;
 case 9:printf("\nMes com maior temperatura:Outubro");

break;
 case 10:printf("\nMes com maior temperatura:Novembro");

break;
 case 11:printf("\nMes com maior temperatura:Dezembro");
break;
}
switch (posmenor)
{ case 0:printf("\nMes com menor temperatura:Janeiro");

break;
 case 1:printf("\nMes com menor temperatura:Fevereiro");

break;
 case 2:printf("\nMes com menor temperatura:Março");

break;
 case 3:printf("\nMes com menor temperatura:Abril");

break;
 case 4:printf("\nMes com menor temperatura:Maio");

break;
 case 5:printf("\nMes com menor temperatura:Junho");

break;
 case 6:printf("\nMes com menor temperatura:Julho");

break;
 case 7:printf("\nMes com menor temperatura:Agosto");

break;
 case 8:printf("\nMes com menor temperatura:Setembro");

break;
 case 9:printf("\nMes com menor temperatura:Outubro");

break;
 case 10:printf("\nMes com menor temperatura:Novembro");

break;
 case 11:printf("\nMes com menor temperatura:Dezembro");
break;
}
printf ("\nA maior temperatura foi %.2f. ",maiort);
printf ("\nA menor temperatura foi de %.2f. ",menort);
}

