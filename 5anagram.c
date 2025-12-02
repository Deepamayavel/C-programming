#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],t[10];
    int c[20]={0};
    int i;
    printf("enter string 1: ");
    scanf("%s",s);
    printf("enter string 2: ");
    scanf("%s",t);
    if(strlen(s)!=strlen(t))
    {
        printf("false\n");
        return 0;
    }
    for(i=0;s[i]!='\0';i++)
    {
        c[s[i]-'a']++;
        c[t[i]-'a']--;
    }
    for(i=0;i<20;i++)
    {
        if(c[i]!=0)
        {
            printf("false\n");
            return 0;
        }
    }
    printf("true\n");
    return 0;
}
