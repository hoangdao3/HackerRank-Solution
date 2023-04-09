#include <stdio.h>
#include <string.h>
int main()
{
    char s[100000];
    int n, k, t;
    scanf("%d", &n);
    scanf("%s", s);
    scanf("%d", &k);
    k %= 26;
    n = strlen(s);
    char p;
    for (int i = 0; i < n; i++)
    {
        t = (int)s[i];
        if (t >= 65 && t <= 90)
        {
            if (t + k > 90)
            {
                    char p = (char)(t + k - 26);
                    printf("%c", p);
                    }

                else printf("%c", (char)(t + k));
            }
            else
            {
                if (t >= 97 && t <= 122)
                {
                    if (t + k > 122)
                    {
                        char p = (char)(t + k - 26);
                        printf("%c", p);
                    }
                    else
                        printf("%c", (char)(t + k));
                }
            }
                    
            if(t<65||t>122||(t>90&&t<97)) 
            printf("%c", s[i]);
        }
    }