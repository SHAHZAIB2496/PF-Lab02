#include <stdio.h>
int main()
{
    char symbol;
    printf("Enter symbol: ");
    scanf("%c",&symbol);

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }
    return 0;
}
