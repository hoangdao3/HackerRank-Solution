#include <stdio.h>
int main(){
    int result=0,t;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++){
        scanf("%d",&t);
        if(i==j) {result+=t;}
        if(i+j+1==n) {result-=t; }
    }
    if(result<0) result=-result;
    printf("%d",result);
}
