#include<stdio.h>
int main()
{
	int age,*ptr_age;
	float cgpa,*ptr_cgpa;
	char grade,*ptr_grade;
	
	printf("Enter age : ");
	scanf("%d",&age);
	printf("Enter cgpa : ");
	scanf("%f",&cgpa);
	printf("Enter grade : ");
	scanf(" %c",&grade);
	
	ptr_grade=&grade;
	ptr_age=&age;
	ptr_cgpa=&cgpa;
	
    printf("age = %d via pointer = %d &age = %p ptr_age = %p \n",age,*ptr_age,(void *)ptr_age,(void *)&ptr_age);
    printf("cgpa = %.2f via pointer = %f &cgpa = %p ptr_cgpa = %p \n",cgpa,*ptr_cgpa,(void *)ptr_cgpa,(void *)&ptr_cgpa);
    printf("grade = %c via pointer = %c &grade = %p ptr_grade = %p \n",grade,*ptr_grade,(void *)ptr_grade,(void *)&ptr_grade);

   printf("After changing through pointers :\n");
   *ptr_age=*ptr_age+1;
   *ptr_cgpa=*ptr_cgpa+0.25;
   *ptr_grade=*ptr_grade+1;
   printf("%d\t%.2f\t%c",*ptr_age,*ptr_cgpa,*ptr_grade);
   return 0;
}