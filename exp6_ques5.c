#include <stdio.h>
#include <string.h>

void REVERSE(char str[])
{
    int i = strlen(str) - 1;
    while(i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
}

int main()
{
    char s[100];
    scanf("%s", s);
    REVERSE(s);
    return 0;
}

