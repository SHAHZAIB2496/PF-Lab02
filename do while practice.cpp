#include <stdio.h>
void perfect_fact(int x);
int main()
{
	int num;
	printf("Enter the number : ");
	 scanf("%d",&num);
	perfect_fact(num);
	return 0;
}
void perfect_fact(int x)
{
	int temp,sum=0,digit=0,org;
	temp=x;
	org=x;
	
	while(temp>0)
	{
		digit=temp%10;
		 int fact=1;
		 int i=1;
		 while(i<=digit)
		 {
		 	fact=fact*i;
		 	i++;
		 }
		 sum=sum+fact;
		 temp=temp/10;
	}
	if(org==sum)
	 printf("Strong Number ");
	else
	printf("Not a strong number");
}