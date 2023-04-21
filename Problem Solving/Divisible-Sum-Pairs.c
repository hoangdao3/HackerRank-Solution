#include <stdio.h>
int main(){
    int n,k,a[100000],b[100000];
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int count=0;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++){
         if((a[i]+a[j])%k==0&&i!=j) count++;
     }
    printf("%d",count/2);
}
