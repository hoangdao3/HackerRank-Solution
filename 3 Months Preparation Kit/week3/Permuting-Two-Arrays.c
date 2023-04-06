#include <stdio.h>
int main(){
    int q,n,k,A[1001],B[1001];
    scanf("%d",&q);
    int t;
    for(int i=1;i<=q;i++){
        scanf("%d%d",&n,&k);
        for(int i=1;i<=n;i++) scanf("%d",&A[i]);
        for(int i=1;i<=n;i++) scanf("%d",&B[i]);
        for(int i=1;i<=n;i++)
          for(int j=1;j<=n;j++) {
              if(B[i]<B[j]){t=B[i];B[i]=B[j];B[j]=t;}  
              if(A[i]>A[j]){t=A[i];A[i]=A[j];A[j]=t;}  
              
          }
       int check=0;
       for(int i=1;i<=n;i++)
          if(A[i]+B[i]<k) check=1;
        if (check==0) {
         printf("YES\n");
        }   
        else printf("NO\n");
    }
}
