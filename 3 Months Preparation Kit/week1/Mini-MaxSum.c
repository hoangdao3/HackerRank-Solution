#include<stdio.h>

int main(){
    long count=0, N=5,A[10000];
    for(int i=0;i<5;i++)
    {
         scanf("%ld",&A[i]);
         count+=A[i];       
     }
    for(int i=0;i<N-1;i++)
     for(int j=i+1;j<N;j++)
     {
         if(A[i]>A[j]){
             int t=A[i];
             A[i]=A[j];
             A[j]=t;
         }
     }
    printf("%ld %ld ",count-A[N-1],count-A[0]);
    return 0;
}
