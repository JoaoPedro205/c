#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{setlocale (LC_ALL,"Portuguese");
int i,j,mat[3][3],soma=0;
float media;
for (i=0;i<3;i++)
{printf ("\nLinha %i",i);
for(j=0;j<3;j++)
{printf ("\nDigite: ");
scanf ("%i",&mat[i][j]);
if(i==j)
{
printf ("\nDiagonal %i",mat[i][j]);
soma= soma + mat[i][j];
}
}
}
media= soma/3;
printf ("\nMédia: %.2f",media);
media= (mat[0][0]+ mat [1][1]+ mat[2][2])/3;
}
