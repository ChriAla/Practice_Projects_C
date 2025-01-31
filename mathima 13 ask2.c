#include <stdio.h>
#include <math.h>

#define SIZE 80

struct person{
	char onoma[SIZE];
	char diefthinsi[SIZE];
	char arithmos[SIZE];
	char nomos[SIZE];
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD pp);

main(){
	RECORD ppp;
	read_record(&ppp);
	print_record(ppp);
	
	
	return 0;
}

void read_record(RECORD *p){
	printf("dwse onoma :");
	scanf("%s",p->onoma);
	printf("dwse diefthinsi :");
	scanf("%s",p->diefthinsi);
	printf("dwse arithmo :");
	scanf("%s",p->arithmos);
	printf("dwse nomo :");
	scanf("%s",p->nomos);
}
void print_record(RECORD pp){
	printf("to onoma toy atomoy einai :%s\n",pp.onoma);
	printf("h diefthinsi toy atomoy einai :%s\n",pp.diefthinsi);
	printf("o arithmos toy atomoy einai :%s\n",pp.arithmos);
	printf("o nomos toy atomoy einai :%s\n",pp.nomos);	
	
}
