#include <stdio.h>


void print();
void eisagogi_pinaka();

main()
{
	int x,y;
	float z,p;
	
	do 
	{
		printf("Dwse enan arithmo apo 1 ews to 4:");
		scanf("%d",&x);
			}while(x<1 || x>4);

		
		
		if(x==1)
		{
			printf("Dwse mia akeraia metabliti:");
			scanf("%d",&y);
			printf("To tetragwno toy %d einai:%d",y,(y*y));
		}else 
		if (x==2)
		{
			print();
		}else 
		if (x==3)
		{
			printf("Dwse mia pragmatikh metabliti:");
			scanf("%d",&z);
			p=(z/4) ;
			printf("to 1/4 toy %f einai:%.4f",z,p);
		}else 
		if (x==4)
		{
			eisagogi_pinaka();
		}
}


void print()
{
	int i,N;
	printf("Dwse enan akeraio arithmo:");
	scanf("%d",&N);
	
	for (i=0; i<N; i++)
		printf("\nKalimera!");
}

void eisagogi_pinaka()
{
	double pinakas[5];
	int i;
	double sum,mo;
	for (i=0; i<5; i++)
	{
		printf("Dwse ton %d-o pragmatiko arithmo:", i+1);
		scanf("%lf",&pinakas[i]);
	}
		sum=0.0;
		for (i=0; i<5; i++)
			sum+=pinakas[i];
		mo=sum/5;
		printf(" o mo einai %.3f",mo);
	
	
}

