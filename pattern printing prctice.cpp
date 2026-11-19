#include <stdio.h>

int main()
{
    int a, b, choice;

    start:

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Exit");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 4)
        goto end;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(choice == 1)
        printf("Sum = %d", a+b);
    else if(choice == 2)
        printf("Difference = %d", a-b);
    else if(choice == 3)
        printf("Product = %d", a*b);
    else
        printf("Invalid choice");

    goto start;

    end:
    printf("\nProgram ended");

    return 0;
}