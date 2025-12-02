#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

int main() {
    char s[MAX], strStk[100][MAX], cur[MAX]="", tmp[MAX];
    int numStk[100], ns=-1, ss=-1, num=0;
    printf("Enter encoded string: ");
    scanf("%s", s);

    for (int i=0; s[i]; i++) {
        if (isdigit(s[i])) num = num*10 + s[i]-'0';
        else if (s[i]=='[') {
            numStk[++ns]=num; num=0;
            strcpy(strStk[++ss], cur); cur[0]='\0';
        } else if (s[i]==']') {
            int t=numStk[ns--]; tmp[0]='\0';
            for (int j=0;j<t;j++) strcat(tmp, cur);
            strcat(strcpy(cur, strStk[ss--]), tmp);
        } else {
            int l=strlen(cur); cur[l]=s[i]; cur[l+1]='\0';
        }
    }
    printf("Decoded string: %s\n", cur);
    return 0;
}
