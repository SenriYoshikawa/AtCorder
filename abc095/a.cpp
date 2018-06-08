#include <cstdio>

int main()
{
    int count = 0;
    for (int i = 0; i < 3; ++i)
    {
        char t;
        scanf("%c", &t);
        if (t == 'o')
        {
            count++;
        }
    }
    printf("%d\n", (7 + count) * 100);
    return 0;
}