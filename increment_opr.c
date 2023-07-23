#include <stdio.h>
int main()
{
    int i = 5;
    printf("the value after i++ is %d\n", i++);
    printf("the value of i is %d\n", i);
    i++; //----> pehle print then increment <-----
    ++i; //----> pehle increment then print <-----
    printf("the value of i is %d\n", i += 10);// ---> Incremennts i by 10 <----
`
    return 0;
}