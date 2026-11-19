#include<stdio.h>
void swap(int a,int b);
int main()
{
	int num1,num2;
	printf("Enter first number : "); 
	scanf("%d",&num1);
    printf("Enter second number : "); 
	scanf("%d",&num2);
	swap(num1,num2);
	return 0;	
}
void swap(int a ,int b)
{
	int temp1;
	printf("First number before swapping %d \n",a);
	printf("Second number before swapping %d \n",b);
	temp1=a;
	a=b;
	b=temp1;
	printf("First number after  swapping %d \n",a);
	printf("Second number after  swapping %d \n",b);
}