#include<stdio.h>
int main(){
    int n,a[1000],t;
    scanf("%d",&n);
    for(int i=0;i<=100;i++) a[i]=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        a[t]+=1;
    }
    int result=0;
    for(int i=1;i<=100;i++){
        result+=a[i]/2;
    }
    printf("%d",result);
}
