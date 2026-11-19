#include <stdio.h>
#include <math.h>
int solve_quadratic(double a,double b,double c,double *r1,double *r2)
{
    double d;
    d=b*b-4*a*c;
    if(d>0)
    {
        *r1=(-b+sqrt(d))/(2*a);
        *r2=(-b-sqrt(d))/(2*a);
        return 2;
    }
    else if (d==0)
    {
        *r1=-b/(2*a);
        *r2=*r1;
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    double a, b, c;
    double r1, r2;
    int result;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    while (a == 0)
    {
        printf("a cannot be zero. Enter a, b, c: ");
        scanf("%lf %lf %lf",&a,&b,&c);
    }
    result=solve_quadratic(a,b,c,&r1,&r2);
    if(result==2)
    {
        printf("Two roots: %.2f and %.2f\n",r1,r2);
    }
    else if (result==1)
    {
        printf("One root: %.2f\n",r1);
    }
    else
    {
        printf("No real roots.\n");
    }
    return 0;
}