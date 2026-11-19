#include <stdio.h>
int power(int a,int b)
{
 int power=1,i;
 for(i=1;i<=b;i++)
{
  power=power*a;
}  
 return (power);
}
int main()
{
	int pow,num,value;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Enter the power : ");
	scanf("%d",&pow);
	value=power(num,pow);
	printf("Value=%d",value);
	return 0;
}
