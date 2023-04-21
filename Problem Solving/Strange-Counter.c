#include <stdio.h>
int main(){
    long n,result,k=3,t=1;
    scanf("%ld",&n);
    while(t+k<=n){
        t=t+k;
        k=k*2;
    }
    result=k-(n-t);
    printf("%ld",result);
}   
