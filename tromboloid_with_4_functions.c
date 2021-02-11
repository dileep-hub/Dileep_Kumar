//WAP to find the volume of a tromboloid using 4 functions.

#include <stdio.h>
float input(char b)
{
    float a; 
    printf("Enter the value of %c: ",b);
    scanf("%f",&a);
    return a;
}

float volume(float h,float d,float b)
{
    float vol;
    vol=(1.0/3*((h*d)+d))/b;
    return vol;
}

void output(float res)
{
    printf("Volume of a tromboloid: %f",res);
}

int main()
{
    float h,d,b,res;
    h=input('h');
    d=input('d');
    b=input('b');
    res=volume(h,d,b);
    output(res);
    return 0;
}
