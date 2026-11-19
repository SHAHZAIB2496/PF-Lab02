#include <stdio.h>
void circle_info(float radius, float *area, float *circumference)
{
    *circumference=2*3.14159*radius;
    *area=3.14159*radius*radius;
}
int main()
{
    float radius,area,circumference;
    printf("Enter radius:");
    scanf("%f",&radius);
    while(radius<0)
    {
        printf("Radius cannot be negative.\n");
        printf("Enter radius: ");
        scanf("%f", &radius);
    }
    circle_info(radius,&area,&circumference);
    printf("Area: %.2f\n",area);
    printf("Circumference: %.2f\n",circumference);
    return 0;
}