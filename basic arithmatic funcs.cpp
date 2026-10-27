#include<stdio.h>
void mul(int , int );
void dif(int , int );
void div(float,float);

void  sum(int a,int b)
{
  printf("Sum=%d",a+b);
}
void mul(int c, int d)
{
	printf("Product=%d",c*d);
}
void dif(int e,int f)
{
	printf("Difference=%d",e-f);
}
void div(float g,float j)
{
	printf("Division=%.2f",g/j);
}
int main()
{
	int num1,num2;
	printf("Enter the number:");
	scanf("%d",&num1);
	printf("Enter Second number:");
	scanf("%d",&num2);
	sum(num1,num2);
	printf("\n");
	dif(num1,num2);
	printf("\n");
	mul(num1,num2);
	printf("\n");
	div((float)num1,(float)num2);
	return 0;
}