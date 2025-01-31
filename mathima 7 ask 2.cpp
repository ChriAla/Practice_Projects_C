#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE1 100
#define SIZE2 200
main()
{
	int pin[SIZE1][SIZE2];
	int i,j;
	int M,N;
	
	do{
		printf("Dwse ena arithmo apo to 10 ews to 100\n");
		scanf("%d",&M);
	}while(M>100 || M<10);
	
	do{
		printf("Dwse ena arithmo apo to 20 ews to 200\n");
		scanf("%d",&N);
	}while(N>200 || N<20);
	
	
	srand(time(NULL));
	
	for(i=0; i<M; i++)
		for(j=0; j<N; j++)
			pin[i][j]=rand();
			
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
			printf("%d \t",pin[i][j]);
		printf("\n");
}
}
