#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

void init_array(int *pinakas,int n,int a, int b);
void print_array(int *pinakas , int n);

main(){
	
	int array[N];
	
	init_array(array,N,10,20);
	print_array(array,N);
	
	
	
	
	return 0;
}

void init_array(int *pinakas,int n,int a, int b){
	int i;
	srand(time(NULL));
	for (i=0; i<n; i++)
		pinakas [i]=a+rand()%(b-a+1);
}

void print_array(int *pinakas , int n){
	int i;
	for (i=0; i<n-1; i++)
		printf("%d ,",pinakas[i]);
	printf("%d",pinakas[i+1]);
	
}
