#include <stdio.h>

bool confirma(char mensagem[]){
	char conf;
	do{
		printf ("\n%s (S/N):",mensagem);
		fflush(stdin);
		scanf ("%c",&conf);
	}while(conf != 'S'&&conf !='s'&&conf != 'N'&&conf != 'n');
	return conf == 'S' || conf =='s';
}
main()
{
	int numero;
	do{
		printf ("Digite um número:");
		scanf ("%i",&numero);
		printf("%i ao quadrado = %i",numero,numero*numero);
	}while(confirma("Deseja repetir a operação?"));
}
