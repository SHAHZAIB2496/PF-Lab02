#include<stdio.h>
void table(int x);
int main()
{
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	table(num);
	return 0;
}
void table(int x)
{
	for(int i=1;i<=10;i++)
	 printf("%d X %d =%d\n",x,i,x*i);
}