/* Print the value of "i" for it,s pointer to pointer.*/


#include<stdio.h>
int main(){
    int i=5;
    int *ptr = &i;
    int **pptr= &ptr;

    printf("%d", **pptr ); 

return 0;
}


/* A program to demonstrate pointers */


#include<stdio.h>
int main(){

    int i=8;
    int *j=&i; // j Will now store the adress of i....

    printf("the value of i is %d\n", i);
    printf("the value of *j is %d\n", *j);
    printf("the value of i is %u\n", &i);
    printf("the adress of  i is %u\n", j);
    printf("the adress of j is %d\n", &j);
    printf("the value of j is %d\n", *(&j));

return 0;
}