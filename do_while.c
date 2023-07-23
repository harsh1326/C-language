// Write a program to print first n natural numbers using do-while loop...

#include <stdio.h>
int main()
{

    int i = 1;
    int n;
    printf("Enter the value of n \n", n);
    scanf("%d", &n);

    do
    {
        printf("the number is %d\n", i);
        i++;

    } while (i <= n);

    return 0;
}



// print the factorial of number n with do while loop..


#include<stdio.h>
int main(){
    
    int i=1,n;
    printf("enter a number:\n");
    scanf("%d", &n);
    int fact=1;
    do
    {  
        fact=fact*i;
        
        i++;
    } while (i<=n);
    printf("final factorial : %d\n", fact);

return 0;
}


