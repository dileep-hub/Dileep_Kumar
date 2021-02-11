
//Write a program to add two user input numbers using one function.

#include<stdio.h>

int main()
{
    float num1,num2,res;
    printf("\n Enter Number: ");
    scanf("%f",&num1);
    printf("\n Enter Number: ");
    scanf("%f",&num2);
    res = num1+num2;
    printf("\n Sum of %f and %f is : %f \n",num1,num2,res);
    return 0;
}
