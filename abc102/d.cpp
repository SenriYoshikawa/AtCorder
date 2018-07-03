#include <cstdio>
#include <array>
#include <algorithm>

std::array<int, 200005> d;
std::array<long long, 200005> ds;

long long min_max_diff(int l, int m, int r, int n)
{
    long long p1 = ds[l];
    long long p2 = ds[m] - ds[l];
    long long p3 = ds[r] - ds[m];
    long long p4 = ds[n] - ds[r];
    long long min = std::min(p1, std::min(p2, std::min(p3, p4)));
    long long max = std::max(p1, std::max(p2, std::max(p3, p4)));
    // printf("p1 = %lld p2 = %lld p3 = %lld p4 = %lld\n", p1, p2, p3, p4);
    return max - min;
}

int main()
{
    int n;
    scanf("%d", &n);
    ds[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &d[i]);
        ds[i] = ds[i - 1] + d[i];
    }

    int l = 1, r = 3;
    long long ans = 1LL << 60, crnt, next;
    for (int m = 2; m < n - 1; ++m)
    {
        while(std::abs((ds[m] - ds[l]) - (ds[l] - ds[0])) > std::abs((ds[m] - ds[l + 1]) - (ds[l + 1] - ds[0])) && l < m)
        {
            l += 1;
        }

        while(std::abs((ds[n] - ds[r]) - (ds[r] - ds[m])) > std::abs((ds[n] - ds[r + 1]) - (ds[r + 1] - ds[m])) && r < n)
        {
            r += 1;
        }
        ans = std::min(ans, min_max_diff(l, m, r, n));
        // printf("m = %d l = %d r = %d ans = %lld\n", m, l, r, ans);
    }
    printf("%lld\n", ans);

    return 0;
}
