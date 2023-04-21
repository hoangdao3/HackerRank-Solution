#include <stdio.h>
int main(){
    int n,m,a[10000],b[10000];
    long cost,result=0;
    scanf("%ld%d%d",&cost,&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++) scanf("%d",&b[i]);
    
    for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++){
         if(a[i]+b[j]>result&&a[i]+b[j]<=cost) result=a[i]+b[j]; 
    }
    if(result==0) printf("-1");
    else printf("%ld",result);
    
}
