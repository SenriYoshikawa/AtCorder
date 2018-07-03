#include <cstdio>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 100> d;
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &d[i]);
    }

    int diff = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(i-j)
            {
                diff = std::max(diff, std::abs(d[i]-d[j]));
            }
        }
    }
    printf("%d\n", diff);
    return 0;
}