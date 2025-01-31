#include <stdio.h>

#define N 10

main()
{
	int i,j;
	i=0;
	
	do
	{	
		j=i;

		do
		{	
			printf("X");
			j++;
		}while(j<=N);
		printf("\n");	
		i++;	
	}while(i<=N);
} 
