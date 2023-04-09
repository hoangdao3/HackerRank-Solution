#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    char s[100000];
    // for(int i=1;i<=n;i++) 
    {
        scanf("%s",s);
        for(int i=0;i<=strlen(s)-1;i=i+2) printf("%c",s[i]);
        printf(" ");
        for(int i=1;i<=strlen(s)-1;i=i+2) printf("%c",s[i]);
        printf("\n");

    }   

    return 0;
}
