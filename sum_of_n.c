#include <stdio.h>
int input_n()
{
    int n;
    printf("Enter a number of elements: \n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, float a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the element no %d of the array\n",i+1);
        scanf("%f",&a[i]);
    }
}
float array_sum(int n, float a[n])
{
    float sum=0;
    for(int i=0;i<n;i++) 
    {
        sum += a[i];
    }
    return sum;
}
void output(int n, float a[n], float sum)
{
    int i;
    printf("The sum of "); 
    for(i=0;i<n-1;i++) 
    {
        printf("%f+",a[i]);
    }
    printf("%f=%.2f",a[i],sum);
}
int main()
{
    int n;
    float sum,a[n];
    n = input_n();
    input_array(n,a);
    sum=array_sum(n,a);
    output(n,a,sum);
}

