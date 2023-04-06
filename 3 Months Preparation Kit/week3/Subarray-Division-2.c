#include <stdio.h>
int main(){
    int N,a[10000],d,m,T[10000];
    T[0]=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
      scanf("%d",&a[i]);
    scanf("%d",&d);
    scanf("%d",&m);
    for(int i=1;i<=N;i++) T[i]=T[i-1]+a[i];
    int count=0;
    for(int i=1;i<=N;i++)
       for(int j=1;j<=i;j++)
        if(i-j+1==m&&T[i]-T[j-1]==d) count++;
       
    printf("%d\n",count);
}
