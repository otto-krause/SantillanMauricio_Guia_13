#include<stdio.h>
#include<stdlib.h>

int main()
{
	int nums[12]={0}, cont=1, i=0;
	printf("ingrese dos numeros del 1 al 12 \n");
	scanf("%d",&nums[0]);							//nums[0] y nums[1] son los numeros introducidos, de nums[2] a nums[12] son los valores intermedios almacenados
	scanf("%d",&nums[1]);
	if (nums[0]<nums[1])
	{
		for(i=nums[0]+1;i<nums[1];i++)			//si el primer numero introducido es el menor, la lista es ascendiente
		{
			nums[1+cont]=i;
			cont++;
		}
	}
	else
		{
			if (nums[1]<nums[0])				//si el primer numero introducido es el mayor, la lista es descendiente
			{
				for(i=nums[0]-1;i>nums[1];i--)
				{
					nums[1+cont]=i;
					cont++;
				}
			}
			else
				{
					printf("los numeros son iguales\n");
				}
		}
	printf("numeros intermedios: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d",nums[2], nums[3], nums[4], nums[5], nums[6], nums[7], nums[8], nums[9], nums[10], nums[11]);
}
