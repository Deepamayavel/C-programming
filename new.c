#include<stdio.h>
struct name{
    char fn[20];
    char ln[20];
};
struct acc{
    int acc_no;
    char acc_details[20];
};
int main()
{
    int n;
    struct name m[n];
    printf("enter the number 1:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       // printf("\ndetails of a acc_holder 1: %d",i+1);
        printf("\nenter the fn: ");
        scanf("%s",m[i].fn);
        printf("\nenter the ln: ");
        scanf("%s",m[i].ln);
    }
    int b;
    struct acc a[b];
    printf("enter the number 2:");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        printf("\ndetails of a acc_holder 1.5: %d",i+1);
        printf("\nenter the acc_no: ");
        scanf("%d",a[i].acc_no);
        printf("\nenter the acc_details: ");
        scanf("%s",a[i].acc_details);
    }
    return 0;
}
