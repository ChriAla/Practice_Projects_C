#include <stdio.h>

main()
{
	int i,j,N;
	N=10;
	
	i=0;
	do
		{
			j=i;
			do
			{
				printf("X");
				j++;
			}while(j<=N);
		i++;
		printf("\n");
		}while(i<=N);
		
	}

