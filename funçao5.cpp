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
	printf ("\nDigite o primeiro número:");
	scanf ("%f",&num1);
	printf ("\nDigite o segundo número:");
	scanf ("%f",&num2);
	printf ("\nDigite o terceiro número:");
	scanf ("%f",&num3);
	
	do{
	printf ("\n1.Soma dos números:");
	printf ("\n2.Subtração de dois números:");
	printf ("\n3.Multiplicação entre dois números:");
	printf ("\n4.Divisão entre dois números:");
	printf ("\n5.Média dos números:");
	printf ("\nDigite o codigo:");
	scanf ("%i",&cod);
	
	switch(cod)
	{
		case 1:printf ("\nSoma dos números");
		res = soma(num1,num2,num3);
		printf ("\nO resultado da soma será %.2f",res);
		break;
		
		case 2:printf ("\nSubtração de 2 números");
		res=subt(num1,num2);
		printf ("\nO resultado da subtração de dois números será %.2f",res);
		break;
		
		case 3:printf ("\nMultiplicação entre 2 números");
		res=multi(num1,num2);
		printf ("\nO resultado da multiplicação de dois números será %.2f",res);
		break;
		
		case 4:printf ("\nDivisão entre 2 números");
		res=div(num1,num2);
		printf ("\nO resultado da divisão de dois números será %.2f",res);
		break;
		
		case 5:printf ("\nMédia entre os números");
		res=media(num1,num2,num3);
		printf ("\nA média dos três números será %.2f",res);
		break;
		
		case 6:printf ("\nSaindo do programa.");
	}
}while (cod != 6);
}
