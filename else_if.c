
// Program with if else case

#include <stdio.h>
int main()
{
    int num;
    printf("enter your number \n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("your number is 1\n");
    }
    else if (num == 2)
    {
        printf("your number is 2\n");
    }
    else if (num == 3)
    {
        printf("your number is 3\n");
    }
    else
    {
        printf("it,s not 1,2 and 3");
    }

    return 0;
}

/*Write  program to find grade of a student given his marks  based on given below:
90-100 > A - Grade
80-90  > B - Grade
70-80  > C - Grade
60-70  > D - Grade*/

// With if else clause statement....

#include <stdio.h>
int main()
{

    int grades;
    printf("enter your grades(1-100)\n");
    scanf("%d", &grades);

    if (grades >= 90)
    {
        printf("your grade is A\n");
    }
    else if (grades >= 70)
    {
        printf("your grade is B\n");
    }
    else if (grades >= 50)
    {
        printf("your grade is C\n");
    }
    else if (grades <= 40)
    {
        printf("your grade is fail\n");
    }

    return 0;
}
