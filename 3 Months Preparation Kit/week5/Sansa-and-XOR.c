#include <stdio.h>
#include <stdlib.h>
int a[100000];

int main(){
  int T,N,ans,i;
  scanf("%d",&T);
  while(T--){
    ans=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
      scanf("%d",a+i);
    if(N%2){
      for(i=0;i<N;i+=2)
        ans^=a[i];
      printf("%d\n",ans);
    }
    else
      printf("0\n");
  }
  return 0;
}