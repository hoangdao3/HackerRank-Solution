#include <stdio.h>

int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int result =0;
    if(p%2==1) p-=1;
    if(n%2==1) n-=1;
    
    if(p>(n/2)){
        result=(n-p)/2;
        printf("%d",result );
    }
    else {
        result=(p-0)/2;
        printf("%d",result);
    }
    return 0;
}
