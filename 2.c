#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cont, num, vector[7]={0}, total=0;
	printf("ingrese 5 numeros\n");
	for (cont=1;cont<6;cont++)
	{
		printf("numero %d:",cont);
		scanf("%d",&num);
		vector[cont]=num;
		if(vector[0]<num)		//vector[0] es el mayor
		{
			vector[0]=num;
		}
		vector[6]=vector[6]+vector[cont];		//vector[6] es el total
	}
	
	printf("los numeros son:\n");
	printf("numero 1: %d \n",vector[1]);
	printf("numero 2: %d \n",vector[2]);
	printf("numero 3: %d \n",vector[3]);
	printf("numero 4: %d \n",vector[4]);
	printf("numero 5: %d \n",vector[5]);
	
	printf("mayor numero es %d \n",vector[0]);
	printf("el total es %d \n",vector[6]);
	vector[6]=vector[6]/5;					//vector 6 pasa a ser el promedio
	printf("el promedio es %d \n",vector[6]);
}
