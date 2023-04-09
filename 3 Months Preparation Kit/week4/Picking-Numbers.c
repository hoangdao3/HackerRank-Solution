#include<stdio.h>

int main(){
    int n,a[1000];
    scanf("%d",&n);
    int maxa=0,mina=100000;
    int result=0;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<n;i++)
    for(int j=i;j<=n;j++){
        if(a[i]>a[j]) {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    for(int i=1;i<n;i++)
    for(int j=i;j<=n;j++){
        maxa=0,mina=100000;
        for(int k=i;k<=j;k++){
            if(a[k]>maxa) maxa=a[k];
            if(a[k]<mina) mina=a[k];
        }
        if(maxa-mina<=1&&j-i+1>result) result=j-i+1;
    }
    printf("%d",result);
}
