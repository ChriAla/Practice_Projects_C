#include <stdio.h>

int fibonacci(int n);
main()
{
	int x,y;
	printf ("Dwse ton n-osto fibonacci poy psaxneis:");
	scanf("%d",&x);
	
	y=fibonacci(x);
	printf ("o %d-ostos arithmos fibonacci einai :%d",x,y);
	
}


int fibonacci(int n)
{
	if (n==1 || n==2)
		return 1;
	else 
		return fibonacci(n-1)+fibonacci(n-2);
}
