#include <stdio.h>
int product();  //function declaration
void main()
{
printf("product of two numbers=%d",product());  //function call
}
int product() //function definition
{
int a, b,c;
printf("Enter your first number:");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);

c=a*b;
return(c);
}