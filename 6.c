#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sueldo[22]={0}, i;
	for (i=1;i<=20;i++)
	{
		printf("ingrese el sueldo de la persona %d: ",i);
		scanf("%d",&sueldo[i]);
		if (sueldo[i]>2000)
		{
			sueldo[21]=sueldo[21]+1;				//sueldo[21] es la cantidad de sueldos mayores a 2000
		}
		else
		{
			if (sueldo[i]<2000)
			{
				sueldo[0]=sueldo[0]+1;				//sueldo[0] es la cantidad de sueldos menores a 2000
			}
		}
	}
	printf("cantidad de sueldos mayores a 2000: %d \n",sueldo[21]);
	printf("cantidad de sueldos menores a 2000: %d \n",sueldo[0]);
}
