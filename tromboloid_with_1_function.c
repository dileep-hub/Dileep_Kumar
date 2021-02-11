//Write a program to find the volume of a tromboloid using one function

#include<stdio.h>
int main()
{
	float h,d,b,vol;
	printf("Enter the value of h,d,b: ");
	scanf("%f%f%f",&h,&d,&b);
	vol=(1.0/3*((h*d)+d))/b;
	printf("Volume of tromboloid: %f",vol);
	return 0;
}
