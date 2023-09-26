#include <stdio.h>
#include <locale.h>
main()
{
	struct aluno
	{
		int RA;
		char nome[20];
		float nota1,nota2,nota3,media;
	};
	aluno A;
	printf ("\nDigite o RA: ");
	scanf ("%i",&A.RA);
	printf ("\nDigite o nome: ");
	scanf ("%s",&A.nome);
     printf ("\nDigite a nota 1:");
	scanf ("%f",&A.nota1);
	printf ("\nDigite a nota 2:");
	scanf ("%f",&A.nota2);
	printf ("\nDigite a nota 3:");
	scanf ("%f",&A.nota3);
     A.media = (A.nota1 + A.nota2 + A.nota3)/3;
     if (A.media > 6)
     {
     	printf ("\nAprovado");
	}
	else{
		printf ("\nReprovado");
	}
}
