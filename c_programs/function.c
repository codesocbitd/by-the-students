#include <stdio.h>
#include <stdlib.h>

int main()

{
    struct student
    {
        int roll_no;
        char name[10];
        char course[5];
        float fees;
    }stud1;

    printf("\t***Enter the information of student 1!***\n");
    printf("roll_no\n");
    scanf("%d",&stud1.roll_no);

    printf("name\n");
    scanf("%s",stud1.name);

    printf("course\n");
    scanf("%s",stud1.course);

    printf("fees");
    scanf("%f",&stud1.fees);

    printf("***Student's information is***\n");
    printf("%d %s %s %f",stud1.roll_no,stud1.name,stud1.course,stud1.fees);

    return 0;
}
