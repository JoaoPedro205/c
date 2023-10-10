#include <stdio.h>
zeravet (float v[10],int quant)
{
	int i;
	for(i=0;i<quant;i++)
	v[i]=0;
}
main()
{
	int i;
	float vet[10];
	zeravet(vet,10);
	for(i=0;i<10;i++)
	printf ("%f",vet[i]);
}
