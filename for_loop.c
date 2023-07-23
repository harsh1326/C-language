// simple program for using for loop..

#include <stdio.h>
int main()
{

    for (int a = 0; a < 10; a++)
    {
        printf("the value of a is %d\n", a);
    }

    return 0;
}

// write a program to print find n natural numbers using for loop.

#include <stdio.h>
int main()
{
    int i, n;
    printf("enter any number\n");
    scanf("%d", &n);
    printf("natural number 1 to %d \n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// Write A program to print n natural numbers in reverse order...

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number \n");
    scanf("%d", &n);
    printf("Natural number in reverse order from %d to 1: \n", n);
    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}

// print n even numbers....

#include <stdio.h>
int main()
{

    int i;
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("even no. from 1 to %d\n", n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

// print the sum of n natural numbers and reverse it

#include <stdio.h>
int main()
{

    int i, n;
    int sum = 0;

    printf("enter the number \n");
    scanf("%d", &n);
    printf("the sum of first n natural numbers %d\n", n);

    for (i = n; i; i--)
    {
        sum = sum + i;
        printf("%d\n", i);
    }

    printf("the sum is %d\n", sum);

    return 0;
}


//print the table of a number enter by user


#include <stdio.h>
int main()
{

    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }

    return 0;
}



// print the factorial of number n

#include <stdio.h>
int main()
{

    int n;
    printf("enter a number");
    scanf("%d", &n);

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("final factorial is: %d\n", fact);

    return 0;
}


// print all odd numbers from 5 to 50 with for loop..

#include<stdio.h>
int main(){

    for(int i=5; i<=50; i++){
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
    

return 0;
}



//  print table on reverse..



#include<stdio.h>
int main(){

  int n, i;
  printf("enter a number");
  scanf("%d", &n);

  for(i=10;i>=1;i--){
    printf("%d\n", n*i);
  }

return 0;
}



//print 0 to 50 sum


#include<stdio.h>
int main(){
  int i ,n;
  int sum=0;
  for(i=5;i<=50;i++){
    sum=sum+i;

  }
  printf("%d", sum);

return 0;
}


/*sum of even number from 1 to n.....*/

#include<stdio.h>
int main(){
  int n;
  int sum =0;
  printf("enter a number\n");
  scanf("%d", &n);
  
  for(int i=1; i<=n;i++){
   if(i%2==0){
    printf("%d\n", i);
   sum=sum +i;
  } 
  }
  printf("sum of even numbers is %d\n", sum);
return 0;
}







