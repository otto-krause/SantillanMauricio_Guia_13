#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, cantnum, lista[31]={0}, iasc=0, idesc=0;
	printf("ingrese la cantidad de numeros de la lista (30 o menos): ");
	scanf("%d",&cantnum);
	for (i=1;i<=cantnum;i++)
	{
		printf("numero %d: ",i);
		scanf("%d",&lista[i]);
		if ((lista[i]>lista[i-1]) && (lista[i-1]!=0))		//i-1 es la cantidad de numeros introducidos. si lista[i-1] es 0 entonces solo un numero ha sido introducido
		{
			iasc=iasc+1;						//contador de numeros introducidos en forma ascendente
		}
		if ((lista[i]<lista[i-1]) && (lista[i-1]!=0))
		{
			idesc=idesc+1;						//contador de numeros introducidos en forma descendente
		}
	}
	if (iasc==(i-2))
	{
		printf("los numeros fueron introducidos de forma ascendente\n");
	}
	else
		{
			if(idesc==(i-2))
			{
				printf("los numeros fueron introducidos de forma descendente\n");
			}
			else
				{
					printf("los numeros fueron introducidos desordenadamente\n");
				}
		}
	lista[0]=lista[1]+lista[i-1];
	printf("la suma del primer y ultimo numero es %d",lista[0]);
}
