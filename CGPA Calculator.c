#include <stdio.h>

int main()
{
    int student;
    do
    {
        printf("Enter the number of total student: ");
        scanf("%d", &student);
        if(student<=0)
        {
            printf("Invalid student number.\n");
        }
    }
    while(student<=0);
    int sub;
    do
    {
        printf("Enter total subject number: ");
        scanf("%d", &sub);
        if(sub<=0)
        {
            printf("Enter enter positive subjects number!\n");
        }
    }
    while(sub<=0);
    printf("\n");
    int ID[student];
    for(int stu=0; stu<student; stu++)
    {
        int marks=0;
        int total_marks=0;
        float per=0.0;
        char subname[40];
        float CGPA=0.0;
        float sum=0.0;
        float GPA=0.0;
        int failed = 0;
        printf("_____student sl no. %d_____\n", stu+1);
        printf("Enter student ID number: ");
        scanf("%d", &ID[stu]);
        for(int i=0; i<sub; i++)
        {
            printf("Enter subject%d name: ", i+1);
            scanf(" %[^\n]", subname);
            printf("Enter marks of %s: ", subname);
            scanf("%d", &marks);
            printf("Enter total marks of %s Examination: ", subname);
            scanf("%d", &total_marks);
            per=((float)marks*100)/(float)total_marks;
            if(per>=80)
            {
                GPA=4.0;
            }
            else if(per<80 && per>=75)
            {
                GPA=3.75;
            }
            else if(per<(float)75 && per>=(float)70)
            {
                GPA=3.5;
            }
            else if(per<(float)70 && per>=(float)65)
            {
                GPA=3.25;
            }
            else if(per<(float)65 && per>=(float)60)
            {
                GPA=3.0;
            }
            else if(per<(float)60 && per>=(float)55)
            {
                GPA=2.75;
            }
            else if(per<(float)55 && per>=(float)50)
            {
                GPA=2.5;
            }
            else if(per<(float)50 && per>=(float)45)
            {
                GPA=2.25;
            }
            else if(per<(float)45 && per>=(float)40)
            {
                GPA=2.0;
            }
            else
            {
                GPA=0.0;
                failed = 1;
            }
            sum+=GPA;
        }
        printf("\n");
        if(failed)
        {
            printf("Grade: F\n");
        }
        else
        {
            printf("OUTPUT:\nFOR student ID:%d.\n", ID[stu]);
            CGPA=(float)sum/sub;
            printf("CGPA: %.2f\n", CGPA);
            if(CGPA>=4.0)
            {
                printf("Grade: A+\n");
            }
            else if(CGPA>=3.75)
            {
                printf("Grade: A\n");
            }
            else if(CGPA>=3.5)
            {
                printf("Grade: A-\n");
            }
            else if(CGPA>=3.25)
            {
                printf("Grade: B+\n");
            }
            else if(CGPA>=3.0)
            {
                printf("Grade: B\n");
            }
            else if(CGPA>=2.75)
            {
                printf("Grade: B-\n");
            }
            else if(CGPA>=2.5)
            {
                printf("Grade: C+\n");
            }
            else if(CGPA>=2.25)
            {
                printf("Grade: C\n");
            }
            else if(CGPA>=2.0)
            {
                printf("Grade: D\n");
            }
            else
            {
                printf("Grade: F\n");
            }
        printf("\n");
        }
    }
    return 0;
}
