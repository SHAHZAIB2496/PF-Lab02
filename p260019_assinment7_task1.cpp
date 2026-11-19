#include <stdio.h>
void welcome()
{
    printf("==============================\n");
    printf("       Pattern Printer v1.0\n");
    printf("==============================\n");
}
void print_Square(int side, char character)
{
    int i,j;
    for(i=1;i<=side;i++)
    {
        for(j=1;j<=side;j++)
        {
            printf("%c",character);
        }
        printf("\n");
    }
}
int main()
{
    int side;
    char charc;
    welcome();
    printf("Enter side:");
    scanf("%d",&side);
    printf("Enter character:");
    scanf(" %c",&charc);
    print_Square(side,charc);
    welcome();
    return 0;
}