#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, vector[13]={0};
	for (i=1;i<=10;i++)
	{
		printf("numero %d: ",i);
		scanf("%d",&vector[i]);
		vector[0]=vector[0]+vector[i];			//vector[0] es la suma de los vectores
		if (i==1)
		{
			vector[11]=vector[i];
		}
		else
			{
				vector[11]=vector[11]*vector[i];			//vector[11] es el producto de los vectores
			}
	}
	printf("la suma de los valores es %d \n el producto de los valores es %d \n",vector[0],vector[11]);
	vector[0]=vector[0]/10;
	printf("el promedio de los valores es %d \n",vector[0]);
	for (i=1;i<=10;i++)
	{
		if (vector[i]<vector[0])
		{
			vector[12]++;					//vector[12] es el numero de valores por debajo del promedio
		}
	}
	printf("la cantidad de elementos por debajo del promedio es %d",vector[12]);
}
