#include <stdio.h>
int main(){
    int HOUSE_begin,HOUSE_end,a,b;
    scanf("%d%d",&HOUSE_begin,&HOUSE_end);
    scanf("%d%d",&a,&b);
    int m,n;
    scanf("%d%d",&m,&n);
    int count1=0,count2=0,t;
    for(int i=1;i<=m;i++){
        scanf("%d",&t);
        if(a+t>=HOUSE_begin&&a+t<=HOUSE_end) count1+=1;
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(b+t>=HOUSE_begin&&b+t<=HOUSE_end) count2+=1;
    }
    printf("%d\n%d",count1,count2);
}

