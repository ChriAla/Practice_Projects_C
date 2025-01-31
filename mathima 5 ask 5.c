#include <stdio.h>

#define N 10

main()
{
	int pinakas[N];
	int i,j,a,sum;
	
	for(i=1; i<=N; i++)
			{
			printf("\ndwse ton %d-o akeraio arithmo:",i);
			scanf("%d",&pinakas[i]);
			}
	sum=0;
	for(i=1; i<=N; i++)
		sum=sum+pinakas[i];
		
		printf("To athri einai %d",sum);

}
