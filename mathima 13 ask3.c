#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 80

struct person{
	char *onoma;
	char *diefthinsi;
	char *arithmos;
	char *nomos;
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD pp);
void dynamic(RECORD *p4);
void free_record(RECORD p5);

main(){
	RECORD ppp;
	dynamic(&ppp);
	read_record(&ppp);
	print_record(ppp);
	free_record(ppp);
	
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
void dynamic(RECORD *p4){
	p4->onoma=malloc(sizeof(char)*SIZE);
	if(!p4->onoma){
		printf("adianmai desmeysh mnhmhs");
		exit(0);
	}
	p4->diefthinsi=malloc(sizeof(char)*SIZE);
	if(!p4->diefthinsi){
		printf("adianmai desmeysh mnhmhs");
		exit(0);
	}
	p4->arithmos=malloc(sizeof(char)*SIZE);
	if(!p4->arithmos){
		printf("adianmai desmeysh mnhmhs");
		exit(0);
	}
	p4->nomos=malloc(sizeof(char)*SIZE);
	if(!p4->nomos){
		printf("adianmai desmeysh mnhmhs");
		exit(0);
	}
}
void free_record(RECORD p5){
	free (p5.onoma);
	free(p5.diefthinsi);
	free(p5.arithmos);
	free(p5.nomos);	
}
