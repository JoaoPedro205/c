#include <stdio.h>
#include <locale.h>
int max(int n,int m[5])
{
	if(n == 1)
	return m[0];
	else{
	int x;
	x = max(n - 1, m);
		if(x > m[n-1])
	    return x;
	else
	return m[n-1];
}
}
main()
{
	setlocale(LC_ALL,"Portuguese");
	int v[5],i,maior;
	
	for(i=0;i<5;i++)
	{
		printf("\nDigite um número:");
		scanf("%i",&v[i]);
	}
	maior =max(5,v);
	printf("\nO maior número será: %i",maior);
}

