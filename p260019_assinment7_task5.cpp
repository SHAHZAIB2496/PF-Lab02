#include <stdio.h>
int is_prime(int n)
{
    int i;
    if(n<=1)
        return 0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int is_perfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int reverse_number(int n)
{
    int reverse=0,digit;
    while(n>0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    return reverse;
}
int is_palindrome(int n)
{
    if(n==reverse_number(n))
        return 1;
    else
        return 0;
}
int digit_sum(int n)
{
    int sum=0;
	while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}
void report(int n)
{
    int i;
    if(is_prime(n))
        printf("Prime: Yes\n");
    else
        printf("Prime: No\n");

    if(is_perfect(n))
        printf("Perfect: Yes\n");
    else
        printf("Perfect: No\n");
    printf("Reverse: %d\n", reverse_number(n));
    if(is_palindrome(n))
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");
    printf("Sum of digits: %d\n", digit_sum(n));
    printf("Primes from 1 to %d: ", n);
    for(i=1;i<=n;i++)
    {
        if(is_prime(i)==0)
            continue;
		printf("%d",i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n); 
	report(n);
    return 0;
}
