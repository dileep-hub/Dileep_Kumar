#include<stdio.h>
struct Fraction
{
    int  num;
    int  deno;
};
typedef struct Fraction fraction;
int get_n()
{
    int n;
    printf("Enter the number of fractions: \n");
    scanf("%d",&n);
    return n;
}
fraction input()
{
    fraction a;
    printf("Enter the numerator\n");
    scanf("%d",&a.num);
    printf("Enter the denominator\n");
    scanf("%d",&a.deno);
    return a;
}
void get_fraction(int n,fraction a[])
{
    for(int i=0;i<n;i++)
    {
        printf("For fraction %d\n",(i+1));
        a[i]=input();
    }
}
fraction sum(fraction a,fraction b)
{
    fraction res;
    if(a.deno==b.deno)
    {
        res.deno=a.deno;
        res.num=a.num+b.num;
    }
    else 
    {
        res.deno=a.deno*b.deno;
        res.num=(a.num*b.deno)+(b.num*a.deno);
    }
    return res;
}
int find_gcd(int a,int b)
{
    int temp;
    while(a!=0)
    {
        temp=a;
        a=b%a;
        b=temp;
    }
    return b;
}
fraction compute_sum(fraction c)
{
    int gcd=find_gcd(c.num,c.deno);
    c.num=c.num/gcd;
    c.deno=c.deno/gcd;
    return c;
}

void output(fraction res)
{
    printf("The final sum is %d/%d ",res.num,res.deno);
}
fraction add_fraction(int n,fraction a[])
{
    fraction c;
    c.num=0;
    c.deno=1;
    for(int i=0;i<n;i++)
    {
        c=sum(c,a[i]);
    }
    c=compute_sum(c);
    return c;
}
int main()
{
    int n=get_n();
    fraction c,a[n],res;
    get_fraction(n,a);
    res=add_fraction(n,a);
    output(res);
    return 0;
}
