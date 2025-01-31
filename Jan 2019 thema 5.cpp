#include <stdio.h>


main ()
{
	int x,y;
	printf("Dwse ton prto akeraio arithmo :");
	scanf("%d",&x);
	printf("Dwse ton deytero akeraio arithmo :");
	scanf("%d",&y);
	
	if (x<0)
		x=-x;
	else 
		x=x;
	
	if (y<0)
		y=-y;
	else
		y=y;
		
	printf("%d %d",x,y);
	
}
