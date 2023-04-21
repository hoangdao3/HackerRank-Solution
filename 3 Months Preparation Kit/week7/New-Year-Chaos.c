#include <stdio.h>
int main(){
    int TestCase,n,a[100000],b[1000000];
    scanf("%d",&TestCase);
    for(int k=1;k<=TestCase;k++){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count=0,check=0;
        for(int i=1;i<=n;i++){
            if(a[i]>i){
                count++;
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                i+=2;
            }
            else
            if(a[i]-i>2) check=1; 
        }
        if(check==0) printf("%d\n",count);
        else printf("Too chaotic\n");
    }
}
