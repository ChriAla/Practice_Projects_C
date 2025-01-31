#include <stdio.h>

main()
{
	int x,y,z ;
	int w;
	
	printf ("dwse prwto akeraio: ");
	scanf ("%d", &x);
	printf("dwse deytero akeraio: ");
	scanf ("%d", &y);
	printf ("dwse ston telesti \n 0 gia +\n 1 gia -\n 2 gia *\n 3 gia / \n 4 gia %%\n");
	printf ("\nepilogh ?\n");
	scanf("%d",&w);
	
	if (w==0)
	{	
		z=x+y;
		printf("%d+%d=%d",x,y,z);		
	}
	
	else if  (w==1)
	{
		z=x-y;
		printf("%d-%d=%d",x,y,z);
	}
	
	else if (w==2)
	{
		z=x*y;
		printf("%d*%d=%d",x,y,z);
	}
	
	else if (w==3)
	{
		z=x/y;
		printf("%d/%d=%d",x,y,z);
	}
	
	else if (w==4)
	{
		z=x%y;
		printf("%d%%%d=%d",x,y,z);
	}
	
}



