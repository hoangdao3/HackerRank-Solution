#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// d: ben phai, d-1 ben trai
int check(long n){
     long m=n,k=0, a[10000];
    n=n*n;
   
    while(n!=0){
        k+=1;
        a[k]=n%10;
        n/=10;
    }
    int left=0,right=0;
    if(k%2==0){
        for(int i=k;i>0;i--){
          if(i<=k/2){
              right=right*10+a[i];
          }
          if(i>k/2){
              left=left*10+a[i];
          }
        }
    }
    else {
         for(int i=k;i>0;i--){
          if(i<=k/2+1){
              right=right*10+a[i];
          }
          if(i>k/2+1){
              left=left*10+a[i];
          }
        }
    }
    if(m==(left+right)) return 1;
     return 0; 
}
int main(){
    int p,q,count=0;
    scanf("%d",&p);
    scanf("%d",&q);
    for(int i=p;i<=q;i++){
        if(check(i)==1){
            printf("%d ",i);
            count=1;
        }
    }
    if(count==0) printf("INVALID RANGE");
    return 0;
}
