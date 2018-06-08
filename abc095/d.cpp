#include <cstdio>
#include <array>
#include <algorithm>

using namespace std;

struct discal
{
    long long dis;
    long long cal;
};

int main()
{
    int n;
    long long c;
    scanf("%d %lld", &n, &c);
    std::array<discal, 100003> a;
    for (int i = 1; i <= n; ++i)
    {
        scanf("%lld %lld", &a[i].dis, &a[i].cal);
    }
    a[0] = {0, 0};
    a[n + 1] = {0, c};
    a[n + 2] = {0, c};

    //sort(a.begin(), a.begin() + n, [](auto const &lhs, auto const &rhs) { return lhs.dis < rhs.dis; });

    discal rdiscal = {0, 0}, ldiscal = {0, 0};
    long long max = 0;
    long long dis;

    std::array<discal, 100003> r;
    max = 0;
    for (int i = 1; i <= n; ++i)
    {
        rdiscal = {a[i].dis, rdiscal.cal + a[i].cal};
        //printf("rdiscal dis = %lld cal = %lld\n", rdiscal.dis, rdiscal.cal);
        if (rdiscal.cal - rdiscal.dis > max)
        {
            max = rdiscal.cal - rdiscal.dis;
            dis = rdiscal.dis;
        }
        r[i] = {dis, max};
    }
    std::array<discal, 100003> l;
    max = 0;
    for (int i = n; i > 0; --i)
    {
        ldiscal = {c - a[i].dis, ldiscal.cal + a[i].cal};
        if (ldiscal.cal - ldiscal.dis > max)
        {
            max = ldiscal.cal - ldiscal.dis;
            dis = ldiscal.dis;
        }
        l[i] = {dis, max};
        //printf("max = %lld\n", max);
    }
    max = std::max(r[n].cal, l[1].cal);
    for (int i = 1; i < n; ++i)
    {
        if (r[i].cal + l[i + 1].cal - r[i].dis > max)
        {
            max = r[i].cal + l[i + 1].cal - r[i].dis;
        }
        if (r[i].cal + l[i + 1].cal - l[i + 1].dis > max)
        {
            max = r[i].cal + l[i + 1].cal - l[i + 1].dis;
        }
        //printf("max = %lld\n", max);
        //printf("l[i].cal = %lld r[i].cal = %lld\n", l[i].cal, r[i].cal);
    }
    printf("%lld\n", max);
}