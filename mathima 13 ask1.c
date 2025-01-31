#include <stdio.h>
#include <math.h>

struct point{
	float x;
	float y;
};
void read_point(struct point *p);
float eykleidia(struct point A, struct point B);
main(){
	
	struct point a;
	struct point b;
	read_point(&a);
	read_point(&b);
	printf("::::::::%.3f",eykleidia (a,b));
	
	
	
	return 0;
}

void read_point(struct point *p){
	printf("dwse syntetagmenh x:");
	scanf("%f",&p->x);
	printf("dwse syntetagmenh y:");
	scanf("%f",&p->y);
	
}
float eykleidia(struct point A, struct point B){
	return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
