#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main()
{setlocale (LC_ALL,"Portuguese");
int i,j,a[2][3],b[2][3],s[2][3],soma=0,maior;
for (i=0;i<2;i++)
{for (j=0;j<3;j++)
{
printf ("\nDigite um valor: ");
scanf ("%i",&a[i][j]);
if (a[i][j] > maior)
{maior = a [i][j];
}
}
}
for (i=0;i<2;i++)
{for (j=0;j<3;j++)
{
printf ("\nDigite um valor: ");
scanf ("%i",&b[i][j]);
if (b[i][j] > maior)
{maior = b [i][j];
}
}
}
for (i=0;i<2;i++)
{for (j=0;j<3;j++)
{s[i][j] = a [i][j] + b [i][j];
printf ("\nO resultado será %i",s[i][j]);
}
}
printf ("\nO maior valor é %i",maior);
}
