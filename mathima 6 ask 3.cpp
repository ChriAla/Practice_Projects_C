#include <stdio.h>

int isprime(int n);

main()
{
	int start,finish,i;
	do
	{
		printf("Dwse thn arxh:");
		scanf("%d",&start);
		if (start<=0)
		printf("lathos ,prepei > 0");
	}while(start<=0);
	
	do{	
		printf("Dwse to telos:");
		scanf("%d",&finish);
		if (finish<=0)
		printf("lathos ,prepei >=0");
		if(start>finish)
		printf("lathos ,prepei start<finish");
	}while(finish<=0);
	
	for(i=start; i<finish; i++)
	{
	if (isprime(i)==1)
		printf("to %d einai prwtos\n",i);
}
}


int isprime(int n)
{
	int i;
	int check;
	
	check=1;//o arithmos einai prwtos
	for(i=2; i<=n-1; i++)
		if(n%i==0)
			check=0;//o arithmos den einai prwtos 
	
	if(check==1)
		return 1;
	else
		return 0;
}
