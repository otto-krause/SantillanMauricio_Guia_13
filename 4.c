#include<stdio.h>
#include<stdlib.h>

int main()
{
	int alumnos[31]={0}, i;
	for (i=1;i<=30;i++)
	{
		printf("ingrese la nota del alumno numero %d\n",i);
		scanf("%d",&alumnos[i]);
		alumnos[0]=alumnos[0]+alumnos[i];		//alumnos[0] es el total
	}
	alumnos[0]=alumnos[0]/(i-1);				//i-1 es igual a la cantidad de alumnos, y alumnos[0] se vuelve el promedio
	printf("el promedio de las notas es %d",alumnos[0]);
}
