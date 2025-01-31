#include <stdio.h>
#include <time.h>

#define SIZE1 100
#define SIZE2 200

main()
{
	int pinakas[SIZE1][SIZE2];
	int i,j,M,N;
	
	
	
	do	
	{
		printf("Dwse to plithos twn grammwn:");
		scanf("%d",&M);
	}while(M<10 & M>100);	

	do	
	{
		printf("Dwse to plithos twn sthlwn:");
		scanf("%d",&N);
	}while(N<20 & N>100);
	
	srand(time(NULL));	

	for(i=0; i<M; i++)
		for(j=0; j<N; j++)
			pinakas[i][j]=rand()%201;
			
			
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
			printf("%d\t",pinakas[i][j]);	
			printf("\n");
}
}
