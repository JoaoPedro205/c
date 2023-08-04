#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{setlocale (LC_ALL,"Portuguese");
int x,y,res;
printf ("\nDigite a base da potencia: ");
scanf("%i",&x);
printf ("\nDigite o expoente: ");
scanf ("%i",&y);
res = 1;
while (y > 0)
     {if (y == 0)
     {res = 1;
	}
	else { res = res*x;
     }
     y = y - 1;
	}
	printf ("\nResultado: %i",res);	
}
