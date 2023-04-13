#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        int result = 0;

        scanf("%d", &n);
        int counter_big = 0;
        int counter     = 0;
        int max         = 0;
        for(int i = 0; i < n; i++) {
            int temp;
            scanf("%d", &temp);
            result ^= temp;
            if(temp > 0) {
                if(temp > 1)
                    counter_big++;
                counter++;
            }

            if(temp > max)
                max = temp;
        }

        if(counter_big <= 1) {
            if(counter & 1 && max == 1)
                puts("Second");
            else
                puts("First");
        } else {
            if(result)
                puts("First");
            else
                puts("Second");
        }
    }

    return 0;
}
