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
	float porc,prema=0,premen=9999,aumento;
	
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
	do{
	
	printf ("\nDigite uma opção:");
	printf ("\n1.Mostre os dados cadastrados:");
	printf ("\n2.Digite o percentual do aumento de preços e altere os preços do produto:");
	printf ("\n3.Informe a descrição dos produtos que tem quantidade de estoque abaixo de 10:");
	printf ("\n4.Informe a descrição dos produtos que possuem preço acima de R$ 1000,00:");
	printf ("\n5.Informe o preço mais alto e o preço mais baixo:");
	printf ("\n6.Sair!");
	scanf ("%i",&op);
	
		switch (op)
		{
		   case 1:printf ("\nDados cadastrados:");
		   for (i=0;i<5;i++)
		{
			printf ("\nCodigo do produto:%i",info[i].cod);
			printf ("\nDescrição do produto: %s",info[i].descricao);
			printf ("\nPreço do produto: %.2f",info[i].preco);
			printf ("\nQuantidade do produto: %i",info[i].quant);
		}
			break;
			
			case 2:printf ("\nDigite o porcentual de aumento:");
			scanf ("%f",&porc);
			for (i=0;i<5;i++)
			{
			aumento = info[i].preco * porc/100;
			info[i].preco = info[i].preco + aumento;
		}
			break;
			
			case 3:for (i=0;i<5;i++)
		{
		
			if (info [i].quant < 10)
			{
				printf ("\nOs produtos com estoque menor que 10 são: %s ",info [i].descricao);
			}
		}
			break;
			
			case 4:for (i=0;i<5;i++)
			{
			if (info[i].preco > 1000)
			{ 
			    printf ("Os produtos que custam mais que R$ 1000,00 são: %s",info[i].descricao);
			}
		}
			break;
		
		
		case 5:for (i=0;i<5;i++)
		{
		if (info[i].preco < premen)
		{
			premen = info[i].preco;
		}
		if (info[i].preco > prema)
		{
			prema = info[i].preco;
		}
	}
		printf ("\n O maior preço é: %.2f",prema);
		printf ("\n O menor preço é: %.2f",premen);
		break;
		
		case 6:printf ("\nSaindo do programa.");
		break;
		
		default: printf ("\nOpção inválida");
	}
    } while(op !=6);
    }
