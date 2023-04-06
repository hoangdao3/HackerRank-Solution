#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int N,maxCount=0,minCount=0;
   scanf("%d",&N);
   long A[1000],maxRecord=0,minRecord=100000000;
   for(int i=0;i<N;i++){
       scanf("%ld",&A[i]);
   }
   maxRecord=A[0],minRecord=A[0];
   for(int i=1;i<N;i++){
       if(A[i]>maxRecord){
           maxRecord=A[i];
           maxCount+=1;
       }
        if(A[i]<minRecord){
           minRecord=A[i];
           minCount+=1;
       }
   }
   printf("%d %d",maxCount,minCount);
}
