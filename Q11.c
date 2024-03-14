#include<stdio.h>

struct Employee acceptRecord();
void dispRecord(struct Employee n);
void salary_hike(struct Employee n);

struct Employee 
{
    char first_name[10];
    char last_name[10];
    double salary; 
};

int main(void)
{
    struct Employee emp1,emp2;

    printf("\nEnter 1st Employee detail  ");
    emp1 = acceptRecord();
    printf("\nEnter 2nd Employee detail  ");
    emp2 = acceptRecord();

    printf("\n1st Employee details : \n");
    dispRecord(emp1);
     printf("\n2nd Employee details : \n");
    dispRecord(emp2);

    printf("\n\n============Salary Before and After hike=======\n");
    printf("\n1st Employee Salary\n ");
    salary_hike(emp1);
     printf("\n\n2nd Employee Salary\n");
    salary_hike(emp2);

    return 0;
}

struct Employee acceptRecord()
{
    struct Employee n;
    printf("\nEnter First Name : ");
    scanf("%s",n.first_name);
    printf("Enter Last Name : ");
    scanf("%s",n.last_name);
    printf("Enter Salary : ");
    scanf("%lf",&n.salary);
    return n;
}
void dispRecord(struct Employee n)
{
    printf("First Name : %s\nLast Name : %s\nYearly Salary : %lf\n ",n.first_name,n.last_name,n.salary*12);
}

void salary_hike(struct Employee n)
{
    printf("Salary Before 10 percent hike : %lf \n Salary After 10 percent hike : %lf ", n.salary*12, n.salary*1.1*12);
}