#include<stdio.h>
int main()
{
  int p,n,count;
  float r,si  ;
  count=1;
  while(count<=3)
  {
    printf("Enter the  walue of p");
    scanf("%d",&p);
    printf("Enter the  walue of r");
    scanf("%f",&r);
    printf("Enter the  walue of n");
    scanf("%d",&n);
    si=n*p*r/100;
    printf("Your  interest =%f",si);
  }
  return 0;  
}
