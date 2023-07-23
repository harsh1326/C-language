
//break with do while loop

#include<stdio.h>
int main(){

    int i=0;
    do
    {
       printf("the value of i is %d\n", i);
       if(i==5){
       break;
       } 
       i++;
    } while (i<20);
    

return 0;
}

// break with for loop


#include<stdio.h>
int main(){

    for(int i=1; i<20; i++){
        printf("%d\n", i);
        if(i==5){
            break;
        }
    }


return 0;
}

