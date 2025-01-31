#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
	int hidden,x;
	
	srand(time(NULL));
	
	hidden=1+rand()%100;
	
	
	
	do{
	printf("\nmantepse ton arithmo:");
	scanf("%d",&x);
	if(hidden==x)
		printf("GG");
	else if (hidden>x)
		printf("plhktrologhse megalytero arithmo");
	else 
		printf("plhktrologhse mikrotero arithmo");
		
}while(x!=hidden);
}
