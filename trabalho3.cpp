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
	    printf("\nDigite o n�mero da matricula:");
	    scanf("%i",&dados[i].matricula)
	    printf("\nDigite o sal�rio base:");
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
	printf("\n01.  Cadastrar funcion�rios, com matr�cula, nome, CPF e sal�rio base.");
    printf("\n02.  Registrar as faltas dos 10 funcion�rios da empresa.");
    printf("\n03.  Calcular e armazenar no campo adequado o sal�rio do m�s de todos os funcion�rios, descontando as faltas");
    printf("\n04.  Informe quantos funcion�rios faltaram pelo menos 3 dias durante o m�s.");
    printf("\n05. Informe o nome, o CPF e o sal�rio desse m�s do funcion�rio que recebe maior sal�rio base.");
    printf("\nDigite o c�digo da op��o desejada:");
    scanf ("%i",&cod);
	
	
	switch(cod)
	{
		case 1:printf("\nCadastro de funcion�rios:");
	    printf("\nCadastro realizado com sucesso.");
	    break;
	    
	    case 2:printf("\nRegistro de faltas:");
	    printf("\nFaltas registradas com sucesso.");
	    break;
	    
	    case 3:printf("\nCalculo e armazenamento do sal�rio do m�s de todos os funcion�rios e desconto de faltas:");
	    printf ("\nO sal�rio ser� %f",)
		break;
		
		case 4:printf("\nFuncion�rios que faltaram 3 vezes ou mais na semana:");
			
			break;
		case 5:printf("\nInforma��es do funcion�rio que recebe maior sal�rio base:");
		
		break;
	}
}while (cod != 6);
}
