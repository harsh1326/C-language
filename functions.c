/*Write a Question that prints Namaste if user is indian &
bonjour if the user is french. */

#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    printf(" enter f for french & i for indian : \n");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }

    return 0;
}

void namaste()
{
    printf("namaste\n");
}

void bonjour()
{
    printf(" bonjour\n");
}

/* Print n table for using fuctions...*/

#include <stdio.h>

void printtable(int n);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    printtable(n); // Argument / actual parameter

    return 0;
}

void printtable(int n)
{ // Parameter / Formal parameter..
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}

/* Print sum of any two numbers ...*/

#include <stdio.h>


int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter a number\n");
    scanf("%d", &b);

    int c = sum(a, b);
    printf("sum is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

/*use LIBRARY functin to calculate the square of a number given by user*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("enter a number \n");
    scanf("%d", &n);
    printf("%f\n", pow(n, 2));

    return 0;
}

/* Write functions to calculate area of a square , a circle & a rectangle.  */

#include <stdio.h>

int squarearea(int side);
float circlearea(float radius);
int rectarea(int a, int b);

int main()
{

    int side = 2;
    printf("area of square %d\n", squarearea(side));

    float radius = 4;
    printf("area of circle %f\n", circlearea(radius));

    int a = 5, b = 4;
    printf("area of rectangle %d\n", rectarea(a, b));

    return 0;
}

int squarearea(int side)
{
    return side * side;
}

float circlearea(float radius)
{
    return 3.14 * radius * radius;
}

int rectarea(int a, int b)
{
    return a * b;
}

/* Wrie a function to calculate  percentage of a student from marks in MATHS , HINDI & ENGLISH */

#include <stdio.h>
int calpercent(int maths, int hindi, int english);

int main()
{
    int maths = 98, hindi = 95, english = 99;
    printf("percentage of three sub. : %d\n", calpercent(maths, hindi, english));

    return 0;
}

int calpercent(int maths, int hindi, int english)
{
    return ((maths + hindi + maths) / 3);
}

/* Write a function to print square root of any number*/

#include <stdio.h>
int squareroot(int n);

int main()
{

    int n;
    printf("Enter number\n");
    scanf("%d", &n);

    squareroot(n);

    return 0;
}

int squareroot(int n)
{
    int c = n * n;
    printf("squareroot is %d", c);
    return c;
}

/* Write a function to find sum of digits of a number ..*/

#include <stdio.h>
int sum(int n);

int main()
{
    int n;

    printf("enter number\n");
    scanf("%d", &n);

    sum(n);
    return 0;
}

int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int re = n % 10;
        sum = sum + re;
        n = n / 10;
    }
    printf("the sum of digits %d\n", sum);

    return sum;
}

/* Write a Program using function to find average of three number*/

#include <stdio.h>

int average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("enter the value of a\n");
    scanf("%d", &a);

    printf("enter the value of b\n");
    scanf("%d", &b);

    printf("enter the value of c\n");
    scanf("%d", &c);

    average(a, b, c);
    return 0;
}

int average(int a, int b, int c)
{
    float d = (a + b + c) / 3;
    printf("%f", d);
    return d;
}