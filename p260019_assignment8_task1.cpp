#include <stdio.h>
int main()
{
    int age;
    float cgpa;
    char grade;
    int *ageptr=&age;
    float *cgpaptr=&cgpa;
    char *gradeptr=&grade;
	printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter CGPA: ");
    scanf("%f",&cgpa);
    printf("Enter grade: ");
    scanf(" %c",&grade);
    printf("\nage=%d via pointer=%d &age=%p pAge = %p\n",age,*ageptr,&age,ageptr);
    printf("cgpa = %.2f via pointer = %.2f &cgpa = %p pCgpa = %p\n",cgpa,*cgpaptr,&cgpa,cgpaptr);
    printf("grade = %c via pointer = %c &grade = %p pGrade = %p\n",grade,*gradeptr,&grade,gradeptr);
    printf("&ageptr = %p &cgpaptr = %p &gradeptr = %p\n",&ageptr,&cgpaptr,&gradeptr);
    
	*ageptr=*ageptr+1;
    *cgpaptr=*cgpaptr+0.25;
    *gradeptr=*gradeptr+1;
    
	printf("\nAfter changing through pointers:\n");
    printf("age = %d, cgpa = %.2f, grade = %c\n",age,cgpa,grade);
    return 0;
	}