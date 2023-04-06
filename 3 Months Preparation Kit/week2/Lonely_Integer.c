#include <stdio.h>
int main(){
    int n,a,t[1000];
    scanf("%d",&n);
    for(int i=1;i<=1000;i++) t[i]=0;
    for(int i=1;i<=n;i++){
    scanf("%d",&a);
    t[a]+=1;
    }
    for(int i=1;i<=1000;i++)
     if(t[i]%2==1) 
        {
            printf("%d",i);
            break;
        }
}
