#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 8
main()
{
	int pin[M][N];
	int i,j;
	
	srand(time(NULL));
	
	for(i=0; i<M; i++)
		for(j=0; j<N; j++)
			pin[i][j]=rand()%201;
			
	for(i=0; i<M; i++)
	{
		for(j=0; j<N-1; j++)
			printf("%d \t",pin[i][j]);
		printf("%d",pin[i][N-1]);
		printf("\n");
}
}
