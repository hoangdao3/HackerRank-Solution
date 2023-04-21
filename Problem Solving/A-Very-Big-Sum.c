#include <stdio.h>

int main(){
    long a,n,sum=0;
    scanf("%ld",&n);
    for(int i=1;i<=n;i++){
    scanf("%ld",&a);
        sum+=a;
    }
    printf("%ld",sum);
}
