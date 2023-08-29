#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale (LC_ALL,"Portuguese"); 
	
	struct conta
	{
		int num;
		int tipo;
		float saldo;
	};
	
	conta C1,C2,C3;
	float saldot,media,salpoup,salcor,maiors = 0,menors = 999999;
	int quantp,quantc;
	
	printf ("\nDigite o número da conta 1: ");
	scanf ("%i",&C1.num);
	printf ("\nTipo 1:poupança ou 2:corrente: ");
	scanf ("%i",&C1.tipo);
	printf ("\nSaldo da conta 1: ");
	scanf ("%f",&C1.saldo);
	if(C1.tipo == 1)
	   {quantp = quantp + 1;
	   salpoup = C1.saldo + salpoup;
	   }
	   else{if(C1.tipo == 2)
	   {quantc++;
	   salcor = C1.saldo + salcor;
	   }
	   else {printf ("Tipo inválido!");
	   }
      }
      if (C1.saldo > maiors)
      {maiors = C1.saldo;
	 }
	 if (C1.saldo < menors)
	 {menors = C1.saldo;
	 }
	printf ("\nDigite o número da conta 2: ");
	scanf ("%i",&C2.num);
	printf ("\nTipo 1:poupança ou 2:corrente: ");
	scanf ("%i",&C2.tipo);
	printf ("\nSaldo da conta 2: ");
	scanf ("%f",&C2.saldo);
	if(C2.tipo == 1)
	   {quantp = quantp + 1;
	   salpoup = C2.saldo + salpoup;
	   }
	   else{if(C2.tipo == 2)
	   {quantc++;
	   salcor = C2.saldo + salcor;
	   }
	   else {printf ("Tipo inválido!");
	   }
      }
	   if (C2.saldo > maiors)
      {maiors = C2.saldo;
	 }
	   if (C2.saldo < menors)
	 {menors = C2.saldo;
	 }
	 
	printf ("\nDigite o número da conta 3: ");
	scanf ("%i",&C3.num);
	printf ("\nTipo 1:poupança ou 2:corrente: ");
	scanf ("%i",&C3.tipo);
	printf ("\nSaldo da conta 3: ");
	scanf ("%f",&C3.saldo);
	if(C3.tipo == 1)
	   {quantp = quantp + 1;
	   salpoup = C3.saldo + salpoup;
	   }
	   else{if(C3.tipo == 2)
	   {quantc++;
	   salcor = C3.saldo + salcor;
	   }
	   else {printf ("Tipo inválido!");
	   }
      }
	if (C3.saldo > maiors)
      {maiors = C3.saldo;
	 }
	 if (C3.saldo < menors)
	 {menors = C3.saldo;
	 }
	 
	printf ("\nNúmeros: %i | %i | %i",C1.num,C2.num,C3.num);
	printf ("\nTipos: %i | %i | %i",C1.tipo,C2.tipo,C3.tipo);
	printf ("\nSaldo: $ %.2f | $ %.2f | $ %.2f",C1.saldo,C2.saldo,C3.saldo);
	
	saldot = C1.saldo + C2.saldo + C3.saldo;
	media = C1.saldo + C2.saldo + C3.saldo/3;
	printf ("\nO saldo total das 3 contas: $ %.2f",saldot);
	printf ("\nA quantidade de contas poupança é de %i",quantp);
	printf ("\nA quantidade de contas corrente é de %i",quantc);
	printf ("\nA media dos saldos é de $ %.2f",media);
	printf ("\nO saldo total da conta poupança é de $ %.2f",salpoup);
	printf ("\nO saldo total da conta corrente é de $ %.2f",salcor);
	printf ("\nO maior saldo é $ %.2f",maiors);
	printf ("\nO menor saldo é de $ %.2f",menors);
}
