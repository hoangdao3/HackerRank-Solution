#include <stdio.h>
#include <string.h>
typedef unsigned long long int Long; char s[33]; int q; Long x;
int isZeroLead(int i) { 
    return s[i] == '0'; 
}
Long read(int i, int sz){
    char *pt = s + i;
    Long ans = 0;
    while (sz-- && *pt)
    {
        ans = ans * 10 + (*pt - '0');
        pt++;
    }
    return ans;
}
int digs(Long x){
    int ll = 0;
    while (x)
    {
        ll++;
        x /= 10;
    }
    return ll;
}
int check(Long fst, int len){
    Long last = fst, curr;
    int lsz = digs(fst); // digs: so luong so chu so
    for (int i = lsz; i < len; i += lsz)
    {
        if (isZeroLead(i))
            return 0;
        if (digs(last + 1) != digs(last))
        {
            lsz++;
        }

        curr = read(i, lsz);
        if (curr - last != 1)
            return 0;
        last = curr;
    }
    return 1;
}
int main(){
    scanf("%d", &q);
    while (q--)
    {
        scanf("%s", s);
        Long x = -1, fst;
        int len=strlen(s);
        for (int i = 1; i <= (len >> 1); i++)
        {
            fst = read(0, i); //read: chuyển từ xâu sang số
            // x : là kết quả
            if (check(fst, len))
            {
                x = fst;
                break;
            }
        }
        if (x == -1)
            puts("NO");
        else
            printf("YES %lld\n", x);
    }

    return 0;
}