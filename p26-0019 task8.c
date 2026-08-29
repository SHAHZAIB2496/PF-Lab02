#include<stdio.h>
int  main()
{
	double pf_marks=88.0,CAG_marks=76.5,ap_marks=82.0,total_score,average_score;
	int credit_hours=3,ap_credit_hours=2,total_credit_hours;
    total_score = (pf_marks*credit_hours)+(CAG_marks*credit_hours)+(ap_marks *ap_credit_hours);
    total_credit_hours=credit_hours+credit_hours+ap_credit_hours;
    average_score= total_score/total_credit_hours;
    printf("================SEMESTER ACADEMIC REPORT========================\n");
    printf("Course\t\t\tCredit Hours\t\tObtained Marks\n");
	 printf("-----------------------------------------------------------\n");
    printf("Programming Fund.\t%d\t\t%.2f\n",credit_hours,pf_marks);
    printf("Calculus\t\t%d\t\t%.2f\n",credit_hours,CAG_marks);
    printf("Applied Physics\t\t%d\t\t%.2f\n",ap_credit_hours,ap_marks);
    printf("-----------------------------------------------------------\n");
    printf("Total Credits: %d\tWeighted Average: %.2f%%\n",total_credit_hours,average_score);
    printf("===========================================================\n");
    
    return 0;
}