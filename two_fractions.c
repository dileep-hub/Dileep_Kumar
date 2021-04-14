#include<stdio.h>
struct fraction
{
    int Nr;
    int Dr;
};
typedef struct fraction Fraction;
Fraction input(int n)
{
    Fraction x;
    printf("Enter value of numerator for fraction %d :\n", n);
    scanf("%d", &x.Nr);
    printf("Enter value of denominator for fraction %d :\n", n);
    scanf("%d", &x.Dr);
    return x;
}
int find_gcd(int a, int b)
{
    int temp;
    while (a!=0)
    {
        temp=a;
        a=b%a;
        b=temp;
    }
    return b;
}
Fraction simplify(Fraction sum)
{
    int gcd=find_gcd(sum.Nr, sum.Dr);
    sum.Nr=sum.Nr/gcd;
    sum.Dr=sum.Dr/gcd;
    return sum;
}
Fraction compute_sum(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.Nr=(f1.Nr*f2.Dr)+(f2.Nr*f1.Dr);
    sum.Dr=f1.Dr*f2.Dr;
    sum=simplify(sum);
    return sum;
}
void display_sum(Fraction f1, Fraction f2, Fraction sum)
{
    printf("The sum of %d/%d and %d/%d is: %d/%d.\n",f1.Nr,f1.Dr,f2.Nr,f2.Dr,sum.Nr,sum.Dr);
}
int main()
{
    Fraction f1, f2, sum;
    f1=input(1);
    f2=input(2);
    sum=compute_sum(f1,f2);
    display_sum(f1,f2,sum);
    return 0;
}
