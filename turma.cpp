#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()

{
	setlocale (LC_ALL,"Portuguese");
	struct aluno
	{int RA;
	float n1,n2,media;
	};
	
	aluno turma [5];
	int i,op,quantap=0,RAmaior;
	float mediat,soma=0,maior=0;
	
	printf ("\nCadastrar todos os estudantes:");
	
	for (i=0;i<5;i++)
	
	{printf ("\nRA:");
	scanf ("%i",&turma[i].RA);
	printf ("\nNota 1:");
	scanf ("%f",&turma[i].n1);
	printf ("\nNota 2:");
	scanf ("%f",&turma [i].n2);
	}
	
	printf ("\nDigite sua opcão: 1.Calcular médias");
	printf ("\n 2. Verificar quantos aprovados");
	printf ("\n 3.Calcular a média da turma");
	printf ("\n4.Mostrar o RA do aluno com maior nota");
	printf ("\n5.Sair");
	scanf ("%i",&op);
	
	while (op != 5)
	{
	switch (op)
	{
		case 1: for (i=0;i<5;i++)
		{turma[i].media = (turma[i].n1 + turma[i].n2)/2;
		printf ("\nMédia do aluno %i: %f",i+1,turma[i].media);
		}
		break;
		 case 2:for (i=0;i<5;i++)
		 {if(turma[i].media =6)
		 {quantap++;
		 }
		 }
		 break;
		 case 3: mediat = soma/5;
		 break;
		 case 4: for (i=0;i<5;i++)
		 {if(turma[i].media > maior)
		 {maior = turma[i].media;
		 RAmaior = turma[i].RA;
		 }
		 }
		 break;
		 default:break;
	}
	printf ("\nDigite sua opcão: 1.Calcular médias");
	printf ("\n 2. Verificar quantos aprovados");
	printf ("\n 3.Calcular a média da turma");
	printf ("\n4.Mostrar o RA do aluno com maior nota");
	printf ("\n5.Sair");
	scanf ("%i",&op);
	}
	printf ("\nForam aprovados %i alunos ",quantap);
	printf ("\nA média da turma foi %.2f ",mediat);
	printf ("\nA maior nota: %.2f do RA %i",maior,RAmaior);
}
