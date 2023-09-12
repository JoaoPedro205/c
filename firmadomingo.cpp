#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

main()

{
	setlocale(LC_ALL,"Portuguese");
	
	struct produto
	{
		int cod;
		char descricao[30];
		float preco;
		int quant;
	};
	
	produto info[5];
	
	int i,j;
	float porc[1][5];
	
	for(i=0;i<1;i++)
	
	{
	
	printf ("\nDigite o codigo do produto:");
	scanf ("%i",&info[i].cod);
	printf ("\nDigite a descrição do produto:");
	scanf ("%s",&info[i].descricao);
	printf ("\nDigite o preço do produto:");
	scanf ("%f",&info[i].preco);
	printf ("\nDigite a quantidade:");
	scanf ("%i",&info[i].quant);
    
    printf ("\nDigite a porcentagem de aumento do produto desejado:");
    scanf ("%f",&porc[i][j]);
 }
   info[i].preco= info[i].preco + (info[i].preco * porc[i][j]);
   
  
}
