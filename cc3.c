#include<stdio.h>
int main()
{
    int t,p;
    printf("enter value of t:");
    scanf("%d",&t);
    if(t>0 && t<=2)
    {
         p=20;
    }
    else if((t>13 && t<=16)||(t>30))
    {
         p=4*(t+2);
    }
    else
    {
         p=4*(t*t + 2*t);
    }
    printf("the value of p:%d",p);
    return 0;
}

