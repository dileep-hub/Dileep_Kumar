#include<stdio.h>
int a[100], i, j;
int sum = 0;
int main()
{
    printf("Enter the number of elements you are going to enter \n");
    scanf("%d", &j);
    int y = input();
    tsum(y);
}

int 
input()
{
    printf("enter the numbers \n");
    for (i=0; i<j; i++)
        {
            scanf("%d", &a[i]);
        }
    return a;
}
int 
tsum()
{
    for (i=0; i <= j; i++)
      {
        sum = sum + a[i];
      }
    printf("sum=%d", sum);
return 0;
}
