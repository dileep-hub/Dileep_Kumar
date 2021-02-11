//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>

float read_num();

float calc_sum(float  , float );

int display(float );

int main()
{
    read_num();
    return 0;
}

float read_num()
{
    float f1 , f2;
    float sum =0.0;
    printf("Enter two numbers: ");
    scanf("%f %f",&f1,&f2);
    sum = calc_sum(f1,f2);
    display(sum);
}

float calc_sum(float f1,float f2)
{
    float sum = 0.0;
    sum = f1+f2;
    return sum;
}

int display(float sum)
{
    printf("\n Sum of both the numbers is : %.2f \n",sum);
    return 0;
}
