/*
    C  Program to Cout  EVEN  and ODD  numbers in array with functions
*/

#include <stdio.h>
int findeven(int a[], int size)
{
    printf("\nenter the list of even numbers :  ");
    int even = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
            even++;
        }
    }
    return even;
}
int findodd(int a[], int size)
{
    printf("\n the list of odd numbers :  ");
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d\t", a[i]);
            odd++;
        }
    }
    return odd;
}

int main()
{
    int size, a[10];
    int even = 0, odd = 0;

    printf("enter the size of array: ");
    scanf("%d", &size);

    printf("\n enter the elements of arrays : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    even = findeven(a, size);
    odd = findodd(a, size);

    printf("\n Total even numbers in this array : %d ", even);
    printf("\n Total odd numbers in this array : %d ", odd);

    return 0;
}

/*
Write a function to count even numbers in array...
*/

#include <stdio.h>
int findeven(int a[], int size)
{
    int even = 0;
    printf("\nThe list of even numbers is :  ");
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
            even++;
        }
    }
    return even;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("\nthe no. of even numbers is : %d", findeven(a, 10));

    return 0;
}

/*
create a function to reverse a array....
*/

#include <stdio.h>
void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = a[i];
        int secondval = a[n - i - 1];
        a[i] = secondval;
        a[n - i - 1] = firstval;
    }
}
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(a, 7);
    printarray(a, 7);

    return 0;
}

/*
Create an array of size 3 X 10 containing multiplication table of the number
 2 , 7, and 9 respectively...,
*/

#include <stdio.h>
void printtable(int mult[], int num, int n)
{
    printf("The multiplication table of :  %d\n", num);
    for (int i = 0; i < n; i++)
    {
        mult[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d * %d = %d\n", num, i + 1, mult[i]);
    }
    printf("************************\n");
}

int main()
{

    int mult[3][10];
    printtable(mult[0], 2, 10);
    printtable(mult[1], 7, 10);
    printtable(mult[2], 9, 10);

    return 0;
}

/*
Count positive and negative numbers with arrays in functions ......
*/

#include <stdio.h>
int positivenumber(int a[], int size)
{
    int positive = 0;
    printf("\nlist of positive numbers :  ");
    for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
        {
            printf("%d\t", a[i]);
            positive++;
        }
    }
    return positive;
}
int negativeNumbers(int a[], int size)
{
    printf("\nlist of odd numbers : ");
    int negative = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("%d\t", a[i]);
            negative++;
        }
    }
    return negative;
}
int main()
{

    int a[] = {+1, -2, +4, +5, -9, +8, -7};
    int positive = 0;
    int negative = 0;

    positive = positivenumber(a, 7);
    negative = negativeNumbers(a, 7);
    printf("\n count of positive numbers is:  %d ", positive);
    printf("\n count of negative numbers is:  %d ", negative);

    return 0;
}

/*
Find the largest number of element...
*/

#include <stdio.h>
int largestNumber(int a[], int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
}
int main()
{
    int largest = 0, a[] = {12, 03, 4509278, 456, 675888, 7849, 8756, 999, 22, 888};

    largest = largestNumber(a, 10);
    printf("the largest number of element is :  %d", largest);

    return 0;
}

/*
Find number 7 and cout how many  times  repeats....
*/

#include <stdio.h>
int visible(int a[], int size)
{
    int seven = 0;
    printf("\nthat number you want is : ");
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 7)
        {
            printf("%d", a[i]);
            seven++;
        }
    }
    return seven;
}
int main()
{
    int seven = 0, a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 7, 7, 7, 7};
    seven = visible(a, 14);
    printf("\ncount of 7 number is :  %d", seven);

    return 0;
}


// find even and odd with array functions....


#include <stdio.h>
int printeven(int a[], int size)
{
    int even = 0;
    printf("\n list of even numbers : ");
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
            even++;
        }
    }
    return even;
}

int printodd(int a[], int size)
{
    int odd = 0;
    printf("\nthe list of odd numbers is : ");
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d\t", a[i]);
            odd++;
        }
    }
    return odd;
}
int main()
{

    int even = 0, odd = 0, a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    even = printeven(a, 10);
    odd = printodd(a, 10);

    printf(" \ncount of even number is : %d", even);
    printf(" \ncount of even number is : %d", odd);

    return 0;
}