// Finding distance between 2 points
#include <stdio.h>
#include<math.h>
float input(char b[])
{
    float a;
    printf("Enter the value of %s: ",b);
    scanf("%f",&a);
    return a;
}

float compute_distance(float x1,float y1,float x2,float y2 )
{
    float dist;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}

void output(float res)
{
    printf("Distance between two points: %f",res);
}

int main()
{
    float x1,y1,x2,y2,res;
    x1=input("x1");
    x2=input("x2");
    y1=input("y1");
    y2=input("y2");
    res=compute_distance(x1,y1,x2,y2);
    output(res);
    return 0;
}
