#include<stdio.h>
void result(int n) {
   int count=0,divisor,a=n;
   while(a!=0){
       divisor=a%10;
       if(divisor!=0)
         if(n%divisor==0) count++;
       a/=10;
   }
   printf("%d\n",count);
}
int main(){
    int n,t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        result(t);
    }
}
