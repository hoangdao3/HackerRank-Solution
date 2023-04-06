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
int main()
{
  int N,A[100];
  double count1=0,count2=0,count0=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++) {
      scanf("%d",&A[i]);
      if(A[i]>0)count1+=1;
      if(A[i]==0) count0+=1;
      if(A[i]<0) count2+=1;
    //   count1: +, count0 : 0, count2: -
    }
   printf("%.5f\n%.5f\n%.5f",count1/N,count2/N,count0/N);
return 0;
}
