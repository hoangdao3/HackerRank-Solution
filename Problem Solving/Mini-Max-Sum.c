#include <stdio.h>
int main(){
    long sum=0,MAX=0,a,MIN=10000000000;
    for(int i=1;i<=5;i++){
        scanf("%ld",&a);
        sum+=a;
        if(a>MAX) MAX=a;
        if(a<MIN) MIN=a;
    }
    printf("%ld %ld",sum-MAX,sum-MIN);
}
