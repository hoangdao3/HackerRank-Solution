#include<stdio.h>
#include<string.h>
int main(){
    int n,now=0;
    int A[1000005];
    char s[1000000];
    A[0]=0;
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]=='U') A[i+1]=A[i]+1;
        if(s[i]=='D') A[i+1]=A[i]-1;   
    }
    int count=0,check=0;
    for(int i=1;i<= n;i++){
        if(A[i]<0&&A[i-1]>=0) check=1;
        if(A[i]>=0&&check==1) {
            count+=1;
            check=0;
        }
        // printf("%d ",A[i]);
    }
     printf("%d",count);
}
