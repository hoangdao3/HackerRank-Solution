#include <stdio.h>
int main(){
    int n;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",s);
    int check1=1,check2=1,check3=1,check4=1,check5=1; 
    if(n>=6) check1=0;
    for(int i=0;i<n;i++){
        int t=(int) s[i];
        if(t<=57&&t>=48) check2=0;
        if(t>=97&&t<=122) check3=0;
        if(t>=65&&t<=90) check4=0;
        if(s[i]=='!') check5=0;if(s[i]=='@') check5=0;if(s[i]=='#') check5=0;if(s[i]=='$') check5=0;
        if(s[i]=='%') check5=0;if(s[i]=='^') check5=0;if(s[i]=='&') check5=0;if(s[i]=='*') check5=0;
        if(s[i]=='(') check5=0;if(s[i]==')') check5=0;if(s[i]=='-') check5=0;if(s[i]=='+') check5=0;
        if(s[i]=='"') check5=0;
    }
// check1: Its length is at least .
// check2: It contains at least one digit.
// check3: It contains at least one lowercase English character.
// check4: It contains at least one uppercase English character.
// check5: It contains at least one special character. The special characters are: !@#$%^&*()-+
    int result=0;
    result=check2+check3+check4+check5;
    if(6-n>result) result=6-n;
    printf("%d",result);
}
