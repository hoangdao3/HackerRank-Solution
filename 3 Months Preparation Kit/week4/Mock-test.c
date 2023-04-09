#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int anagram(char *s)
{
    // Complete this function
    int l = strlen(s), c = 0;
    if (l % 2 != 0)
        return -1;
    int h1[26] = {0}, h2[26] = {0}, i;
    for (i = 0; i < l / 2; i++)
        h1[s[i] - 'a']++;
    for (i = l / 2; i < l; i++)
        h2[s[i] - 'a']++;
    for (i = 0; i < 26; i++)
    {
        h1[i] = h2[i] - h1[i];
            c = c + abs(h1[i]);
    }
    return c/2;
}
int main()
{
    int q;
    scanf("%i", &q);
    for (int a0 = 0; a0 < q; a0++)
    {
        char *s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = anagram(s);
        printf("%d\n", result);
    }
    return 0;
}