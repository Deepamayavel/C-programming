#include <stdio.h>
#include <string.h>

int solve(char *s,int l,int r,int k){
    if(r-l<k) return 0;
    int f[26]={0};
    for(int i=l;i<r;i++) f[s[i]-'a']++;
    for(int i=l;i<r;i++){
        if(f[s[i]-'a']<k){
            int j=i+1; while(j<r && f[s[j]-'a']<k) j++;
            int a=solve(s,l,i,k), b=solve(s,j,r,k);
            return a>b?a:b;
        }
    }
    return r-l;
}

int main(){
    char s[100]; int k;
    printf("Enter string: "); scanf("%s",s);
    printf("Enter k: "); scanf("%d",&k);
    printf("Output: %d\n",solve(s,0,strlen(s),k));
}

