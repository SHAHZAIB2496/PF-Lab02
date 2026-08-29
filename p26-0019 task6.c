#include <stdio.h>
int main()
{
 float radius=7.50,circumference,diameter,area;
 diameter = 2*radius;
 circumference = 2*3.1415*radius;
 area = 3.14*radius*radius;
    printf("================ CIRCLE GEOMETRY REPORT ================\n");
    printf("Given Raduis: %.2f cm\n ",radius);
    printf("Calculated Diameter: %f cm\n",diameter);
    printf("Calculated Circumference: %.3f cm\n",circumference);    
    printf("Calculated Area: %.3f cm\n",area);
    printf("==============================================================\n");

    return 0;
}