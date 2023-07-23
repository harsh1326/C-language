/*write a program to print following pattern for generalizied value of n;
  1
  12
  123
  1234
  12345*/



#include<stdio.h>
int main(){
    int i , n;
    printf("enetr a number\n");
     scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
        printf("%d", j);
        }
        printf("\n");
    }
return 0;
}