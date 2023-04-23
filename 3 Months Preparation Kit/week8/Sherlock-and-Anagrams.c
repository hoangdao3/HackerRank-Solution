#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the sherlockAndAnagrams function below.
int check_anagram(char a[], char b[])
{
   int first[26] = {0}, second[26] = {0}, c = 0;

   while (a[c] != '\0') {
      first[a[c]-'a']++;
      c++;
   }
   c = 0;
   while (b[c] != '\0') {
      second[b[c]-'a']++;
      c++;
   }

   for (c = 0; c < 26; c++) {
      if (first[c] != second[c])
         return 0;
   }

   return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100];
        char sub1[100] = {0};
        char sub2[100] = {0};
        scanf("%s", s);

        int count = 0;
        for (int len = 1; len < strlen(s); len++) {
            memset(sub1, 0, len);
            for (int i = 0; i < strlen(s) - len; i++) {
                strncpy(sub1, &s[i], len);
                memset(sub2, 0, len);
                for (int j = i + 1; j < strlen(s) - len + 1; j++) {
                    strncpy(sub2, &s[j], len);
                    if (check_anagram(sub1, sub2) == 1) {
                        count++;
                    }  
                }
            }     
        }

        printf("%d\n", count);


}

return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
