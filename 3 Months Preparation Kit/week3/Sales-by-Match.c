#include <stdio.h>

int main(){
    int n,a[1000],t;
    for(int i=1;i<=100;i++) a[i]=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        a[t]+=1;
    }
    int count=0;
    for(int i=1;i<=100;i++){
        count+=a[i]/2;
    }
    printf("%d",count);
}
