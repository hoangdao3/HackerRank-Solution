#include <stdio.h>
#include <string.h>
int main(){
    int a[27];
    for(int i=1;i<=26;i++) scanf("%d",&a[i]);
    char s[1000];
    scanf("%s",s);
    int result=0;
    for(int i=1;i<=strlen(s);i++){
        if(a[((int) s[i-1])-96]>result) result=a[((int) s[i-1])-96];
    }
    result*=strlen(s);
    printf("%d",result);
}
