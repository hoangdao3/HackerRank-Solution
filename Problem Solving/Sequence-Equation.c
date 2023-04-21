#include <stdio.h>
int main(){
    int n,a[100000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
      for(int i=1;i<=n;i++)
      {
         for(int j=1;j<=n;j++) 
         if(a[a[j]]==i) printf("%d\n",j);
      }
}
