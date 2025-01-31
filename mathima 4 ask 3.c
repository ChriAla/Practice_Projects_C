#include <stdio.h>

main()
{
	int x,y,z;
	printf ("Dwse ton prwto arithmo:");
	scanf("%d",&x);
	printf("Dwse ton deytero arithmo:");
	scanf("%d",&y);
	printf("Dwse ton trito arithmo:");
	scanf("%d",&z);
	
	if (x<y&z<y)
	{
		printf("o megalyteros arithmos einai %d",y);
	}
	else 
		if(x>y&x>z)
		{
			printf("o megalyteros arithmos einai %d",x);
		}
		else 
			if (z>x&z>y)
			{
				printf("o megalyteros arithmos einai %d",z);
			 } 
			
	
}
