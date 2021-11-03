#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, nota [16];
	for (i=1;i<=15;i++)
	{
		printf("ingrese la nota del alumno %d: ",i);
		scanf("%d",&nota[i]);
	}
	for (i=1;i<=15;i++)
	{
		if (nota[i]>8)
		{
			printf("el alumno %d tiene una nota mayor a 8, siendo %d \n",i,nota[i]);
		}
	}
}
