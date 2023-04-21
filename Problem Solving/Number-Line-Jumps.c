#include <stdio.h>
int main(){
    int x1,x2,v1,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    int check=0;
    for(int i=0;i<=10000;i++){
        if(x1+v1*i==x2+v2*i){
            check=1;
            break;
        }
    }
    if(check==1) printf("YES");
    else printf("NO");
}
