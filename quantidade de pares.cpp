#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{setlocale (LC_ALL,"Portuguese");
int i,num,qpares;
qpares=0;
for(i=1;i<=5;i++)
{printf ("\nDigite um número: ");
scanf ("%i",&num);
if (num % 2 == 0)
{printf ("\nPAR!!!");
qpares = qpares + 1;
}
else {printf ("\nIMPAR!!!");
}
printf ("\nEncontramos %i números pares.",qpares);
}
}

// Faça um programa que peça ao usuário para digitar 5 números naturais e informe quantos números pares foram digitados.//
