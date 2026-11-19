#include<stdio.h>
#include<math.h>

int main()
{
    int  a,b,c,area;
    printf("Enter side a:");
    scanf("%lf",&a);
    printf("Enter side b:"); 
    scanf("%lf",&b);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("Hypotenuse: %.2lf\n",c);
    printf("Rounded up: %.0lf\n",ceil(c));
    printf("Rounded down: %.0lf\n",floor(c));
    area=(a*b)/2;
    printf("Area: %.2lf\n",area);
return 0;
}