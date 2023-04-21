#include <stdio.h>
int main(){
    double n,a,count1=0,count2=0,count3=0;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf",&a);
        if(a>0) count1+=1;
        if(a<0) count2+=1; 
        if(a==0) count3+=1; 
    }
    printf("%lf\n%lf\n%lf",count1/n,count2/n,count3/n);
}
