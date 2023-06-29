#include <stdio.h>

#include <conio.h>

#include <locale.h>

#include <math.h>

main()

{setlocale (LC_ALL,"Portuguese");

int i,ano,idade,maior,soma;

float media;

maior=0;

soma= 0;

for (i=1;i<=10;i++)

{printf ("\nDigite o ano em que voce nasceu: ");

scanf ("%i",&ano);

idade = 2023-ano;

soma= soma+idade;



if (idade >= 18)

{printf ("\nVoce é maior de idade.");

maior =maior + 1;

}

else {printf ("\nVoce é menor de idade.");

}

}

media =soma/10;

printf ("\nA media de idades é de %.2f",media);

printf ("\nExistem %i maiores de idade",maior);

}
