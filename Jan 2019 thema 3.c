#include <stdio.h>

main()
{
	int a=6;
	int arr[3]={4,6,8};
	int *f;
	float b=a+arr[1];
	unsigned char c=9;
	printf("%d %f %d\n",a,b,c);
	f=arr;
	f++;
	a=*f>b;
	b=(arr[2]==(c-1))*a+!a;
	c=arr[0]>3?(int)b|1:a&1;
	printf("%d %f %d\n",a,b,c);
	
}
