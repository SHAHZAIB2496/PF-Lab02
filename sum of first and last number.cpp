#include<stdio.h>
#include<math.h>
void add(int a);
int main()
{ 
      int num;
    printf("Enter the number : ");
	 scanf("%d",&num);
	 add(num);
	 return 0; 
}
void add(int a)
{
    int temp = a, count = 0;
    int first = 0, last = 0, divisor = 0, sum = 0;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = a;
    last = temp % 10;
    divisor = (int)pow(10, count - 1);
    first = temp / divisor;
    sum = first + last;
    printf("The sum = %d", sum);
}