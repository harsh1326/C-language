/*
 Write a program to accept marks of five students in an array and
print them to screen
 */

#include <stdio.h>
int main()
{

    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        printf(" the value of marks of student %d is %d\n", i + 1, marks[i]);
    }

    return 0;
}

// 2D ARRAYS ( MULTI DIAMENSIONAL  ARRAYS )

#include <stdio.h>
int main()
{

    int students = 3;
    int subjects = 5;

    int marks[3][5];

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("enter the marks of student   %d  in subject  %d : ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("the marks of student %d in %d subjects is %d  \n", i, j, marks[i][j]);
        }
    }

    return 0;
}

// ARRAYS WITH FUNCTIONS  ...

#include <stdio.h>
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d marks of students %d\n", i, *(arr + i));
    }
    printf("\n");
}

int main()
{

    int arr[] = {22, 55, 66, 87, 53};

    printarray(arr, 5);
    return 0;
}


// POINTERS IN ARRAYS

#include<stdio.h>
int main(){
    int marks[5];
    int *ptr= &marks[0] ;

    for(int i=0; i<5; i++){
        printf("enter the marks of student %d is  : ", i);
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<5; i++){
        printf(" the marks of student %d is %d  \n", i, marks[i]); 
    }
return 0;
}


/*
Write a program to create an array of 10 integers and
  store multiplication table of n numbers in it.
*/

#include<stdio.h>
int main(){

    int n ;
    printf("enter a number\n");
    scanf("%d", &n);
    int mult[10];
    for(int i=0;i<10;i++){
        mult[i]= n*(i+1);
    }
    for(int i=0;i<10;i++){
        printf(" %d  * %d = %d \n", n, i+1, mult[i]);
    }
   
return 0;
}


// PRINT ARRAY IN REVERSE ORDER...(WITHOUT FUNCTION)....


#include<stdio.h>
int main(){
    int a[9]= {71,12,33,74,56,46,87,99,88};

    for(int i=0;i<9;i++){
        printf("%d\t", a[i]);
    }
    printf("\n");

    for(int i=8;i>=0;i--){
        printf("%d\t", a[i]);
    }

return 0;
}
