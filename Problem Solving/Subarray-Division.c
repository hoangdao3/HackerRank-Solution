#include <stdio.h>
int main(){
    int a[100000],d,m,n;
    long t[10000];
    t[0]=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]);
        t[i]=t[i-1]+a[i];
    }
    scanf("%d%d",&d,&m);
    int count=0;
    for(int i=1;i<=n-m+1;i++){
        if(t[i+m-1]-t[i-1]==d) count++;
    }
    printf("%d", count);
}   
