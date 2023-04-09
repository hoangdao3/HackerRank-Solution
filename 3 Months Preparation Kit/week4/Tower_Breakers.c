#include <stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    while(T > 0) {
        int N, M;
        scanf("%d%d",&N,&M);
        if(M == 1) {
            printf("2\n"); // Player 1 loses if all towers are height 1 (edge case)
        } else if(N % 2 == 0) {
            printf("2\n"); // Player 1 loses if there are an even number of towers
        } else {
            printf("1\n"); // Player 1 wins
        }
        T--;
    }   
    return 0;
}