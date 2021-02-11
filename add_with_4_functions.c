//Write a program to add two user input numbers using 4 functions.

#include <stdio.h>
float input()
{
    float a; 
    printf("Enter a number\n");
    scanf("%f",&a);
    return a;
}

float find_sum(float a, float b)
{
    float sum;
    sum = a+b;
    return sum;
}

void output(float a, float b, float c)
{
    printf("Sum of %f + %f is %f\n",a,b,c);
}

int main()
{
    float x,y,z;
    x=input();
    y=input();
    z=find_sum(x,y);
    output(x,y,z);
    return 0;
}
