#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

int main()
{
	int s;
	scanf("%d", &s);
	double diff = 1000000000;
    int n, r;
	std::array<int, 100005> a;
	for (int i = 0; i < s; ++i)
	{
		scanf("%d", &a[i]);
	}
    std::sort(a.begin(), a.begin()+s);
	n = a[s - 1];
	for (int i = 0; i < s; ++i)
	{
		if (diff > std::abs(a[i] - n / 2.0))
		{
			diff = std::abs(a[i] - n / 2.0);
			r = a[i];
		}
	}

    printf("%d %d\n", n, r);
	return 0;
}
