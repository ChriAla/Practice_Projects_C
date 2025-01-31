#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

void init_array(int *pinakas,int n, int a,int b);
void print_array(int *pinakas, int n);
int max_array(int *pinakas, int n);

main ()
{
	int array[N],p;
	init_array(array,N,10,20);
	print_array(array,N);
	p=max_array(array,N);
	printf("\n o max einai:%d",p);
}

void init_array(int *pinakas,int n, int a,int b)
{
	int i;
	srand(time(NULL));
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}

void print_array(int *pinakas, int n)
{
	int i;
	printf("[");
	for(i=0; i<n-1; i++)
		printf("%d, ",pinakas[i]);
		printf("%d]",pinakas[n-1]);
}
int max_array(int *pinakas, int n)
{
	int i,max;
	max=pinakas[0];
	for (i=0; i<n; i++)
	{
		if (pinakas[i]>max)
			max=pinakas[i];	
	}
	return max;
}
