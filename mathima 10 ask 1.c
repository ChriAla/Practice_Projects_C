#include <stdio.h>

#define SIZE 1000

int mystrlen(char *s);


main()
{
	char str[SIZE];
	printf("Dwse thn symbolosira:");
	gets(str);
	
	printf ("To mhkos ths simboloshras einai :%d",mystrlen(str));
}


int mystrlen(char *s)
{
	int cnt;
	cnt=0;
	
	while(s[cnt]!='\0')
	{
		cnt++;
	}	
	return cnt;
}
