#include <stdio.h>
#include <stdlib.h>

main()
{
	int **p;
	int M,N,i;
	
	printf("dwse M:\n");
	scanf("%d",&M);
	printf("\nDwse N:\n");
	scanf("%d",&N);
	p=malloc(sizeof(int*)*M);
	  if(!p)
	  {
	  	printf("Den desmeythke ");
	  	exit(0);
	  }
		for(i=0; i<M; i++)
		{
			p[i]=malloc(sizeof(int)*N);
			  if(!p[i])
	            {
	  	          printf("Den desmeythke ");
	  	          exit(0);
	            }
		}
	printf("to megethos se bytes einai:%d",(M*N*sizeof(int))+M*sizeof(int*)+sizeof(int**));
	
	for(i=0; i<M; i++)
		free(p[i]);
	free(p);
}
