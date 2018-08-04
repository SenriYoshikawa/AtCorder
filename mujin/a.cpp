#include <cstdio>

int main()
{
    char s[64];
    scanf("%s", s);

    if(s[0] == 'M' && s[1] == 'U' && s[2] == 'J' && s[3] == 'I' && s[4] == 'N')
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}