#include<stdio.h>
int main()
{
	int i=1,f=0,s=1;
	while(i<30)
	{
	int	third=f+s;
		printf("%d ",f);
		f=s;
		s=third;
		i++;
	}
return 0;
}