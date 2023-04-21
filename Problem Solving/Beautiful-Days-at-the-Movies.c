#include <stdio.h>
int check(int a,int k){
    int c=0,b=a;
    while(b!=0){
        c=c*10+b%10;
        b/=10;
    }
    if((a-c)%k==0) return 1;
    return 0;
}
int main(){
    int result=0;
    int begin,end,k;
    scanf("%d%d%d",&begin,&end,&k);
    for(int i=begin;i<=end;i++){
         if(check(i,k)==1) result++;
    }
    printf("%d",result);
}
