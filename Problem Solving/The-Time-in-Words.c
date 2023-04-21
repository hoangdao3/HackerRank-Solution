#include <stdio.h>

const char *min[] = {
    "",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "quarter",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
    "twenty",
    "twenty one",
    "twenty two",
    "twenty three",
    "twenty four",
    "twenty five",
    "twenty six",
    "twenty senen",
    "twenty eight",
    "twenty nine",
    "half past",
};

//#define stMin (sizeof(min) / sizeof(const char *))

int main() {
    int H, M;
    
    //int T;
    //scanf(" %d", &T);
    //while(T--) {
        
    scanf(" %d %d", &H, &M);
    //printf("\n%d:%d = ", H, M);

    if(M <= 30) {
        if(M == 0)       printf("%s o' clock", min[H]);
        else if(M == 1)  printf("%s minute past %s", min[M], min[H]);
        else if(M == 15) printf("quarter past %s", min[H]);
        else if(M == 30) printf("half past %s", min[H]);
        else             printf("%s minutes past %s", min[M], min[H]);
    }
    else {
        M = 60 - M;
        if(++H == 13)    H = 1;
        
        if(M == 1)       printf("%s minute to %s", min[M], min[H]);
        else if(M == 15) printf("quarter to %s", min[H]);
        else             printf("%s minutes to %s", min[M], min[H]);
    }
    
    //printf("\n");

    //}
    return 0;
}
