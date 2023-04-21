#include <stdio.h>
#include <string.h>
int main(){
    int a[100000]={0};
    char s[100000];
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++){
        a[(int)s[i]]+=1;
    }
    int check=0,check1=0;
    int X=a[(int)s[0]];
    for(int i=0;i<=100000;i++){
        if(a[i]>0&&a[i]!=X) check+=1;
    }
    if(check>1) printf("NO");
    else printf("YES");
}
