#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

float soma(float n1,float n2,float n3)
{
	float s;
	s= n1+n2+n3;
	return s;
}
float subt(float n1,float n2)
{ 
    float s;
    s= n1 - n2;
    return s;
}
float multi(float n1,float n2)
{
	float s;
	s= n1 * n2;
	return s;
}
float div(float n1,float n2)
{
	float s;
	s= n1/n2;
	return s;
	
}
float media(float n1,float n2,float n3)
{
	float s;
	s= (n1 + n2 + n3)/3;
	return s;
}

main()
{
	setlocale(LC_ALL,"Portuguese");
	int cod;
	float num1,num2,num3,res;
	printf ("\nDigite o primeiro n�mero:");
	scanf ("%f",&num1);
	printf ("\nDigite o segundo n�mero:");
	scanf ("%f",&num2);
	printf ("\nDigite o terceiro n�mero:");
	scanf ("%f",&num3);
	
	do{
	printf ("\n1.Soma dos n�meros:");
	printf ("\n2.Subtra��o de dois n�meros:");
	printf ("\n3.Multiplica��o entre dois n�meros:");
	printf ("\n4.Divis�o entre dois n�meros:");
	printf ("\n5.M�dia dos n�meros:");
	printf ("\nDigite o codigo:");
	scanf ("%i",&cod);
	
	switch(cod)
	{
		case 1:printf ("\nSoma dos n�meros");
		res = soma(num1,num2,num3);
		printf ("\nO resultado da soma ser� %.2f",res);
		break;
		
		case 2:printf ("\nSubtra��o de 2 n�meros");
		res=subt(num1,num2);
		printf ("\nO resultado da subtra��o de dois n�meros ser� %.2f",res);
		break;
		
		case 3:printf ("\nMultiplica��o entre 2 n�meros");
		res=multi(num1,num2);
		printf ("\nO resultado da multiplica��o de dois n�meros ser� %.2f",res);
		break;
		
		case 4:printf ("\nDivis�o entre 2 n�meros");
		res=div(num1,num2);
		printf ("\nO resultado da divis�o de dois n�meros ser� %.2f",res);
		break;
		
		case 5:printf ("\nM�dia entre os n�meros");
		res=media(num1,num2,num3);
		printf ("\nA m�dia dos tr�s n�meros ser� %.2f",res);
		break;
		
		case 6:printf ("\nSaindo do programa.");
	}
}while (cod != 6);
}
