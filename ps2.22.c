#include<stdio.h>
int main()
{
    float x,y;
    printf("enter x and y:");
    scanf("%f %f",&x,&y);
    if((x*x+y*y)<25)
    {
        printf("the point lies inside a circle.\n");
    }
    else if((x*x+y*y)==25)
    {
        printf("the point lies on a circle.\n");
    }
    else
    {
        printf("the point lies outside a circle");
    }
    return 0;

}
