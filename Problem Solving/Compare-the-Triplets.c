#include <stdio.h>

int main(){
    long a,b,c,x,y,z;
    int count1=0,count2=0;
    scanf("%ld%ld%ld",&a,&b,&c);
    scanf("%ld%ld%ld",&x,&y,&z);
    if(a>x) count1+=1; 
       else if(a<x) count2+=1;
    if(b>y) count1+=1;    
       else if (b<y) count2+=1;    
    if(c>z) count1+=1;    
       else if (c<z)count2+=1;
    printf("%d %d",count1,count2);
}
