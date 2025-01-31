#include <stdio.h>

#define N 5

main()
{
	int pinakas[N];
	int i,prod;
	
	for(i=1; i<=N; i++){
	
	do 
	{	
			
			
		printf("\nDwse ton %d-o arithmo:",i);
		scanf("%d",&pinakas[i]);
	}while(pinakas[i]<1 || pinakas[i]>8 );

}


	prod=1;
	for(i=1; i<=N; i++)
	prod=prod*pinakas[i];
	
	printf("to g einai:%d",prod);
}
