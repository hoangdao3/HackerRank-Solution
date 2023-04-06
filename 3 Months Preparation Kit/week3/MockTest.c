#include <stdio.h>
int UCLN(int a, int b)
{
    int max;
    if (a > b)
    {

        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0)
            {
                if (a % i == 0)
                  max = i;
            }
        }
        return max;
    }
    if (a < b)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                if (b % i == 0)
                    max = i;
            }
        }
        return max;
    }
    else
        return a;
}
int main()
{
    int n1, n2, a[1000], b[1000];
    scanf("%d%d", &n1, &n2);
    int BCNN = 1;
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        BCNN = BCNN * a[i] / UCLN(BCNN, a[i]);
    }
    int minB = 1000000;
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        if (b[i] < minB)
            minB = b[i];
    }
    int min = 1000000;
    int result = 0;
    for (int i = 1; i <= minB / BCNN; i++)
    {
        int count = 0;
        for (int j = 0; j < n2; j++)
        {
            if (b[j] % (BCNN * i) != 0)
                count = 1;
        }
        if (count == 0)
            result += 1;
    }
    printf("%d", result);
}
