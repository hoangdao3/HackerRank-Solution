#include <stdio.h>
int main()
{
    int n, a[100000], b[100000], g, max, k, count, check;
    scanf("%d", &g);
    for (int i = 1; i <= g; i++)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        b[1] = 1;
        k = 1;
        max = a[1];
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > max)
            {
                b[i] = i;
                k = i;
                max = a[i];
            }
            else
                b[i] = k;
        }
        count = 0;
        b[0] = 0;
        check = 1;
        for (int i = 1; i <= n; i++)
        {
            if (b[i] > check)
            {
                check = b[i];
                count++;
            }
        }
        if (count % 2 == 1)
            printf("ANDY\n");
        else
            printf("BOB\n");
    }
}
