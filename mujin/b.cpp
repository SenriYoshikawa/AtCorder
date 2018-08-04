#include <cstdio>

int main()
{
    int n;
    char s[128];
    bool flag = false;

    scanf("%d %s", &n, s);

    if (n == 0)
    {
        printf("Yes\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '+')
        {
            n += 1;
        }
        else
        {
            n -= 1;
        }

        if (flag == false && n == 0)
        {
            flag = true;
        }
    }

    if (flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}