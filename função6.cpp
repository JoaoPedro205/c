#include <stdio.h>
#include <locale.h>

float mediaa (float nota1,float nota2,float nota3)
{
	float s;
	s = (nota1 + nota2 + nota3)/3;
	return s;
}
float mediap (float nota1,float nota2,float nota3)
{
	float s;
	s = (nota1*3 + nota2*2 + nota3)/6;
	return s;
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,res;
	char op;
	printf ("\nDigite a primeira nota:");
	scanf ("%f",&n1);
	printf ("\nDigite a segunda nota:");
	scanf ("%f",&n2);
	printf ("\nDigite a terceira nota:");
	scanf ("%f",&n3);
	printf ("\nEscolhas as opções A para aritmetica e P para media ponderada:");
	scanf ("%s",&op);
	
	switch(op)
	{
		
		case 'a': printf("\nMédia Aritmetica");
		res = mediaa (n1,n2,n3);
		printf("\nO resultado será %f", res);
		break;
		
		case 'p': printf("\nMédia Ponderada");
		res = mediap (n1,n2,n3);
		printf("\nO resultado será %f",res);
		break;
		default:printf ("ERROR");
	}
}
