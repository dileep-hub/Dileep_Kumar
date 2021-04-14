#include<stdio.h>
typedef struct fraction
{
int n;
int d;
} frac;
frac
input()
{
frac a;
printf("enter numerator: \n");
scanf("%d", &a.n);
printf("enter denominator: \n");
scanf("%d", &a.d);
return a;
}

frac add(frac f1, frac f2, frac sum)
{
    int gcd = 1;
    int i;

sum.d = f1.d * f2.d;
sum.n = f1.n * f2.d + f2.n * f1.d;
for (i = 1; i <= sum.n && i <= sum.d; i++)
    
 
    {
if ((sum.n) % i == 0 && (sum.d) % i == 0)
gcd = i;
}
sum.d = (sum.d) / gcd;
sum.n = sum.n / gcd;
return sum;
}  

frac input_n (int n, frac a[])
{

frac sum;
int i;
for (i = 0; i < n; i++)
{
printf("for fraction %d \n", (i + 1));
a[i]=input();
    }
}
frac compute_n(int n,frac a[]){
    frac c;
    c.d=1;c.n=0;
    frac sum;
    for (int i = 0; i < n; i++)
    
    {

c = add(c, a[i], sum);
}
return c;
}
void
output_n (int n, frac c)
{
printf("final sum of given %d fractions is = %d/%d", n, c.n, c.d);
}
int 
main()
{

int  n;
frac a[100];
printf("enter the fractions \n");

scanf("%d", &n);
input_n(n,a);
frac m=compute_n(n,a);

output_n(n,m);

return 0;
}
