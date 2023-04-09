#include <stdio.h>
#include <math.h>
int main(){
    // int x1,v1,x2,v2;
    // scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    // int check=0;
    // for(int i=1;i<=10000;i++){
    //     if((x1+v1*i)==(x2+v2*i)) check=1;
    // }
    // if (check==1) printf("YES");
    // else printf("NO");
    int x1,v1,x2,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    int check=0;
    if(v1>v2&&x1<x2&&(x2-x1)%(v1-v2)==0) printf("YES");
      else 
      if(v1<v2&&x1>x2&&(x2-x1)%(v1-v2)==0) printf("YES");
      else if (v1==v2&&x1!=x2) printf("NO");
      else printf("NO");
    
}