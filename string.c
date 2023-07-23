// printing string charchter  with while loop....

#include<stdio.h>
int main(){
    // char st[]= {'h', 'a', 'r', 's', 'h', '\0'};

    char st[]= "harsh";
    char *ptr = st;

    while (*ptr!='\0')
    {
       printf("%c", *ptr);
       ptr++;
    }
    

return 0;
}


// TAKING STRING INPUT FROM THE USTER.....

#include<stdio.h>
int main(){

   char s[10];
   printf("enter your name  : ");
   scanf("%s" , s );
   printf(" your name is : %s", s);
 
return 0;
}



// CONVENIENT WAY TO PRINT STRING....

#include<stdio.h>
int main(){

    char *ptr= "harsh";
    printf("%s", ptr);
   

return 0;
}



// gets() AND put() FOR USING MULTIPLE WORDS IN STRINGS....


#include<stdio.h>
int main(){

    char a[30];
    printf("enter your name : ");
    gets(a);
    puts(a);
    // printf("your name is : %s", a);

return 0;
}