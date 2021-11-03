#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, secuencia[3]={0};
	printf("ingrese cuantos numeros de la secuencia fibonacci quiere mostrar: ");
	scanf("%d",&num);
	
	secuencia[0]=0;
	secuencia[1]=1;
	printf("%d, ",secuencia[1]);
	for (i=1;i<=num;i++)
	{
		secuencia[2]=secuencia[0]+secuencia[1];
		printf("%d, ",secuencia[2]);
		secuencia[0]=secuencia[1];
		secuencia[1]=secuencia[2];
	}
}
