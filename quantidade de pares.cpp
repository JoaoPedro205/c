#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{setlocale (LC_ALL,"Portuguese");
int i,num,qpares;
qpares=0;
for(i=1;i<=5;i++)
{printf ("\nDigite um n�mero: ");
scanf ("%i",&num);
if (num % 2 == 0)
{printf ("\nPAR!!!");
qpares = qpares + 1;
}
else {printf ("\nIMPAR!!!");
}
printf ("\nEncontramos %i n�meros pares.",qpares);
}
}

// Fa�a um programa que pe�a ao usu�rio para digitar 5 n�meros naturais e informe quantos n�meros pares foram digitados.//
