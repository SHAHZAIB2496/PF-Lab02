#include <stdio.h>
int read_Units()
{
    int units;
    do
    {
        printf("Enter units consumed:");
        scanf("%d",&units);
    if(units<0)
        {
            printf("Units cannot be negative.\n");
        }

    } while(units<0);
    return units;
}
float calculate_Bill(int units)
{
    float bill;
    if(units<=100)
    {
        bill=units*10;
    }
    else if(units<=300)
    {
        bill=(100*10)+((units-100)*15);
    }
    else
    {
        bill=(100*10)+(200*15)+((units-300)*20);
    }
     if(bill>3000)
    {
        bill=bill+(bill*0.05);
    }
 return bill;
}

int main()
{
    int units;
    float total_Bill;
    units=read_Units();
    total_Bill = calculate_Bill(units);
    printf("Units consumed: %d\n", units);
    printf("Total bill: Rs %.2f\n", total_Bill);
    return 0;
}