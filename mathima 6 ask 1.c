#include <stdio.h>

int get_integer(int start,int finish);

main()
{	
	printf("%d",get_integer(50,100));
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
