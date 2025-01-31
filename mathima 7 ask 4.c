#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main()
{	
	int hidden;
	int x;
	
	srand(time(NULL));
	hidden=1+rand()%100;
	printf("Mantepse ton arithmo\n");
	
	do{
	
	scanf("%d",&x);
	
	
	
	if(x==hidden)
	{
		printf("\nCONGRATS");
	}else 
	if(x<hidden)
	{
		printf("Dwse megalytero  arithmo\n");
	}else
	if(x>hidden)
	{
		printf("Dwse mikrotero arithmo\n");
	}
	}
	while(x<hidden || x>hidden);

}
