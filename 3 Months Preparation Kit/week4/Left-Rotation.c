#include <stdio.h>
int main(){
    int n,d,a[100000];
    scanf("%d",&n);
    scanf("%d",&d);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    d=d%n;
    // d=n-d;
    int b[100000];
    for(int i=1;i<=n;i++){
        if(i+d<=n) b[i]=a[i+d];
        else b[i]=a[i+d-n];
    }
    for(int i=1;i<=n;i++){
        printf("%d ",b[i]);
    }
}  