#include<stdio.h>
int main(){
    long t[1000000],A[1000000];
    long N;
    scanf("%ld",&N);
    for(int i=0;i<100;i++) t[i]=0;
    for(int i=0;i<N;i++){
        scanf("%ld",&A[i]);
        t[A[i]]+=1;
    }
    for(int i=0;i<100;i++) 
     printf("%ld ",t[i]);
    
}
