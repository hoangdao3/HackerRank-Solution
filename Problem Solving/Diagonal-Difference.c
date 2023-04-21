#include <stdio.h>
#include <math.h>
int main(){
    long n,a;
    long sum=0;
    scanf("%ld",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
     {
         scanf("%ld",&a);
         if(i==j) sum-=a;
         if(i+j==n+1) sum+=a;
     }
     printf("%ld",abs(sum));
    
}
