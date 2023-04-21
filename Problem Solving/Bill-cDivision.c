#include <stdio.h>
#include <math.h>
int main(){
    int n,k,bill,result,t;
    long sum=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(i-1!=k) sum+=t;
    }
    scanf("%d",&bill);
    result=bill-sum/2;
    if(result!=0) printf("%d",result);
    else printf("Bon Appetit");
}
