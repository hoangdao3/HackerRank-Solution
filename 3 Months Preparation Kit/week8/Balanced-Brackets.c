#include <stdio.h>
#include <string.h>
int main(){
    char s[10000];
    int testcase;
     int count1=0,count2=0,count3=0,check=0;
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++){
        scanf("%s",s);
        count1=0,count2=0,count3=0,check=0; 
        for(int i=0;i<strlen(s);i++){
         if(s[i]=='{') count1++;
            if(s[i]=='}') count1--;
            if(s[i]=='[') count2++;
            if(s[i]==']') count2--;
            if(s[i]=='(') count3++;
            if(s[i]==')') count3--;
            // if(s[i]==')'&&s[i-1]!='('&&s[i-1]!=')') check=1;
            if((s[i]==']'&&s[i-1]=='(')) check=1;
            if(count1<0) check=1;
            if(count2<0) check=1;
            if(count3<0) check=1;
            
        }
        if(count1==0&&count2==0&&count3==0&&check==0) printf("YES\n");
        else printf("NO\n");
    }
}
