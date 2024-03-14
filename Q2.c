#include<stdio.h> 

int main(void)

{

 int i;
 int fact=1;
 int num;

 printf("Enter a number: ");    
  scanf("%d",&num); 

    for(i=1;i<=num;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",num,fact);    
return 0;

} 
