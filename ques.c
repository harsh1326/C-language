// Ask the user to enter marks in three subjects
// find out the total three subjects of marks and their average




#include<stdio.h>
int main(){
    int m1, m2, m3;
    int total;
    float avg;
    
    
    

    printf("Enter the marks of m1 \n");
    scanf("%d", &m1);

    printf("Enter the marks of m2 \n");
    scanf("%d", &m2);

    printf("Enter the marks of m3 \n");
    scanf("%d", &m3); 

    total=m1+m2+m3;

    printf("total marks of all three subj %d\n", total);
    avg=(total/3);
    printf("average of all three subj %f\n" ,avg);
    

return 0;
}







