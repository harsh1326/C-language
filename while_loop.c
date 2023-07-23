/*write a program to print natural numbers from 10 - 20 .
when initial loop counter is initialized to 0.*/

#include <stdio.h>
int main(){
    
    
int i =0;
    while(i<=20){
        if(i >= 10){
            printf("the value of i is %d\n",i);
        }
        i++;// i=i+1;
    }
    return 0;
}


// infinite program..

#include<stdio.h>
int main(){
    int a;
    printf("enter th value of a\n");
    scanf("%d", &a);

    while(a>10){ // ----> This is an INFINITE loop <-----
        printf("%d\n", a);
        a++;
    }
    

return 0;
}
    



