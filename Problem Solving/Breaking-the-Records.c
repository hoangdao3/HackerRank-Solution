#include <stdio.h>
int main(){
    int n,max_count=0,min_count=0;
    long max=0,min=100000000,a[1000000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%ld",&a[i]);
    }
    max=a[1];
    min=a[1];
    for(int i=2;i<=n;i++){
         if(a[i]>max) {
            max=a[i];
            max_count++;
        }
        if(a[i]<min){
            min=a[i];
            min_count++;
        }
    }
       
    printf("%d %d",max_count,min_count);
}
