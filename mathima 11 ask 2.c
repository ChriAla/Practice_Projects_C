#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas,int n);
int max_array(int *pinakas,int n);

main()
{
	int array[SIZE],N;
	int choice,a,b;
	
	while(1)
	{
		printf("\n\nmenoy epilogwn:");
		printf("\n-------------------");
		printf("\n1-eisagwgh toy megethoys toy pinaka");
		printf("\n2-arikopoihsh pinaka");
		printf("\n3-ypologismos toy megistoy");
		printf("\n4-ektypwsh toy pinaka");
		printf("\n5-eksodos\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Dwse to megethos toy pinaka:");
				scanf("%d",&N);
			break;
			
			case 2:
				printf("Dwse thn arcxh toy diasthmatos tvn tixewn:");
				scanf("%d",&a);
				printf("Dwse to peras toy diasthmatos twn tyxewn:");
				scanf("%d",&b);
				init_array(array,N,a,b);
			break;
			
			case 3:
				printf("O megistos einia:%d",max_array(array,N));
			break;
			
			case 4:
				print_array(array,N);	
			break;
			
			case 5:
				printf("bye bye");
			break;
			exit(0);
			default:
				printf("Lathos eisodos");	
		}	
		
	}
	
}



void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for(i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}
void print_array(int *pinakas,int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n; i++)
	 printf("%d, ",pinakas[i]);
	 printf("%d]",pinakas[n-1]);
	 
}
int max_array(int *pinakas,int n)
{
	int i,max;
	max=pinakas[0];
	
	for (i=1; i<n; i++)
	{
		if(pinakas[i]>max)
			max=pinakas[i];
			
	}
	
	return max;
}
