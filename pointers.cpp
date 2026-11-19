#include<stdio.h>
int main()
{
	int x=100;
	int *xptr;
	
	xptr = &x;
	
	printf("Before = %d",x);
	*xptr=10000;
	printf("After = %d ",x);
	printf("Value through pointer : %d",*xptr);
	return 0;
}