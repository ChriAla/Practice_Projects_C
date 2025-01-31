#include <stdio.h>

main()
{
	int x,y,z,w;
	printf("Eisagete plithos deyterolepton :");
	scanf("%d",&x);
	
	
		y=x/3600;
		z=(x%3600)/60;
		w=(x%3600)%60;
	
	printf("\nwres:%d\nlepta:%d\ndeyterolepta:%d",y,z,w);
}
