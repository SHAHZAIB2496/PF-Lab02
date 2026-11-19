#include <stdio.h>
void convert_time(int totalSeconds,int *h,int *m,int *s)
{
    *h=totalSeconds/3600;
    totalSeconds=totalSeconds%3600;
    *m=totalSeconds/60;
    *s=totalSeconds%60;
}
void add_seconds(int *h,int *m,int *s,int extra)
{
    int total;
    total=(*h*3600)+(*m*60)+*s;
    total=total+extra;
    convert_time(total, h, m, s);
}
int main()
{
    int total_seconds,hour,minutes,seconds,extra;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    convert_time(total_seconds, &hour, &minutes, &seconds);
    printf("Time: %02d:%02d:%02d\n", hour, minutes, seconds);
    printf("Enter seconds to add: ");
    scanf("%d",&extra);
    add_seconds(&hour, &minutes, &seconds, extra);
    printf("New time: %02d:%02d:%02d\n", hour, minutes, seconds);
    return 0;
}
