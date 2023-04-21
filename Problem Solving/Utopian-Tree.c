#include <stdio.h>
int main(){
    int n,result=1,test_case;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       scanf("%d",&test_case);
       result=1;
       for(int i=1;i<=test_case;i++){
        if(i%2==1) result*=2;
         else result++;
    }
    printf("%d\n",result);
    }
}
