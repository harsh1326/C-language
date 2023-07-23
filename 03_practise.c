/* Q2 write a program to find out whether a student is pass or fail;
 if its require total 40% and at least 33% in each subject to pass.
assume 3 Subjects and take marks as an input from the user.*/

#include <stdio.h>
int main()
{
    int hindi, maths, english;
    float total;

    printf("Enter the hindi Marks\n");
    scanf("%d", &hindi);

    printf("Enter the maths Marks\n");
    scanf("%d", &maths);

    printf("Enter the english Marks\n");
    scanf("%d", &english);

    total = (hindi + maths + english) / 3;
    if ((total < 40) || hindi < 33 || maths < 33 || english < 33)
    {
        printf("Your total percentage is %f and you are FAIL \n", total);
    }
    else
    {
        printf(" your total percentage is %f and you are passed \n", total);
    }
    return 0;
}

// Write a program to find greatest of four numbers enterd ny users.

#include <stdio.h>
int main()
{

    int a, b, c, d;
    printf("the value of a\n");
    scanf("%d", &a);

    printf("the value of b\n");
    scanf("%d", &b);

    printf("the value of c\n");
    scanf("%d", &c);

    printf("the value of d\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("A is bigger \n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is bigger\n");
    }
    else if (c > a && c > b && c > d)
    {
        printf("C is bigger\n");
    }
    else if (d > a && d > b && d > c)
    {
        printf("D is bigger\n");
    }

    return 0;
}

/*Write a program to determine wheather a charchter entered
by the user is lowercase */

#include <stdio.h>
int main()
{
    // 97-122 = a-z
    char ch;
    printf("Enter the charchter\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("it is lowercase");
    }
    else
    {
        printf("it is not lowercase");
    }

    return 0;
}