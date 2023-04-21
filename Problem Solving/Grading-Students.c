#include <stdio.h>
void xuli(int a){
    int result=a;
    if(a%10==3||a%10==4) result=a/10*10+5;
    if(a%10==8||a%10==9) result=a/10*10+10;
    if(result<40) printf("%d\n",a);
    else printf("%d\n",result);
}
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        xuli(a);
    }
    return 0;
}
