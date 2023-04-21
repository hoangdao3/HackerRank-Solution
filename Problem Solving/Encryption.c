#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int c,h;
    h=floor(sqrt(strlen(s)));
    c=ceil(sqrt(strlen(s)));
    if(h*c<strlen(s))h++;
    // printf("%d %d\n",c,h);
    // c: cot : collumn, h: hang: round; 
    for(int i=0;i<c;i++){
        for(int j=0;j<h;j++){
            if(i+c*j<strlen(s)){
              printf("%c",s[i+c*j]);       
            }
        }
        printf(" ");
    }
    
}
