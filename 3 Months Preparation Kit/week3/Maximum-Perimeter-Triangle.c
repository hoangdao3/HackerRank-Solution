#include <stdio.h>
long check(long a,long b,long c){
    if(a+b>c&&b+c>a&&a+c>b){
        return a+b+c;
    }
    else return 0;
}

int main(){
    long n,a[100000];
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    long max=0;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++ )
        for(int k=0;k<n;k++){
            if(i!=j&&j!=k&&i!=k){
                if(check(a[i],a[j],a[k])>max) {
                    max=check(a[i],a[j],a[k]);
                    c1=a[i];
                    c2=a[j];
                    c3=a[k];
                } 
            }
        }
    if(max==0) printf("-1");
    else {
        int temp=0;
         if(c1>c2){
        temp=c1;
        c1=c2;
        c2=temp;
    }
    if(c1>c3){
        temp=c1;
        c1=c3;
        c3=temp;
    }
   if(c2>c3){
        temp=c2;
        c2=c3;
        c3=temp;
    }
    printf("%d %d %d",c1,c2,c3);
    }
}
