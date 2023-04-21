#include <stdio.h>
#include <string.h>
int main(){
    int n,t[1000000];
    char s[1000000];
    t[0]=0;
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=1;i<=n;i++){
        if(s[i-1]=='U') t[i]=t[i-1]+1;
        else {
            t[i]=t[i-1]-1;
        }
    }
    int count=0,check=0;
    for(int i=1;i<=n;i++){
        // printf("%d",t[i]);
        if((t[i]==0)&&(t[i-1]<0)) count++; 
    }
    printf("%d",count);
}
