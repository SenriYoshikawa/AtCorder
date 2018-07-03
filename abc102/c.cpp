#include <cstdio>
#include <array>
#include <algorithm>
#include <numeric>

int main()
{
    std::array<int, 200005> d;
    std::array<int, 200005> dm;
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &d[i]);
        dm[i] = d[i] - (i + 1);
    }
    std::sort(dm.begin(), dm.begin()+n);
    int b = dm[n / 2];

    int min = 1 << 30;

    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += std::abs(d[i] - (b + i + 1));
    }

    printf("%lld\n", sum);
    return 0;
}
