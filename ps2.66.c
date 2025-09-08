#include<stdio.h>
#include<math.h>
int main()
{
double x,j0=0.0;
double term;
int n;
printf("enter a real no x:");
scanf("%lf",&x);
for(n=0;n<20;n++)
{
    double num=pow(-1,n)*pow(x/2,2*n);
    double fact=1;
    int i;
    for(i=1;i<=n;i++)
        {
            fact*=i;
        }
   fact=fact*fact;
   term=num/fact;
   j0+=term;
}
printf("j0(%.2f)~~%.6f\n",x,j0);
return 0;
}
