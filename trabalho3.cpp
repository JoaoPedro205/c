#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

struct empresa
	{
		int matricula;
		int cpf;
		int faltas;
		char nome[30];
		float salbase;
		float salmes;
	};
	
	empresa dados[10];
	
	cadastrar(empresa v[10])
{
	    printf("\nDigite o seu nome:");
	    scanf("%i",&dados[i].nome);
	    printf("\nDigite o seu CPF:");
	    scanf("%i",&dados[i].cpf);
	    printf("\nDigite o número da matricula:");
	    scanf("%i",&dados[i].matricula)
	    printf("\nDigite o salário base:");
	    scanf("%f",&dados[i].salbase);
}

    faltas(empresa f[10])
    {
    	printf("\nDigite a quantidade de faltas:");
	    scanf("%i",&dados[i].faltas);
	}
	
	float salarioMes (empresa s[10])
	{
		int i;
		float s;
		s[i].salmes = s[i].salbase -( s[i].salbase/30 * s[i].faltas);		
	}
	
main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i,cod;
	
	do{
	printf("\n01.  Cadastrar funcionários, com matrícula, nome, CPF e salário base.");
    printf("\n02.  Registrar as faltas dos 10 funcionários da empresa.");
    printf("\n03.  Calcular e armazenar no campo adequado o salário do mês de todos os funcionários, descontando as faltas");
    printf("\n04.  Informe quantos funcionários faltaram pelo menos 3 dias durante o mês.");
    printf("\n05. Informe o nome, o CPF e o salário desse mês do funcionário que recebe maior salário base.");
    printf("\nDigite o código da opção desejada:");
    scanf ("%i",&cod);
	
	
	switch(cod)
	{
		case 1:printf("\nCadastro de funcionários:");
	    printf("\nCadastro realizado com sucesso.");
	    break;
	    
	    case 2:printf("\nRegistro de faltas:");
	    printf("\nFaltas registradas com sucesso.");
	    break;
	    
	    case 3:printf("\nCalculo e armazenamento do salário do mês de todos os funcionários e desconto de faltas:");
	    printf ("\nO salário será %f",)
		break;
		
		case 4:printf("\nFuncionários que faltaram 3 vezes ou mais na semana:");
			
			break;
		case 5:printf("\nInformações do funcionário que recebe maior salário base:");
		
		break;
	}
}while (cod != 6);
}
