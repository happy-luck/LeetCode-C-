#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    char k[2 * n + 1];
    k[0] = 0;
    strcat(k, s);
    strcat(k, s);
    printf("%s\n", k);
    printf("%d\n", (int)(strstr(k + 1, s) - k));
    return strstr(k + 1, s) - k != n;
}

int main() 
{
    char* s = "abcabc";
    bool res;
    res = repeatedSubstringPattern(s);
    printf("%d", res);
}

//KMP算法还未学习