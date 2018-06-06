#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    bool flag = true;
    for (int i = 2; count < n; i++)
    {
        flag = true;
        for (int j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag && i % 5 == 1)
        {
            printf("%d%c", i, count == n - 1 ? '\n' : ' ');
            count += 1;
        }
    }
    return 0;
}