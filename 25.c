#include <stdio.h>

struct marks
{
    int subject[3];
};

int main()
{
    struct marks student[3] = {{45, 68, 81}, {75, 53, 69}, {57, 36, 71}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("student[%d].subject[%d]= %d\n", i, j, student[i].subject[j]);
        }
    }
}