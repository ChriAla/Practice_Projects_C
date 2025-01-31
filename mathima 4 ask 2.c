#include <stdio.h>

main()
{
	int x;
	int y;
	printf("Dwse ton prwto aritmo:\n");
	scanf("%d",&x);
	printf("Dwse ton deytero arithmo:\n");
	scanf("%d",&y);
	
	if (x<y)
	{
		printf("%d<%d",x,y);
	}
	else
		if(x>y)
		{
			printf("%d>%d",x,y);
		}
		else 
		{
			printf("%d=%d", x,y);
		}
}
