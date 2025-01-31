#include <stdio.h>

int get_integer(int start,int finish);

main()
{
	int a,b,n,r;
	printf("Dwse to a.");
	a=get_integer(1,10);
	printf("Dwse to b.");
	b=get_integer(1,10);
	printf("Dwse to n.");
	n=get_integer(2,5);
	
	r=n*(a-b);
	printf("n*(a-b)=%d",r);	
}


int get_integer(int start, int finish)
{
	int x;
	
	do {
		printf("Dwse mia timh anamesa sta %d kai %d: ",start , finish );
		scanf("%d",&x);
		
	}while(x<start || x>finish);
			return x;

}
