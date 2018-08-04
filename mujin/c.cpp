#include <cstdio>

int b[2048][2048];
int t[2048][2048][4]; // up ri lo le

int main()
{
    int n, m;
    char temp;

    scanf("%d %d", &n, &m);
    scanf("%c", &temp);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%c", &temp);
            b[i][j] = temp == '.' ? 0 : 1;
        }
        scanf("%c", &temp);
    }

    // for(int i = 0; i < n; ++i)
    // {
    //     for(int j = 0; j < m; ++j)
    //     {
    //         printf("%d", b[i][j]);
    //     }
    //     printf("\n");
    // }

    // up
    for (int j = 0; j < m; ++j)
    {
        t[0][j][0] = 0;
        int count = 0;
        for (int i = 1; i < n; ++i)
        {
            if (b[i][j] == 0 && b[i - 1][j] == 0)
            {
                count += 1;
            }
            else
            {
                count = 0;
            }
            t[i][j][0] = count;
        }
    }

    // right
    for (int i = 0; i < n; ++i)
    {
        t[i][m - 1][1] = 0;
        int count = 0;
        for (int j = m - 2; j >= 0; --j)
        {
            if (b[i][j] == 0 && b[i][j + 1] == 0)
            {
                count += 1;
            }
            else
            {
                count = 0;
            }
            t[i][j][1] = count;
        }
    }

    // down
    for (int j = 0; j < m; ++j)
    {
        t[n - 1][j][2] = 0;
        int count = 0;
        for (int i = n - 2; i >= 0; --i)
        {
            if (b[i][j] == 0 && b[i + 1][j] == 0)
            {
                count += 1;
            }
            else
            {
                count = 0;
            }
            t[i][j][2] = count;
        }
    }

    // left
    for (int i = 0; i < n; ++i)
    {
        t[i][0][3] = 0;
        int count = 0;
        for (int j = 1; j < m; ++j)
        {
            if (b[i][j] == 0 && b[i][j - 1] == 0)
            {
                count += 1;
            }
            else
            {
                count = 0;
            }
            t[i][j][3] = count;
        }
    }

    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < m; ++j)
    //     {
    //         printf("%d", t[i][j][3]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (b[i][j] == 0)
            {
                sum += t[i][j][2] * t[i][j][1];
                sum += t[i][j][3] * t[i][j][2];
                sum += t[i][j][0] * t[i][j][3];
                sum += t[i][j][1] * t[i][j][0];
            }
        }
    }

    printf("%lld\n", sum);
}