#include<stdio.h>
void show_menu()
{
    printf("\n----- MINI MATH TOOLKIT -----\n");
    printf("1. Power\n");
    printf("2. Factorial\n");
    printf("3. GCD and LCM\n");
    printf("4. Exit\n");
}
int read_non_negative()
{
    int n;
    do
    {
        printf("Enter a non-negative number: ");
        scanf("%d",&n);
        if(n<0)
        {
            printf("Number cannot be negative.\n");
        }

    } 
	while(n<0);
    return n;
}
void print_line(int length)
{
    int i;
    for(i = 1; i <= length; i++)
    {
        printf("-");
    }
    printf("\n");
}
long power(int base, int exp)
{
    long result=1;
    int i;
    for(i = 1; i <= exp; i++)
    {
        result=result*base;
    }
    return result;
}
long factorial(int n)
{
    long fact=1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int gcd(int a, int b)
{
    int i,result=1;

    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            result=i;
        }
    }
    return result;
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int choice, a, b;
    do
    {
        show_menu();
        printf("Choice: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            a=read_non_negative();
            b=read_non_negative();
            print_line(20);
            printf("%d^%d=%ld\n",a,b,power(a,b));
            print_line(20);
        }
        else if(choice==2)
        {
            a=read_non_negative();
            print_line(20);
            printf("%d! = %ld\n",a,factorial(a));
            print_line(20);
        }
        else if(choice==3)
        {
            a=read_non_negative();
            b=read_non_negative();
            print_line(20);
            printf("GCD = %d\n",gcd(a,b));
            printf("LCM = %d\n",lcm(a,b));
            print_line(20);
        }
        else if(choice==4)
        {
            printf("Goodbye!\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    } 
	while(choice!=4);
    return 0;
}