#include<stdio.h>

struct Student acceptRecord();
void dispRecord(struct Student n);

struct Student 
{
    char name[10];
    char roll[10];
    float marks; 
};

int main(void)
{
    struct Student a;
    a = acceptRecord();
    dispRecord(a);
    return 0;
}

struct Student acceptRecord()
{
    struct Student n;
    printf(" Enter Name : ");
    scanf("%s",n.name);
    printf(" Enter Roll No : ");
    scanf("%s",n.roll);
    printf(" Enter Total Marks : ");
    scanf("%f",&n.marks);
    return n;
}
void dispRecord(struct Student n)
{
    printf("\n\nStudent Name : %s\nRoll No : %s\nTotal Marks : %f\n ",n.name,n.roll,n.marks);
}
