#include <stdio.h>
void product(); //function declaration
void main()
{
 product(); //function call
}
void product() //function definition
{
 int a, b,c;
 printf("Enter your first number:");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
 c=a*b;
 printf("product of two numbers=%d",c);
}