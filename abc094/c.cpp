#include <cstdio>
#include <array>
#include <algorithm>

int main()
{
    int n;
    std::array<int, 200005> a;
    std::array<int, 200005> b;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    std::copy(a.begin(), a.begin()+n, b.begin());
    std::sort(b.begin(), b.begin()+n);

    int mid = n / 2 - 1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= b[mid])
        {
            printf("%d\n", b[mid+1]);
        }
        else
        {
            printf("%d\n", b[mid]);
        }
    }
    return 0;
}