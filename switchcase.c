
// ratings with switch case method

#include <stdio.h>
int main()
{

    int ratings;
    printf("enter the ratings(1-5)\n");
    scanf("%d", &ratings);

    switch (ratings)
    {
    case 1:
        printf("your rating is 1\n");
        break;
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default:
        printf("invalid\n");
        break;
    }

    return 0;
}

/*Write  program to find grade of a student given his marks  based on given below:
90-100 > A - Grade
80-90  > B - Grade
70-80  > C - Grade
60-70  > D - Grade*/

#include <stdio.h>
int main()
{

    int grades;
    printf("enter you grades (1-100)\n");
    scanf("%d", &grades);

    switch (grades / 10)
    {
    case 10:
    case 9:
        printf("Your grades is A\n");
        break;
    case 8:
    case 7:
        printf("Your grades is B\n");
        break;
    case 6:
    case 5:
        printf("Your grades is C");
        break;
    case 4:
    case 3:
        printf("Your grades is D\n");
        break;
    default:
        printf("fail\n");
    }

    return 0;
}