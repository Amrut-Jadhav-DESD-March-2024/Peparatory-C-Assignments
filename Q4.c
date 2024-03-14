#include<stdio.h>

int main(void)

{

int marks[5];
int total = 0;
float average;

printf("Enter marks for five subjects:\n");

     for (int i = 0; i < 5; i++)
    {
         printf("Subject %d: ", i + 1);
         scanf("%d", &marks[i]);
         total += marks[i];
    }
    average = (float)total / 5.0;
    printf("Total Marks: %d\n", total);
    if (total >= 90)
    {
         printf("Grade: Ex\n");
    }
    else if (total >= 80)
    {
         printf("Grade: A\n");
    }
    else if (total >= 70)
    {
         printf("Grade: B\n");
    }
    else if (total >= 60)
    {
         printf("Grade: C\n");
    }
    else
    {
        printf("Grade: F\n");
    }

return 0;

}
