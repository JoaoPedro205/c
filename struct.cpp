#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

main ()
{
	setlocale (LC_ALL,"Portuguese");
	
	struct produto
	
{

int cod;
char descricao [30];
float preco;
int quant;

};

int estq;
float media;
produto A,B,C;

printf ("Digite o codigo do produto:");
scanf ("%i",&A.cod);
printf ("Digite o nome do produto:");
scanf ("%s",&A.descricao);
printf ("Digite o preço do produto:");
scanf ("%f",&A.preco);
printf ("Digite a quantidade do produto:");
scanf ("%i",&A.quant);

printf ("Digite o codigo do produto:");
scanf ("%i",&B.cod);
printf ("Digite o nome do produto:");
scanf ("%s",&B.descricao);
printf ("Digite o preço do produto:");
scanf ("%f",&B.preco);
printf ("Digite a quantidade do produto:");
scanf ("%i",&B.quant);

printf ("Digite o codigo do produto:");
scanf ("%i",&C.cod);
printf ("Digite o nome do produto:");
scanf ("%s",&C.descricao);
printf ("Digite o preço do produto:");
scanf ("%f",&C.preco);
printf ("Digite a quantidade do produto:");
scanf ("%i",&C.quant);

media = (A.preco + B.preco + C.preco)/3;
estq = A.quant + B.quant + C.quant;

printf ("A media de preços será de: %.2f",media);
printf ("A quantidade de produtos no estoque: %i",estq);
}
