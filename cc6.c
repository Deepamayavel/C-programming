#include<stdio.h>
int main()
{
    int i,j,f;
    int n=5;
    printf("right triangle:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nPyramid:\n");
    for(i=1;i<=n;i++)
    {
        for(f=i;f<n;f++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nDiamond:\n");
    // upper part
    for(i=1;i<=n;i++)
    {
        for(f=i;f<n;f++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower part
    for(i=n-1;i>=1;i--)
    {
        for(f=i;f<n;f++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nRight Arrow:\n");
    for(i=1;i<=n;i++)
    {
        for(f=1;f<i;f++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(f=1;f<i;f++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
