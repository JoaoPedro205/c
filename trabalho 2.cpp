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
	
	printf ("\nForne�a as informa��es necess�rias: ");
	
	for(i=0;i<5;i++)
	
	{
	
	printf ("\nDigite o codigo do produto:");
	scanf ("%i",&info[i].cod);
	printf ("\nDigite a descri��o do produto:");
	scanf ("%s",&info[i].descricao);
	printf ("\nDigite o pre�o do produto:");
	scanf ("%f",&info[i].preco);
	printf ("\nDigite a quantidade:");
	scanf ("%i",&info[i].quant);
  	
	}
	
	printf ("\nDigite uma op��o:");
	printf ("\n1.Mostre os dados cadastrados:");
	printf ("\n2.Digite o percentual do aumento de pre�os e altere os pre�os do produto:");
	printf ("\n3.Informe a descri��o dos produtos que tem quantidade de estoque abaixo de 10:");
	printf ("\n4.Informe a descri��o dos produtos que possuem pre�o acima de R$ 1000,00:");
	printf ("\n5.Informe o pre�o mais alto e o pre�o mais baixo:");
	printf ("\n6.Sair!");
	scanf ("%i",&op);
	
	while (op != 6)
	
	{
		switch (op)
		{
			case 1:for (i=0;i<5;i++)
			
			printf ("\nDados cadastrados:");
			printf ("\nCodigo do produto: %i",info[i].cod);
			printf ("\nDescri��o do produto: %s",info[i].descricao);
			printf ("\nPre�o do produto: %f",info[i].preco);
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
