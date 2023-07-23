/*
star patterns...
*
**
***
****
*****
        */



#include<stdio.h>
int main(){

    int n;
    printf("enter a number\n");
    scanf("%d", &n);
     for( int i=0; i<=n; i++){

        //printf(i+1) satrs*

        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
     }

return 0;
}



/*
print  star pattern...
  ****
  ****
  ****
  ****
      */



#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}




/*
print  star pattern...
     *
    **
   ***
  ****
      */



#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){
           if(i+j>=n){
            printf("*");
           }
           else{
            printf(" ");
           }
        }
        printf("\n");
    }

    return 0;
}




