#include <stdio.h>

int mkd(int a,int b);

main()
{
	int a,b,z;
	printf("Dwse ton prwto arithmo :");
	scanf("%d",&a);
	printf ("Dwse ton deytero arithmo :");
	scanf("%d",&b);
	z=mkd(a,b);
	printf("o mkd twn %d kai %d einai :%d",a,b,z);
}

int mkd(int a,int b)
{
	if (a==b)
		return a;
	if (a<b)
		return mkd(a,b-a);
	else 
		return mkd(a-b,a);
}
