// CALL BY VALUE...

#include <stdio.h>
int sum(int a, int b);
int main()
{

    int x = 4, y = 7;
    printf("the value of x and y is %d\n", sum(x, y));

    printf("the value of x and y is %d and %d\n", x, y);

    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}




// .....>> CALL BY REFERENCE.....<



#include<stdio.h>
void swap(int *a , int *b){
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;
}
void wrong_swap(int a , int b){
    int temp;
    temp=a;
    a = b;
    b = temp;
}

int main(){
    int x=3,y=6;
    // After wrong swap.
    printf("the value of x and y is %d and %d\n" , x,y);

    // After swapinf function.
    swap(&x,&y);
    printf("the value of x and y is %d and %d\n", x,y);

return 0;
}



/*
Write a program using faction while calculate the sum and average of two numbers .
use pointers and print the values of sum and average . in MAIN()
 */



#include <stdio.h>
void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int a = 8, b = 6, sum;
    float avg;
    sumandavg(a, b, &sum, &avg);
    printf("the sum is %d\n", sum);
    printf("the avg is %f\n", avg);

    return 0;
}



/*
Write a programm to chamge the value of a variable to ten times of its current value .
Write a function and pass the value by refrence...
*/


#include<stdio.h>
void change(int *n){
    *n= *n * 10;
}
int main(){
    int n ;
    printf("enter a number: ");
    scanf("%d", &n);
    change(&n);
    printf("the value after chnge is : %d", n);

return 0;
}




/*
Write a programm to chamge the value of a variable to ten times of its current value .
Write a function and pass the value by refrence...
*/

// CALL BY VALUE




#include<stdio.h>

int mult(int n){
    int a=n*10;
    return a; 
}
int main(){

    int n;
    printf("enter a number is : ");
    scanf("%d", &n);
    printf("the value after 10 times is %d",mult(n));

return 0;
}