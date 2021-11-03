#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vendedor[22]={0}, numvend=0, i, venta=0, dia, mayorventa;
	printf("ingrese el numero de vendedores (20 o menos): ");
	scanf("%d",&numvend);
		for (i=1;i<=numvend;i++)
		{
			printf("vendedor %d:\n",i);
			for (dia=1;dia<=15;dia++)
			{
				printf("ingrese la cantidad de unidades vendidas el dia %d: ",dia);
				scanf("%d",&venta);
				vendedor[i]=vendedor[i]+venta;					//vendedor[i] es el numero de ventas del vendedor
			}
			printf("total de ventas de vendedor %d: %d",i,vendedor[i]);
			printf("\n\n");
			vendedor[21]=vendedor[21]+vendedor[i];				//vendedor[21] es el total de ventas
			
			if (vendedor[0]<vendedor[i])						//vendedor[0] es el mayor numero de ventas, y mayorventa indica cual vendedor es
				{
					vendedor[0]=vendedor[i];
					mayorventa=i;
				}
		}
	printf("el total de ventas es %d \n",vendedor[21]);
	printf("el vendedor con mas ventas es el vendedor %d, con %d ventas",mayorventa,vendedor[0]);
}
