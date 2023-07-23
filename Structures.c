// #include<stdio.h>
// #include<string.h>
// struct Student{
//     int rollNo;
//     float cgpa;
//     char name[100];
// };
// int main(){
//     struct Student s1;
//     s1.rollNo=22;
//     s1.cgpa=9.2;
//     strcpy(s1.name,"Harsh");

//     printf("Student Name: %s\n", s1.name);
//     printf("Student cgpa: %f\n", s1.cgpa);
//     printf("Student Roll No: %d\n", s1.rollNo);

//     struct Student s2;
//     s2.rollNo=23;
//     s2.cgpa=10.2;
//     strcpy(s2.name,"Kusum");

//     printf("Student Name: %s\n", s2.name);
//     printf("Student cgpa: %f\n", s2.cgpa);
//     printf("Student Roll No: %d\n", s2.rollNo);

//     struct Student s3;
//     s3.rollNo=18;
//     s3.cgpa=11.2;
//     strcpy(s3.name,"Kush");

//     printf("Student Name: %s\n", s3.name);
//     printf("Student cgpa: %f\n", s3.cgpa);
//     printf("Student Roll No: %d\n", s3.rollNo);



//     return;
// }

#include<stdio.h>
#include<string.h>
typedef struct address{
    int HouseNo;
    int block;
    char city[100];
    char state[100];
} add;
int main(){
    add a1;
    a1.HouseNo=143;
    a1.block=3;
    strcpy(a1.city,"Narela");
    strcpy(a1.state,"Delhi");

    add a2;
    a2.HouseNo=178;
    a2.block=9;
    strcpy(a2.city,"Sonipat");
    strcpy(a2.state,"Haryana");

    add a3;
    a3.HouseNo=146;
    a3.block=2;
    strcpy(a3.city,"Peeragarhi");
    strcpy(a3.state,"Delhi");

    add a4;
    a4.HouseNo=190;
    a4.block=1;
    strcpy(a4.city,"Noida");
    strcpy(a4.state,"UP");

    add a5;
    a5.HouseNo=121;
    a5.block=8;
    strcpy(a5.city,"panipat");
    strcpy(a5.state,"Haryana");

  
    return 0;
}