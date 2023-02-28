#include <stdio.h>

struct marks
{
    int subject1;
    int subject2;
    int subject3;
};

int main()
{
    struct marks student[3] = {{45, 68, 81}, {75, 53, 69}, {57, 36, 71}};
    printf("student[0].subject1= %d\n", student[0].subject1);
    printf("student[0].subject2= %d\n", student[0].subject2);
    printf("student[0].subject3= %d\n", student[0].subject3);
    printf("student[1].subject1= %d\n", student[1].subject1);
    printf("student[1].subject2= %d\n", student[1].subject2);
    printf("student[1].subject3= %d\n", student[1].subject3);
    printf("student[2].subject1= %d\n", student[2].subject1);
    printf("student[2].subject2= %d\n", student[2].subject2);
    printf("student[2].subject3= %d\n", student[2].subject3);
    return 0;
}