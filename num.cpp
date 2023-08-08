#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{setlocale (LC_ALL,"Portuguese");
int i,j,m[2][5],maior=0;
for (i=0;i<2;i++)
{for (j=0;j<5;j++)
{printf ("\nDigite um número: ");
scanf ("%i",&m[i][j]);
if (m[i][j] > maior)
{maior = m [i][j];
}
}
}
printf ("\nO maior elemento presente na matriz é: %i",maior);
}
