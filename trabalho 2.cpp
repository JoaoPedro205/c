#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
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
    
    int i,op;
	float porc,estoque,prema,premen,aumento;
	
	printf ("\nForneça as informações necessárias: ");
	
	for(i=0;i<5;i++)
	
	{
	
	printf ("\nDigite o codigo do produto:");
	scanf ("%i",&info[i].cod);
	printf ("\nDigite a descrição do produto:");
	scanf ("%s",&info[i].descricao);
	printf ("\nDigite o preço do produto:");
	scanf ("%f",&info[i].preco);
	printf ("\nDigite a quantidade:");
	scanf ("%i",&info[i].quant);
  	
	}
	
	printf ("\nDigite uma opção:");
	printf ("\n1.Mostre os dados cadastrados:");
	printf ("\n2.Digite o percentual do aumento de preços e altere os preços do produto:");
	printf ("\n3.Informe a descrição dos produtos que tem quantidade de estoque abaixo de 10:");
	printf ("\n4.Informe a descrição dos produtos que possuem preço acima de R$ 1000,00:");
	printf ("\n5.Informe o preço mais alto e o preço mais baixo:");
	printf ("\n6.Sair!");
	scanf ("%i",&op);
	
	while (op != 6)
	
	{
		switch (op)
		{
			case 1:for (i=0;i<5;i++)
			
			printf ("\nDados cadastrados:");
			printf ("\nCodigo do produto: %i",info[i].cod);
			printf ("\nDescrição do produto: %s",info[i].descricao);
			printf ("\nPreço do produto: %f",info[i].preco);
			printf ("\nQuantidade do produto: %i",info[i].quant);
			break;
			
			case 2:for (i=0;i<5;i++)
			printf ("\nDigite o porcentual de aumento:");
			scanf ("%f",&porc);
			aumento = info[i].preco * porc/100;
			info[i].preco = info[i].preco + aumento;
			break;
			
		}
	}
    }
