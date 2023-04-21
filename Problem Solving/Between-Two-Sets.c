#include <stdio.h>
long gcd(long a, long b) {
    long tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main(){
    long a[100000],b[100000];
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++) scanf("%ld",&a[i]);
    for(int i=1;i<=n;i++) scanf("%ld",&b[i]);
    long BCNN=1;
    int count=0;
    for(int i=1;i<=m;i++){
        BCNN=BCNN*a[i]/gcd(BCNN, a[i]);
    }
    for(int i=1;i<=100;i++) 
       {
           int check=0;
           for(int j=1;j<=n;j++) 
             if(b[j]%(BCNN*i)!=0) check=1;
            if (check==0) count++;
       }
    printf("%d",count);
}
