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
    for (int i = 0; i < 3; i++)
    {
        printf("student[%d].subject1= %d\n", i, student[i].subject1);
        printf("student[%d].subject2= %d\n", i, student[i].subject2);
        printf("student[%d].subject3= %d\n", i, student[i].subject3);
    }
    return 0;
}