#include <stdio.h>
#include <stdbool.h>


int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);

    int current_dist = 0;
    int available = -1;
    int counter   = 0;
    bool failed   = false;
    for(int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);

        if(!failed) {
            if(temp)
                available = i;
            
            if(current_dist == k - 1 && available != -1) {
                current_dist = -(k - 1 - (i - available));
                available    = -1;
                counter++;
            } else if(current_dist > k - 1) {
                failed = true;
            } else {
                current_dist++;
            }
        }
    }

    if(current_dist > 0)
        counter++;

    if(!failed)
        printf("%d\n", counter);
    else
        puts("-1");

    return 0;
}
