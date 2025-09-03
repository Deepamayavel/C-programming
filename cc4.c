#include <stdio.h>
int main()
{
    int d,m,y,f;
    printf("enter date(dd mm yyyy):");
    scanf("%d %d %d",&d,&m,&y);
    if (m<3)
    {
        m+=12;
        y-=1;
    }
    int k=y%100;
    int j=y/100;
    f=(d+(13*(m+1))/5+k+(k/4)+(j/4)+(5*j))%7;
    char*days[]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
    printf("Day:%s\n",days[f]);
    return 0;
}
