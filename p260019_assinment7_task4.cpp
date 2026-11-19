#include <stdio.h>
float to_fahrenheit(float c)
{
    return (c*9/5)+32;
}
float to_celsius(float f)
{
    return (f-32)*5/9;
}
void print_table(int start, int end, int step)
{
    int i;
	printf("\nCelsius\tFahrenheit\n");
    for(i=start;i<=end;i=i+step)
    {
        printf("%d\t%.1f\n",i,to_fahrenheit(i));
    }
}
int main()
{
    int start, end, step;
    float f;
    printf("Start: ");
    scanf("%d",&start); 
    printf("End: ");
    scanf("%d",&end);
    printf("Step: ");
    scanf("%d",&step);
    print_table(start,end,step);
    printf("\nEnter a temperature in Fahrenheit: ");
    scanf("%f", &f);
    printf("%.1f F = %.2f C\n", f, to_celsius(f));
return 0;
}