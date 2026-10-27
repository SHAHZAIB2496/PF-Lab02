#include<stdio.h>
#include<math.h>

void armstrong_num(int x);
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	armstrong_num(num);
}
void armstrong_num(int x)
{
	int digit=0,sum=0,temp,org ,count=0;
	org=x;
	temp=x;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	temp=x;
	while(temp>0)
	{
		digit=temp%10;
		sum=sum+(int)pow(digit,count);
		temp=temp/10;
	}
	if(sum==org)
	 printf("Armstrong Number");
	else
	 printf("Not an armstrong number");
}