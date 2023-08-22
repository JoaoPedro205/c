#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{setlocale (LC_ALL,"Portuguese");
struct aluno
{
int RA;
float nota;
};

float media;
aluno A,B;

printf ("\nDigite seu RA");
scanf ("%i",&A.RA);
printf ("\nDigite a nota");
scanf ("%f",&A.nota);
printf ("\nAluno RA: %i tem nota %.2f ",A.RA,A.nota);

printf ("\nDigite seu RA");
scanf ("%i",&B.RA);
printf ("\nDigite a nota");
scanf ("%f",&B.nota);
printf ("\nAluno RA: %i tem nota %.2f ",B.RA,B.nota);

media = (A.nota + B.nota)/2;
printf ("\nMedia: %.2f",media);
}
