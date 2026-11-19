#include<stdio.h>
void swap(int *a,int *b);
void sort_three(int *x,int *y,int *z);
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("Before: %d %d %d\n",num1,num2,num3);
    sort_three(&num1,&num2,&num3);
    printf("After: %d %d %d\n",num1,num2,num3);
    return 0;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort_three(int *x,int *y,int *z)
{
    if(*x>*y)
        swap(x,y);
    if(*y>*z)
        swap(y,z);
    if(*x>*y)
        swap(x,y);
}
