#include <stdio.h>
int main(){
    int n,k,a[10000];
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int count=0;
    for(int i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++)
       if((a[i]+a[j])%k==0)
         count++;
    printf("%d",count);
}
