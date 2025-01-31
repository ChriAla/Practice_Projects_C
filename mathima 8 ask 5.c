#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000


void init_array(int *pinakas,int n,int a,int b);
void print_array(int *pinakas,int n);
int max_array(int *pinakas, int n);


main()
{
	int array[SIZE],N;
	int choice,a,b;
	
	choice=1;
	while(choice!=5)
	{
		printf("menoy epilogwn ");
		printf("\n---------------");
		printf("\n1.eisagwgh toy megethoys toy pinaka:");
		printf("\n2.arxikopoihsh toy pinaka");
		printf("\n3.ypologismos toy megistoy");
		printf("\n4.ektypwsh toy pinaka");
		printf("\n5.eksodos");
		printf("\nepilogh\n");
		scanf("%d",&choice);
		
		if (choice==1)
		{
			printf("dwse megethos ston pinaka:");
			scanf("%d",&N);
		}
		else if (choice==2)	
		{
			printf("\nDwse a:");
			scanf("%d",&a);
			printf("\nDwse b:");
			scanf("%d",&b);
			init_array(array,N,a,b);
			
		}
		else if (choice==3)
		{
		
			printf("o megystos einai :%d",max_array(array, N));
		}
		else if (choice==4)
		{
			print_array(array,N);
		}
		else if (choice==5)
		{
			printf("bb");
		}
	}
	

	
}



void init_array(int *pinakas,int n,int a,int b)
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
	for(i=0; i<n-1; i++)
		
		printf("%d\t",pinakas[i]);
		printf("%d]",pinakas[n-1]);
		
}




int max_array(int *pinakas, int n)
{
	int i;
	int max;
	
	max=pinakas[0];
	for(i=1; i<n; i++)
	{
		if(pinakas[i]>max)
			max=pinakas[i];
	}
	return max;
}

