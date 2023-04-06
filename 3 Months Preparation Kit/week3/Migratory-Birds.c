#include <stdio.h>

int main(){
    int n,a[1000000],t[1000000];
    scanf("%d",&n);
    for(int i=0;i<=1000000;i++) t[i]=0;
    for(int i=0;i<=n;i++) {
        scanf("%d",&a[i]);
        t[a[i]]+=1;
    }
    int max=0,value=0;
    for(int i=1;i<=1000000;i++)
      if(t[i]>max){
          max=t[i];
          value=i;
      }
    printf("%d",value);
}
