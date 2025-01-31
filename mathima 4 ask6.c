#include <stdio.h>

main()
{
	int zaria1,zaria2,zaria3,zaria4,x,y;
	printf("Dwse ton to prwto zarh toy prwtoy paixth:");
	scanf("%d",&zaria1);
	
	printf("Dwse ton to deytero zarh toy prwtoy paixth:");
	scanf("%d",&zaria2);
	
	printf("Dwse ton to prwto zarh toy deyteroy paixth:");
	scanf("%d",&zaria3);
	
	printf("Dwse ton to deytero zarh toy deyteroy paixth:");
	scanf("%d",&zaria4);
	
	x=zaria1+zaria2;
	y=zaria3+zaria4;
	
	if (x>y)
		printf("nikhths o A");
	else if (y>x)
		printf("nikhths o B");
	else 
	printf ("isopalia");
}
