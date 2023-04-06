#include <stdio.h>
#include<string.h>
int main(){
    char s[100];
    int n;
    scanf("%s",s);
    int count=0;
    for(int i=0;i<strlen(s);i++)
        {
            if(s[i]!='S'&&i%3==0) count+=1;
            if(s[i]!='O'&&i%3==1) count+=1;
            if(s[i]!='S'&&i%3==2) count+=1;
            
        }
    printf("%d",count);
}
