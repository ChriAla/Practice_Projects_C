#include <stdio.h>


main()
{
	int x,y,z;
	printf("Dwse ton 1o arithmo:");
	scanf("%d",&x);
	printf("Dwse ton 2o arothmo:");
	scanf("%d",&y);
	printf("Dwse ton 3o airthmo:");
	scanf("%d",&z);
	
	if (x>y&y>z)
	{
		printf("H diataksi einai: %d,%d,%d",x,y,z);
	}
		else 
			if (x>z&z>y)
			{
				printf("H diataksi einai %d,%d,%d",x,z,y);
			}
	
	else
		if (y>x&x>z)
		{
			printf("H diataksi einai : %d,%d,%d ",y,x,z);
			
		}
			else
				if (y>z&z>x)
				{
					printf("H diataksi einai: %d,%d,%d,",y,z,x);
				}
		
		else
			if(z>x&x>y)
			{
				printf("H diataksi einai : %d,%d,%d",z,x,y);
			}
				else 
					if(z>y&y>x)
					{
						printf("H diataksi einai: %d,%d,%d ",z,y,x);
					}
}
