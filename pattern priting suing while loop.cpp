#include <stdio.h>
int main()
{
    char symbol;
    printf("Enter symbol: ");
    scanf("%c",&symbol);

  int i,j,k,l;
    i=1;
    while(i<=5)
        {
            j=1;
            while(j<=i)
                {
                    printf("%c",symbol);
                    j++;
                }
            printf("\n");
            i++;
        }
    k=4;
    while(k>=1)
        {
            l=1;
            while(l<=k)
                {
                    printf("%c",symbol);
                    l++;
                }
            printf("\n");
            k--;
        }
    return 0;
}
