#include <stdio.h>
int main(){
    int a[10000],b[100000],t[10000],k[10000];
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<=10000;i++) {t[i]=0;k[i]=0;}
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        t[a[i]]+=1;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
        k[b[i]]+=1;
    }
    for(int i=0;i<=10000;i++)
    if(t[i]!=k[i]&&t[i]!=0) printf("%d ",i);
}   