#include<stdio.h>
void prime(int a);
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	prime(num);
	return 0;
}
void prime(int a)
{
	int i=2,count=0;
	if(a<2)
	{
		printf("not prime");
	}
	else
	{
	while(i<a)
	{
		if(a%i==0)
		 {
		 	count++;
		 }
		 i++;
	}
	if(count==0)
	 printf("Prime");
	else
	 printf("Not prime");
    }
}