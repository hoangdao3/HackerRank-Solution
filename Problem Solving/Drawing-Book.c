#include <stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    n=n/2*2;
    p=p/2*2;
    if(p>n-p) printf("%d",(n-p)/2);
    else printf("%d",p/2);
}
