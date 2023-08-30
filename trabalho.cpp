#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main()
{setlocale (LC_ALL,"Portuguese");

int categoria,pdesc,i;
float preco,valord,precod,soma,media,vendsd,vendd,totalv;

pdesc = 0;
soma = 0;
vendsd = 0;
vendd = 0;

for (i=1;i<=15;i++)

{
	printf ("\nDigite a catégoria do produto: ");
     scanf ("%i",&categoria);


switch(categoria)
{case 1 : printf ("\nEletronicos");
     printf ("\nDigite o preço do produto: ");
     scanf ("%f",&preco);
     if(preco <= 50)
     {
     	printf ("\nO produto não possui desconto!");
     	vendsd = vendsd + preco;
	}
	else if (preco <= 150)
     {
     	valord = preco * 15/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*15/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc +1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	else if (preco >=150.01)
	{
		valord = preco * 20/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*20/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc +1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	break;
	
	case 2 : printf ("\nPanelas");
	 printf ("\nDigite o preço do produto: ");
     scanf ("%f",&preco);
     if(preco <= 70)
     {
     	printf ("\nO produto não possui desconto!");
     	vendsd = vendsd + preco;
	}
	else if (preco <= 170)
     {
     	valord = preco * 15/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*15/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	else if (preco >=170.01)
	{
		valord = preco * 20/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*20/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	break;
	
	case 3 : printf ("\nToalhas de banho");
	 printf ("\nDigite o preço do produto: ");
     scanf ("%f",&preco);
     if(preco <= 30)
     {
     	printf ("\nO produto não possui desconto!");
     	vendsd = vendsd + preco;
	}
	else if (preco <= 130)
     {
     	valord = preco * 15/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*15/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	else if (preco >=130.01)
	{
		valord = preco * 20/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*20/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	break;

	case 4 : printf ("\nRoupas de cama");
	printf ("\nDigite o preço do produto: ");
     scanf ("%f",&preco);
     if(preco <= 40)
     {
     	printf ("\nO produto não possui desconto!");
     	vendsd = vendsd + preco;
	}
	else if (preco <= 140)
     {
     	valord = preco * 15/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*15/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	else if (preco >=140.01)
	{
		valord = preco * 20/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*20/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	break;
	
	case 5 : printf ("\nBeleza");
	printf ("\nDigite o preço do produto: ");
     scanf ("%f",&preco);
     if(preco <= 60)
     {
     	printf ("\nO produto não possui desconto!");
     	vendsd = vendsd + preco;
	}
	else if (preco <= 160)
     {
     	valord = preco * 15/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*15/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	else if (preco >=160.01)
	{
		valord = preco * 20/100;
     	printf ("\nO valor do desconto será de %.2f",valord);
     	precod = preco-(preco*20/100);
     	printf ("\nO valor do produto com desconto será de %.2f",precod);
     	pdesc = pdesc + 1;
     	soma = soma + valord;
     	vendd = vendd + precod;
	}
	break;
	
	case 6 : ("\nOutros");
	printf ("O produto não terá desconto");
	vendsd = vendsd + preco;

     break;
 default: printf ("\nERRO!");
}
}
     totalv =vendsd + vendd;
     media = soma / pdesc;
     printf ("\nA quantidade de produtos que tiveram desconto foi de %.2i ",pdesc);
     printf ("\nA média dos descontos será de %.2f",media);
	printf ("\nO total das vendas será de %.2f",totalv);    
}
