#include <stdio.h>
/*int main()
{
   int count=0,i=1,num,div,org,rev=0,digit;
   printf("Enter number:");
    scanf("%d",&num);
    org=num;
    while(num>0)
    {
    	digit=num%10;
    	rev=rev*10+digit;
    	num=num/10;
	}
    if(rev==org)
     printf("It is palindrome");
    else
     printf("It is not palindrome");
}
nput n and display all numbers from 1 to n that are divisible by both 3 and 5. Also print their total count.*/
int main()
{
	int num,sum=0;
	printf("Enter Number");
	scanf("%d",&num);
	int i=1;
	while(i<num)
	{
		if(num%i/2==0)
		{
		printf("%d ",i);
		 sum=sum+i;
		 } 
		i++;
	}
	printf("=%d",sum);
	if(num==sum)
	 printf("\n perfect");
}