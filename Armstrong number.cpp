#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit,org,temp,sum=0,count=0;
	
	printf("Enter the number:");
	
	 scanf("%d",&num);
	 
	temp=num;
	
	org=num;
	
	while(temp>0)
	{
		count++;
		temp=temp/10;
	}
	
	temp=num;
	while(temp>0)
	
	{
		digit=temp%10;
		sum=sum+(int)pow(digit,count);
		temp=temp/10;
	}
	
	if(org==sum)
	 printf("ARMSTRONG");
	else
	 printf("NOT ARMSTRONG");
}