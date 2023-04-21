#include <stdio.h>
int main(){
    int n,a,k,max=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) {
        scanf("%d",&a);
        if(a>max) max=a;
    }
    if(max<k) printf("0");
    else printf("%d",max-k);
}
