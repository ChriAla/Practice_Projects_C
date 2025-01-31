#include <stdio.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

main()
{
	printf("%d",is_even(4));
	printf("\n%d",is_odd(3));
}

int is_even(int n)
{
	if (n%2==0)
	return 1;
	else 
	return 0;
}

int is_odd(int n)
{
	if (n%2==1)
	return 1;
	else 
	return 0;
}
