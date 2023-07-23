/*
USING STRLEN LIBRARY FUNCTION....
*/

#include <stdio.h>
#include <string.h>
int main()
{

    char *st = "harsh";
    int a = strlen(st);

    printf("the lenght of string is : %d", a);

    return 0;
}




// USING STRCPY LIBRARY FUNCTION....


#include<stdio.h>
#include<string.h>
int main(){

    char st[]="harsh";
    char st2[30];
    strcpy(st2, st);
    printf(" Now the st2 is %s", st2);

return 0;
}



// USING STARCAT LIBRARY FUNCTION.....


#include<stdio.h>
#include<string.h>
int main(){

    char st1[30]="hello";
    char st2[]="harsh";
    strcat(st1, st2);
    printf(" Now the st2 is %s", st1);

return 0;
}



// USING strcmp LIBRARY FUNCTION...


#include<stdio.h>
#include<string.h>
int main(){

    char st1[]="hello";
    char st2[]="harsh";
     int val =strcmp(st1, st2);
    printf(" Now the st2 is %d", val);

return 0;
}