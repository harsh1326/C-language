// C program to check weather a Number is even or odd.

#include <stdio.h>
int main()
{

    int a; 
    printf("Enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is Even \n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
    return 0;
}

// Define age with if else for driving.

#include <stdio.h>
int main()
{

    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age <= 70 && age >= 18)
    {
        printf("Your age below 70 and above 18  you can drive \n");
    }

    else
    {
        printf("you cannot drive\n");
    }

    if (age == 50)
    {
        printf("half century\n");
    }

    return 0;
}