#include <stdio.h>
#include <string.h>
int superDigit(int k){
    int count=0;
    while(k!=0){
        count+=k%10;
        k/=10;
    }
    return count;
}
int main(){
    int k;
    char s[100000];
    scanf("%s",s);
    scanf("%d",&k);
    int sum=0;
    for(int i=0;i<strlen(s);i++){
        sum+=((int) s[i])-48;
    }
    sum=superDigit(sum);
    sum*=k;
    int t=0;
    while(sum>=10){
        sum=superDigit(sum);
    }
    printf("%d",sum);
}
