#include<stdio.h>
#include<stdlib.h>

int main()
{
	int resistencia[6]={0}, i;
	for (i=1;i<=5;i++)
	{
		printf("ingrese el valor de la resistencia %d: ",i);
		scanf("%d",&resistencia[i]);
		resistencia[0]=resistencia[0]+resistencia[i];		//suma las resistencias
	}
	
	printf("la resistencia 1 es %d \n",resistencia[1]);
	printf("la resistencia 2 es %d \n",resistencia[2]);
	printf("la resistencia 3 es %d \n",resistencia[3]);
	printf("la resistencia 4 es %d \n",resistencia[4]);
	printf("la resistencia 5 es %d \n",resistencia[5]);
	printf("la resistencia total es %d \n",resistencia[0]);
	

}
