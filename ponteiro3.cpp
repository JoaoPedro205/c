#include <stdio.h>
zeravet2(float *v,int quant)
{
	int i;
	for (i=0;i<quant;i++)
	v[i]=0;
}
main()
{
	int i;
	float vet[10];
	zeravet2(vet,10);
	for(i=0;i<10;i++)
	printf ("%f",vet[i]);
}
