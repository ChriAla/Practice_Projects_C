#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int rizes (float a,float b, float c, float *x1, float *x2);

main ()
{
	float a,b,c,riza1,riza2;
	float plithos;
	printf("Dwse thn a timh: ");
	scanf("%f",&a);
	
	printf("Dwse thn b timh: ");
	scanf("%f",&b);
	
	printf("Dwse thn c timh: ");
	scanf("%f",&c);
	
	plithos=rizes(a,b,c,&riza1,&riza2);
	
	if (plithos==0)
		printf("den yparxoyn lyseis");
	if (plithos==1)
	{
		printf("i dipli lysh einai %f",riza1);	
	}
	if (plithos==2)
	{
		printf("x1=%f kai x2=%f",riza1,riza2);
	}
	
}

int rizes (float a,float b, float c, float *x1, float *x2)
{
	float D;
	D=b*b-4*a*c;
	
	
	if (D<0)
	
		return 0;
		else
	if (D==0)
	{
		*x1=(-b)/(2*a);
		*x1=*x2;
		return 1;
	}	else
	if (D>0)
	{
		*x1=(-b+sqrt(D))/(2*a);
		*x2=(-b-sqrt(D))/(2*a);
		return 2;
	}
	
}
