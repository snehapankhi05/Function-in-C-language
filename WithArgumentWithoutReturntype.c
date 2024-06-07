#include <stdio.h>
void product(int a, int b); //function declaration
void main()
{
int a,b;
printf("Enter your first number:");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
product(a,b); //function call

}
void product(int a, int b) //function definition
{
int c;
c=a*b;
printf("product of two numbers=%d",c);
}