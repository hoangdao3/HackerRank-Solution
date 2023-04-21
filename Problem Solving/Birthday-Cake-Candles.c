#include <stdio.h>
int main(){
    int max=0,n,a,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>max) {
             max=a;count=1;
        }
        else if(a==max) count+=1;       
    }
    printf("%d",count);
}
