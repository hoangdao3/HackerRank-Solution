#include <stdio.h>
#include <string.h>
int main(){
    int a[10000];
    char s[1000];
    for(int i=0;i<=1000;i++) a[i]=0;
      scanf(" %[^\n]s", s);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if((int)s[i]<123&&(int)s[i]>96)a[(int)s[i]-32]+=1;        
        if((int)s[i]<91&&s[i]!=' ')a[(int)s[i]]+=1;
    }
    int check=1;
    for(int i=65;i<=90;i++)
       if(a[i]==0) check=0;
    if(check==1) printf("pangram");
    else printf("not pangram");
}
