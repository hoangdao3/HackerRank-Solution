#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    int s[1000][1000], n, q;
    scanf("%d", &q);
    for (int i = 1; i <= q; i++)
    {
        scanf("%d", &n);
        for (int i = 1; i <= 2 * n; i++)
            for (int j = 1; j <= 2 * n; j++)
                scanf("%d", &s[i][j]);
        int ans = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                int i2 = n + n + 1 - i;
                int j2 = n + n + 1 - j;
                int mx = max(max(max(s[i][j], s[i][j2]), s[i2][j]), s[i2][j2]);

                ans += mx;
            }
        printf("%d\n", ans);
    }
}
