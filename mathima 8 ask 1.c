#include <stdio.h>
#include <math.h>

int rizes (float a, float b, float c, float *x1, float *x2);

main ()
{

	float a,b,c,riza1,riza2;
	int plithos;
	
	printf("dwse thn a:");
	scanf("%f",&a);
	printf("\ndwse thn b:");
	scanf("%f",&b);
	printf("\ndwse thn c:");
	scanf("%f",&c);
	
	printf("\n");
	
	plithos = rizes(a,b,c,&riza1,&riza2);
	
	printf("yparxoun %d rizes,",plithos);
	if(plithos==1)
		printf("\nkai ayth einai h %f",riza1);
	if(plithos==2)
		printf("\nkai aytes einai oi %f,%f",riza1,riza2);
	return 0;
}


int rizes (float a, float b, float c, float *x1, float *x2){
	
	float D;
	
	D=b*b-4*a*c;
	
	if(D==0){
		*x1=-b/2*a;
		return 1;
	}
	else if(D<0)
		return 0;
	else if(D>0){
		*x1=(-b+sqrt(D))/2;
		*x2=(-b-sqrt(D))/2;
		return 2;
	}
		
}
