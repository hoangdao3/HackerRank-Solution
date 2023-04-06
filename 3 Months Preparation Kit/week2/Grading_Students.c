#include<stdio.h>
int main(){
    int N,t,A[10000];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&t);
        if(t<37) A[i]=t;
        else if(t%10==9||t%10==8){
            A[i]=t/10*10+10;
        }
        else if(t%10==4||t%10==3) A[i]=t/10*10+5;
        else if(t%10==7||t%10==2)A[i]=t;
        else  A[i]=t;
    }
    for(int i=0;i<N;i++)
     printf("%d\n",A[i]);
}
