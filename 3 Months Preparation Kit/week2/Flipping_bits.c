#include <stdio.h>
int main(){
    long n,k,a[100000];
    scanf("%ld",&n);
    long t=1;
    for(int i=1;i<=32;i++) t*=2;
    for(int i=0;i<n;i++){
        scanf("%ld",&k);
        a[i]=t-k-1;
    }
    for(int i=0;i<n;i++) printf("%ld\n",a[i]);
}
