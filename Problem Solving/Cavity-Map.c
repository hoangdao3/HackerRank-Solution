#include<stdio.h>
#include <string.h>
int main(){
    int a[1000][1000]={0},n,b[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);
        for(int j=n;j>0;j--){
            a[i][j]=b[i]%10;
            b[i]/=10;
        }
    }  
    for(int i=2;i<n;i++){
        for(int j=2;j<n;j++){
            if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1]){
                a[i][j]=-1;
            }
        }
    }  
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==-1) printf("X");
            else {
                printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }
}
